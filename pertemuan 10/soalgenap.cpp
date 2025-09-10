#include <iostream>
#include <string>
using namespace std;

class Buku {
private:
    string judul;
    string penulis;
    bool dipinjam;

public:
    Buku(string j, string p) : judul(j), penulis(p), dipinjam(false) {}

    // agar hanya bisa dipanggil oleh friend class Petugas
    void tampilInfo() const {
        cout << "Judul: " << judul << ", Penulis: " << penulis 
             << ", Status: " << (dipinjam ? "Dipinjam" : "Tersedia") << endl;
    }

    friend class Petugas; // Hanya Petugas boleh ubah status pinjam
};
// Class Peminjam
class Peminjam {
private:
    string nama;
    int id;
    int totalPinjaman;
public:
    Peminjam(string n, int i) : nama(n), id(i), totalPinjaman(0) {}

    // Memberikan akses terbatas ke Petugas
    friend class Petugas;

    // Memberikan akses hanya untuk membaca data kepada Admin
    friend class Admin;
};
//class petugas
class Petugas {
private:
    string nama;
    int idPetugas;
    string levelAkses;

public:
    Petugas(string n, int id, string akses)
        : nama(n), idPetugas(id), levelAkses(akses) {}

    void prosesPinjam(Buku& b, Peminjam& p) {
        if  (b.dipinjam) {
            b.dipinjam = true;
            p.totalPinjaman++;
            cout << nama << " berhasil meminjam buku.\n";
        } else {
            cout << "Buku sudah dipinjam.\n";
        }
    }

    void prosesKembali(Buku& b, Peminjam& p) {
        if (b.dipinjam) {
            b.dipinjam = false;
            p.totalPinjaman--;
            cout << nama << " berhasil mengembalikan buku.\n";
        } else {
            cout << "Buku belum dipinjam.\n";
        }
    }

    // Memberikan akses kepada class Admin untuk ubah level akses
    friend class Admin;
};
// Class Admin
class Admin {
    public:
        void lihatStatistik(const Peminjam& p) {
            cout << "[Statistik] Total buku dipinjam oleh peminjam: " << p.totalPinjaman << endl;
        }

        void lihatBuku(const Buku& b) {
            b.tampilInfo(); // memanggil method publik, tidak akses langsung ke private
        }

        void ubahLevelAkses(Petugas& ptg, const string& newLevel) {
            ptg.levelAkses = newLevel;
            cout << "Level akses petugas diubah menjadi: " << newLevel << endl;
        }
    };
// program utama 
int main() {
    Buku buku1("filosopi kopi", "sule martinez");
    Peminjam peminjam1("anji", 101);
    Petugas petugas1("Burhan", 1, "medium");
    Admin admin1;

    petugas1.prosesPinjam(buku1, peminjam1);
    admin1.lihatStatistik(peminjam1);
    admin1.lihatBuku(buku1);
    admin1.ubahLevelAkses(petugas1, "high");
    petugas1.prosesKembali(buku1, peminjam1);
    admin1.lihatStatistik(peminjam1);

    return 0;
}
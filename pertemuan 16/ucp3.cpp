#include <iostream>
#include <string>
using namespace std;

class jalurMasuk {
protected:
    int nomorpendaftaran;
    string nama, statuskelulusan;
    float biayapendaftaran, totalbiaya;

private:
    float penghasilanorangtua;

public:
    // Setter dan Getter untuk penghasilanorangtua (Enkapsulasi)
    void setPenghasilanOrangTua(float penghasilan) {
        penghasilanorangtua = penghasilan;
    }

    float getPenghasilanOrangTua() {
        return penghasilanorangtua;
    }

    // Virtual function untuk input data dasar
    virtual void inputData() {
        cout << "Masukkan nama siswa : ";
        cin.ignore(); // Membersihkan buffer sebelum getline
        getline(cin, nama);
        cout << "Masukkan nomor pendaftaran : ";
        cin >> nomorpendaftaran;
        cout << "Masukkan penghasilan orang tua: ";
        float gaji;
        cin >> gaji;
        setPenghasilanOrangTua(gaji);
    }

    // Virtual function untuk menampilkan data
    virtual void printData() {
        cout << "\n--- Data Siswa ---" << endl;
        cout << "Nama              : " << nama << endl;
        cout << "Nomor Pendaftaran : " << nomorpendaftaran << endl;
        cout << "Evaluasi Kelulusan: " << statuskelulusan << endl;
    }

    // Pure virtual function untuk memaksa kelas turunan mengimplementasikan evaluasi
    virtual void evalkelulusan() = 0; 
};

// Kelas Turunan Jalur Akademik
class jalurAkademik : public jalurMasuk {
    float nilaiujian;
public:
    void inputData() override {
        jalurMasuk::inputData(); // Panggil input data dasar dari parent
        cout << "Masukkan nilai ujian       : ";
        cin >> nilaiujian;
    }

    void evalkelulusan() override {
        // Logika kelulusan: Jika nilai ujian >= 75 dinyatakan Lulus
        if (nilaiujian >= 75) {
            statuskelulusan = "Lulus";
        } else {
            statuskelulusan = "Tidak Lulus";
        }
    }
};

// Kelas Turunan Jalur Non-Akademik
class jalurNonAkademik : public jalurMasuk {
    string tingkatpiagam;
public:
    void inputData() override {
        jalurMasuk::inputData(); // Panggil input data dasar dari parent
        cout << "Masukkan tingkat piagam (Nasional/Provinsi/Tidak): ";
        cin >> tingkatpiagam;
    }

    void evalkelulusan() override {
        // Logika kelulusan: Jika memiliki piagam Nasional atau Provinsi dinyatakan Lulus
        if (tingkatpiagam == "Nasional" || tingkatpiagam == "Provinsi") {
            statuskelulusan = "Lulus";
        } else {
            statuskelulusan = "Tidak Lulus";
        }
    }
};

int main() {
    jalurMasuk* mhs = nullptr; // Pointer polimorfik
    int pilihan;
    char ulang;

    do {
        cout << "\nPilih Jalur Masuk:" << endl;
        cout << "1. Jalur Akademik" << endl;
        cout << "2. Jalur Non-Akademik" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;

        if (pilihan == 1) {
            mhs = new jalurAkademik();
        } else if (pilihan == 2) {
            mhs = new jalurNonAkademik();
        } else {
            cout << "Pilihan tidak valid!" << endl;
            continue;
        }

        // Proses Input dan Evaluasi menggunakan Polimorfisme
        mhs->inputData();
        mhs->evalkelulusan();
        mhs->printData();

        delete mhs; // Hapus objek dari memori setelah selesai

        cout << "\nApakah ingin mengulang? (y/n): ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');

    return 0;
}
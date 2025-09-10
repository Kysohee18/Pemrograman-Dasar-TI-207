#include <iostream>
#include <string>
using namespace std;

class Siswa; // deklarasi awal class Siswa agar bisa digunakan di class Orang

class Orang {
private:
    string nama;

public:
    void Setnama(string pnama);
    friend class Siswa; // memperbolehkan Siswa mengakses private member
};

class Siswa {
private:
    int id;

public:
    void setid(int pid);
    void displayAll(Orang &a);
};

void Siswa::displayAll(Orang &a) {
    cout << id << endl << a.nama << endl;
}

void Orang::Setnama(string pnama) {
    nama = pnama;
}

void Siswa::setid(int pid) {
    id = pid;
}

int main() {
    Orang joko;
    joko.Setnama("Joko Susilo");

    Siswa joko_siswa;
    joko_siswa.setid(1);
    joko_siswa.displayAll(joko);

    return 0;
}

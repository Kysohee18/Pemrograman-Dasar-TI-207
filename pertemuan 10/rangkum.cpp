#include <iostream>
using namespace std;


class Mahasiswa{
    private:
        static int jumlahMhs; 
    public: 
    string nama;
    Mahasiswa(string pNama) {
        nama = pNama;
        ++jumlahMhs;
        cout <<"mahasiswa dibuat" << endl;

    }
    ~Mahasiswa(){
        cout << "destructor terpanggil" << jumlahMhs << endl;
        cout <<" nama terhauspus" << nama << endl;
    }

    static void getjumlah(int pjumlah){
        
    }
    static int getjumlahmhs(){
        return jumlahMhs;
    }


};
int Mahasiswa::jumlahMhs = 0;


int main() {
    cout << "jumlah mahasiswa"<< Mahasiswa::getjumlahmhs() << endl;

    Mahasiswa mhs1("sukirman");
    Mahasiswa mhs2("kukir");
    Mahasiswa mhs3("sutarjo");


    cout << "menampilkan mhs" << endl;



    return 0;
}

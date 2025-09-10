#include <iostream>
#include <exception>
//untuk objek exception yang akan digunakan
#include <array>
//untuk objek array yang digunakan
using namespace std;


int main() {
    cout << "awal program " << endl; //penanda 1:...
    try{
        array<int,3> data ={1, 2, 3};
        //pesan array integer 3 elemen
        cout << data.at(5)<<endl;
        //memanggil array elemen ke 5
    }
    catch (exception& e) {
        //penangkap menggunakan obyek exception
        cout << e.what() << endl;
        /*akan dieksekusi karna array data hanya memiliki 3 elemen*/
    }
    cout <<"baris program yang terakhir" << endl;
    /*penanda 2: bahwa program berjalan tanpa berhenti
    meskipun terjadi kesalahan*/
    return 0;
}

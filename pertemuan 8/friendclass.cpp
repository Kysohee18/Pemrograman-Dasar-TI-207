#include <iostream>
using namespace std;

class Mahasiswa{
    public:
    int nim;
    void showNim(){
        cout<<"No Induk = " <<nim<<endl;
    }
};


    int main() {
    Mahasiswa mhs[1];         // array of 1 object of Mahasiswa
    mhs[0].showNim();         // use index to access array element

    Mahasiswa& refmhs = mhs[0];
    refmhs.nim = 2;
    mhs[0].showNim();

    Mahasiswa* pmhs = &mhs[0];
    pmhs->nim = 3;
    pmhs->showNim();

    return 0;
}



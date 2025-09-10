#include <iostream>
using namespace std;
float luasPersegiPanjang(float a, float b){
    return a * b;
}

float luasLingkaran(float a) {
    return 3.14*a*a;
}
int main() {
    int pilihan;
    float panjang, lebar;
    float jejari;

do{
    cout << "1. menu" << endl;
    cout << "2. Luas persegi panjang" << endl;
    cout << "3. Keluar" << endl;

    cout << "pilihan (1/2/3) = ";
    cin >> pilihan; 

    switch (pilihan)
    {
        case 1: 
        cout << "hitung luas persegi panjang" << endl;
        cout << "masukkan panjang = ";
        cin >> panjang; 
        cout << "masukkan lebar = ";
        cin >> lebar;
        cout << "Luas persegi panjang = " << luasPersegiPanjang

    }
}
}


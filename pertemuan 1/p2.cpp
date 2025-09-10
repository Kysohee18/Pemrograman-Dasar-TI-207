#include <iostream>
using namespace std;

float panjang, lebar; //val global

void inputData(){
    cout << "Masukkan panjangnya";
    cin >> panjang;

    cout << "Masukkan lebarnya";
    cin >> lebar;
}
 
float fungsiLuas()
{
    return panjang * lebar;
}

float hitungLuasBerparameter(float a, float b)
{
    return a * b;
}

void tampilkanFungsiLuas()
{
    cout << "luas persegi panjang (fungsi tidak berparameter): " << fungsiLuas()<< endl;
}

void tampilkanLuasBerparameter()
{
    cout << "luas persegi panjang (fungsi berparameter): " << hitungLuasBerparameter(panjang, lebar);
}

int main()
{
    inputData();
    tampilkanFungsiLuas();
    tampilkanLuasBerparameter();
}
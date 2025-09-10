#include <iostream>
using namespace std;

class Mobil
{
public:
    string Merkmobil, Tipemobil;
    private:
    int Hargamobil;
    
public:
    void input_data(){
        cout << "masukkan nama mobil   :";
        cin >> Merkmobil;
        cout << "masukkan tipe mobil   : ";
        cin >> Tipemobil;
        cout << "masukkan harga mobil  :";
        cin >> Hargamobil;
    
    }
    void  outputdata(){
        cout <<"hargamobil :" <<Hargamobil <<endl;
    
    
    }
    
    
    };
    int main()
    {
        Mobil avanza ;
        avanza.input_data();
        cout<<"jenis mobil = " << avanza.Merkmobil <<endl;
        cout<<"tipe mobil  = " << avanza.Tipemobil <<endl;
    
    
    }
    

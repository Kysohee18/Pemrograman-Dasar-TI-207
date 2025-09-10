#include <iostream>
using namespace std;

class persegi_panjang{
    public: 
        int panjang, lebar;
    
    public:
        void inputdata(){
        cout<<"masukkan panjang";
        cin >> panjang;
        cout<<"masukkan lebar";
        cin >>lebar;
        }
        private:
        float luas(int p, int l){
            return p*l;

        }

    public:
        void outputdata(){
            cout<<"menampilkan hasil ="<< luas(panjang, lebar);

        }
};

int main(){
    persegi_panjang pp;
    pp.inputdata();
    pp.outputdata();
    
}

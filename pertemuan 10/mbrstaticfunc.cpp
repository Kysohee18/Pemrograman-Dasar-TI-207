#include <iostream>
#include <string>
using namespace std;

class mahasiswa{
    private:
        static int nim;
    public:
        int id;
        string nama;

        void setiD();
        void printALL();

        static void setnim(int pNim){nim=pNim; /*definisi fuction*/}
        static int getnim(){return nim; /*definisi fuction*/}

        mahasiswa(string pnama):nama(pnama){setiD();}
};
int mahasiswa::nim=0;

void mahasiswa::setiD(){
    id = ++nim;
}

void mahasiswa::printALL(){
    cout <<"ID  =  "<<id<<endl;
    cout <<"Nama = "<<nama<<endl;
    cout <<endl;
}
int main(){
    mahasiswa mhs1("sri dadi");
    mahasiswa mhs2("budi jatmiko");
    mahasiswa::setnim(9);//mengakses nim melalui static member fuction setnim
    mahasiswa mhs3("andi janu");
    mahasiswa mhs4("joko wahono");

    mhs1.printALL();
    mhs2.printALL();
    mhs3.printALL();
    mhs4.printALL();

    cout<<"akses dari luar object = "<<mahasiswa::getnim()<<endl; //mengakses nim melalui static member fuction 
    
    return 0;
    

}
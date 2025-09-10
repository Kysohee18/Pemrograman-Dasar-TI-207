#include <iostream>
using namespace std;

class pegawai{
    protected:
        pegawai *arr;
        string nama, jabatan;
        int gaji;
        static int idPegawai;
    
    public:
        pegawai(int) ; // contructor
        pegawai(string);
        pegawai();//destructor
        void idPegawai();
        void cetakData();

        
    friend class cetakData;
};

//contructor
Pegawai :: pegawai(int i){ // contructor
    nopegawai = i;
    arr = new int[i];
    isiData();
    }


pegawai :: pegawai(int ){
    cout<<endl;
    cetakData;
    delete[]arr;
    cout<<"==menghapus data==" << endl;
} // destructor

pegawai::pegawai(string){
    cout <<endl;
    cetakData;
    delete[]arr;
    cout << "mengahapus semua data" << endl;

}

void cetakdata :: cetakdata {
    cout << "Nama Pegawai :" <<pegawai.n
    cout << ""
}

class pegawaiKontrak(){
    public:
        int tunjangan;
        string lamakontrak;

    

};
int main(){
    //menghasilkan total
}
// tak tahan lagi


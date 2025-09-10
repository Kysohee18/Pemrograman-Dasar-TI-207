#include <iostream>
#include <string>
using namespace std;

class  jalurMasuk {
    protected:
        int nomorpendaftaran;
        string nama, statuskelulusan;
        float biayapendaftaran, totalbiaya;
        
    private:
        float penghasilanorangtua;


    public:
  
    virtual void printData(){
        jalurMasuk::printData();
         cout << " masukkan nama siswa : "<< nama << endl;
         cout << " evaluasi kelulusan : " << statuskelulusan <<endl;
    }

       //  getpenghasilanorangtua()
       // setpenghasilanorangtua()
}; 

//turunan 
class jalurAkademik : public  jalurMasuk
{   
 float nilaiujian;
  void inputData(){
     cout << "masukkan nama mahasiswa    :" << nama << endl ;
     cout << "masukkan nomor pendaftaran :" << nomorpendaftaran << endl;
     cout << "masukkan nilai ujian       :"<< nilaiujian <<endl;
    }
    
          
    
};
   


// turunan 
class jalurNonAkademik : public jalurMasuk
{   string tingkatpiagam;
    void inputData() {
        cout << "masukkan nama mahasiswa : "<< nama << endl;
        cout << "masukkan nomor pendaftaran" << nomorpendaftaran <<endl;
       

    }
    void evalkelulusan(){
        do {
        cout << "masukkan tingkat piagam (nasional/provinsi/tidak ada)" << endl;
         cin >> tingkatpiagam;
      while (tingkatpiagam =  ){
        cout << " tidak lulus"
    


        }
        }
         
    }

};


int main(){
  



}
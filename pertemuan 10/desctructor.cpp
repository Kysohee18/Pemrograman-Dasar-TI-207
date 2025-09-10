#include <iostream>
using namespace std;

class angka {
    private:
        int *arr;
        int panjang;
    public:
        angka(int); //contructor
        angka(); //desctructor
        void cetakData();
        void isiData();
};
//definisi member fuction 
angka::angka(int i){ // contructor
    panjang = i;
    arr = new int[i];
    isiData();
}
angka::angka(){ // desctructor
    cout<<endl;
    cetakData;
    delete[]arr;
    cout<<"alamat array sudah dilepaskan" << endl;
}
void angka::cetakData(){
    for(int i=1;i<=panjang;i++){
        cout<<i<<" = "; cin >>arr[i];
    }
    cout<<endl;
}
int main(){
    angka belajarcpp(3); // contructor dipanggil
    angka *ptrbelajarcpp = new angka(5); //contructor dipanggil
    delete ptrbelajarcpp; // decstructor dipanggil
    return 0;
};//desctructor dipanggil
#include <iostream>
#include <string>

using namespace std;

int main() {
    string namapemesan, nomorpemesan;
    char kategoritiket;
    int jumlahtiket;
    double hargatiket, totalharga, diskon, hargaakhir;

    cout <<"masukkan nama pemesan : ";
    getline(cin, namapemesan);
   

    cout <<"masukkan nomor identitas : ";
    getline(cin,nomorpemesan);

    cout <<"masukkan kategori tiket (V/R):  ";
    cin >>kategoritiket;


    do{
         cout<<"masukkan jumlah tiket";
         cin >> jumlahtiket;
         if (jumlahtiket > 4)
         {
            cout <<"maksimal pembelian 4 tiket. ulangi pembelian kembali. \n ";
         }
    }        while (jumlahtiket >4);
        
         //input harga satuan tiket
         cout << "masukkan harga satuan tiket :  ";
         cin >> hargatiket;
 
         //total harga
        totalharga = jumlahtiket * hargatiket;

         // hitung diskon berdasarkan kategori tiket
         if (kategoritiket == 'v' || kategoritiket == 'v') {
            diskon = 0.1  * totalharga;
            
          } else {
            diskon = 0;
        }
    
        hargaakhir = totalharga - diskon;
    


    cout << "\n--- Struk Pemesanan Tiket ---\n";
    cout << "Nama Pemesan: " << namapemesan << endl;
    cout << "Nomor Identitas: " << nomorpemesan << endl;
    cout << "Kategori Tiket: " << kategoritiket << endl;
    cout << "Jumlah Tiket: " << jumlahtiket << endl;
    cout << "Harga Satuan Tiket: Rp" << hargatiket << endl;
    cout << "Total Harga: Rp" << totalharga << endl;
    cout << "Diskon: Rp" << diskon << endl;
    cout << "Harga Akhir: Rp" << hargaakhir << endl;
    

    



    







    return 0;
    
}

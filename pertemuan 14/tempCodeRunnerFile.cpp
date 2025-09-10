#include <iostream>
#include <fstream>
#include <string>
using namespace std;


//StreamReaderandWriter_0046
// minimal 10 commit

int main () {
    string baris;

    //operasi file dalam mode menulis
    ofstream outfile;
    // menunjuk ke sebuah nama file untu membuka 
    outfile.open("contohfile.txt");

    cout << ">= Menulis file, \'q\' untuk keluar" <<endl;


    //unlimited loop
    while(true) {
        cout << "- ";
        //mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        //loop akan berhenti jika anda memasukan karakter q
        if ( baris == "q") break;
        // menulis dan memasukkan nilai dari 'baris' ke dalam file
        outfile << baris << endl;
    }
    //v1
    // selesai dalam menulis sekarang tutup filenya
    outfile.close();
    //V2
    // operasi file dalam mode membaca
    ifstream infile;
    // menunjuk ke sebuah file untuk membuka 
    infile.open("contohfile.txt");

    cout << endl << ">= Membuka dan membaca file " << endl;
    //jika file ada maka
    if (infile.is_open())
    {
        // melakukan perulangan setiap baris
        while (getline(infile, baris))
        {
            // dan tampilkan disini 
            cout << baris << '\n';
        }
        // tutup file tersebut setelah selesai 
        infile.close();
    }
    // jika tidak ditemukan file makan akan menampilkan ini 
    else cout <<"Unable to open file";
    return 0;



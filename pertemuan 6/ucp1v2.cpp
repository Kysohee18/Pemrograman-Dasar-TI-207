#include <iostream>
#include <string>

using namespace std;

int main() {
    string namaPemesan, nomorIdentitas;
    char kategoriTiket;
    int jumlahTiket;
    double hargaTiket, totalHarga, diskon, hargaAkhir;

    // Input nama pemesan
    cout << "Masukkan nama pemesan: ";
    getline(cin, namaPemesan);

    // Input nomor identitas
    cout << "Masukkan nomor identitas: ";
    getline(cin, nomorIdentitas);

    // Input kategori tiket
    cout << "Masukkan kategori tiket (V/R): ";
    cin >> kategoriTiket;

    // Input jumlah tiket dengan validasi
    do {
        cout << "Masukkan jumlah tiket: ";
        cin >> jumlahTiket;
        if (jumlahTiket > 4) {
            cout << "Maksimal 4 tiket per pemesanan. Silakan masukkan ulang.\n";
        }
    } while (jumlahTiket > 4);

    // Input harga satuan tiket
    cout << "Masukkan harga satuan tiket: ";
    cin >> hargaTiket;

    // Hitung total harga
    totalHarga = jumlahTiket * hargaTiket;

    // Hitung diskon berdasarkan kategori tiket
    if (kategoriTiket == 'V' || kategoriTiket == 'v') {
        diskon = 0.1 * totalHarga;
    } else {
        diskon = 0;
    }

    // Hitung harga akhir setelah diskon
    hargaAkhir = totalHarga - diskon;

    // Cetak struk pemesanan tiket
    cout << "\n--- Struk Pemesanan Tiket ---\n";
    cout << "Nama Pemesan: " << namaPemesan << endl;
    cout << "Nomor Identitas: " << nomorIdentitas << endl;
    cout << "Kategori Tiket: " << kategoriTiket << endl;
    cout << "Jumlah Tiket: " << jumlahTiket << endl;
    cout << "Harga Satuan Tiket: Rp" << hargaTiket << endl;
    cout << "Total Harga: Rp" << totalHarga << endl;
    cout << "Diskon: Rp" << diskon << endl;
    cout << "Harga Akhir: Rp" << hargaAkhir << endl;

    return 0;
}

#include <iostream>
using namespace std;

class Barang{
    public  :
        string nama;
        float jumlah;
        string kategori;
        string tanggalProduksi;

    void printData(){
        cout << "NIM : " << nama << endl;
        cout << "Jumlah : " << jumlah << endl;
        cout << "Kategori : " << kategori << endl;
        cout << "TanggalProduksi : " << tanggalProduksi << endl;
    }
}; //batas class



int main(){
    Barang elektronik;
    elektronik.nama = "Kipas";
    elektronik.jumlah = 50;
    elektronik.kategori = "elektronik";
    elektronik.tanggalProduksi = "1/1/2025";

    Barang nonElektronik;
    nonElektronik.nama = "Kompos Gas";
    nonElektronik.jumlah = 20;
    nonElektronik.kategori = "nonElektronik";
    nonElektronik.tanggalProduksi = "24/5/2025";

    elektronik.printData();
    nonElektronik.printData();
}
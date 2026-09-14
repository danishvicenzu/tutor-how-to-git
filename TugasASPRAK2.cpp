#include <iostream>
using namespace std;
int main(){
    int minuman;
    int bayar;
    int airputih=4000;
    int teh=5000;
    int kopi=7000;
    cout<<"===Daftar Minuman==="<<endl;
    cout<<"1.Air Putih"<<endl;
    cout<<"2.Teh Kotak"<<endl;
    cout<<"3.Kopiko Lucky Day"<<endl;
    cout<<"minuman apa yang kamu pilih? --->";cin>>minuman;
    switch (minuman){
        case 1: minuman=4000, cout<<"Air Putih = Rp4000"; break;
        case 2: minuman=5000, cout<<"Teh Kotak = Rp5000"; break;
        case 3: minuman=7000,cout<<"Kopiko Lucky Day = Rp7000"; break;
        default: cout<<"tolong masukkan angka yang sesuai";exit(0);
    }
    cout<<endl;
    cout<<"masukkan uang : Rp";
    cin>>bayar;
    

    if(bayar<minuman){
        cout << "maaf uang yang anda masukkan kurang mencukupi";exit;
    }
    else if (bayar>=minuman){
        cout<<"harga minumanmu : Rp"<<minuman<<endl;
        cout<<"uang bayaranmu  : Rp"<<bayar<<endl;
        cout<<"kembalian       : Rp"<<bayar-minuman<<endl;
    }
    else{
        cout<<"error";
    }
}
/*
    cin kode minuman
    cin bayar
    cout gagal uang tidak cukup
    cout berhasil ini kembalianmu
    cout tolong input kode yang sesuai
    */
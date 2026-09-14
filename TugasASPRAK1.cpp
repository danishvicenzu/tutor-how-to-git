#include <iostream>
using namespace std;
int main(){
    int bayar;
    cout<<"Masukkan Harga Bayar : Rp";
    cin>>bayar;
    int diskon1=bayar*0.0;
    int diskon2=bayar*0.1;
    int diskon3=bayar*0.2;
    if (bayar<100000){
        cout << "Diskon(0%)  : Rp"<<diskon1<<endl;
        cout << "Total Bayar : "<<bayar-diskon1<<endl;
    }
        else if(bayar>=100000&&bayar<=299999){
            cout << "Diskon(10%)  : Rp"<<diskon2<<endl;
            cout << "Total Bayar  : Rp"<<bayar-diskon2<<endl;
        }
        else if(bayar>299999){
            cout << "Diskon(20%)  : Rp"<<diskon3<<endl;
            cout << "Total Bayar  : Rp"<<bayar-diskon3<<endl;
        }
        else {
            cout << "tolong masukkan nominal dalam bentuk angka";
        }
        return 0;
}
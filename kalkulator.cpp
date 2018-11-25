#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d,e,f,pilih;
    char jawab;

    cout<< "Masukan Nilai Pertama : ";
    cin >>a;
    cout << "Masukan Nilai Kedia : ";
    cin >>b;

label:
    cout<< "Pilihan Operasi yang di Pilih "<<endl;
    cout<< "1.Penjumlahan "<<endl;
    cout<< "2.Pengurangan "<<endl;
    cout<< "3.Perkalian "<<endl;
    cout<< "4.Pembagian "<<endl;
    cin>>pilih;

    if(pilih==1){
        c = a + b;
        cout<< "Nilai Penjumlahan = "<<c<<endl;
    }
    if(pilih==2){
        d = a - b;
        cout<< "Nilai Pengurangan = "<<d<<endl;
    }
    if(pilih==3){
        e = a * b;
        cout<< "Nilai Perkalian = "<<e<<endl;
    }
    if(pilih==4){
        f = a / b;
        cout<< "Nilai Pembagian = "<<f<<endl;
    }

    cout<< "Tekan 'Y' jika ingin Kembali Ke Menu ";
    cin>>jawab;
    if (jawab== 'Y' || jawab== 'y')
        goto label;


    return 0;
}

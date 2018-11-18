#include<iostream>

using namespace std;

//deklarasi fungsi
int hitung(int,int);
void cetak(int);

int inputdata() {
    cout << "masukan data: ";
    int a;
    cin >> a;
    return a;
}

int main() {
    int a = hitung(10,2);
    cetak(a);

    int b = inputdata();
    int c = inputdata();
    cetak(hitung(b,c));

    cetak(hitung(inputdata(), inputdata()));
}

//implementasi fungsi
int hitung (int a, int b) {
    return a+b;
}

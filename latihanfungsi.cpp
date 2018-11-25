#include <iostream>
using namespace std;

int hitung (int, int);
int kurang (int, int);
int bagi (int, int);
void cetak(int);

int main () {
    int a=hitung(2,5);
    cetak(a);
    int c=kurang(10,5);
    cetak(c);
    int e=bagi(20,10);
    cetak(e);
}
int hitung(int a, int b) {
    return a*b;
}
int kurang (int c, int d){
    return c-d;
}
int bagi (int e, int f){
    return e/f;
}
void cetak (int a){
    cout << "nilai dari variabel adalah: " << a << endl;
}

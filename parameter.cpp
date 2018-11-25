#include <iostream>
using namespace std;

void nilai(int  &a) {
    a= 10;
}

int main() {
    int a =5;
    cout<< "nilai awal : " << a << endl;
    nilai(a);
    cout << "nilai akhir : "<< a << endl;
}

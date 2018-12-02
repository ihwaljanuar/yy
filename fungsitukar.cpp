#include <iostream>
using namespace std;

void tukar (int &a , int &b){
    int tmp = a ;
    a = b ;
    b = tmp ;
}

int main ()
{
         int a = 5;
    int b = 10;
cout << endl;
    cout << "Nilai variabel a adalah : " << a <<endl;
    cout << "Nilaii variabel b adalah : " << b <<endl;

tukar (a,b);

    cout << "Nilai variabel a adalah : " << a << endl;
    cout <<"Nilai variabel b adalah : " << b << endl;
    cout << endl;
}



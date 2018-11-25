#include <iostream>
using namespace std;


int total;

int main(){
    int total =8;
    cout <<"total lokal = " << total << endl;
    :: total = 20;
    cout << "total global = " << ::total;

}

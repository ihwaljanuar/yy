#include <iostream>
using namespace std;

void hitung() {
    static int total  = 0;
    total++;
    cout << "nilai total = " << total << endl;
}

int main() {
    hitung();
    hitung();
    hitung();

}

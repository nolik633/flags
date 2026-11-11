#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int a, b;

    cout << "Enter number A: ";
    cin >> a;

    cout << "Enter number B: ";
    cin >> b;

    cout << "\n--- BITWISE DIFFERENCE ---" << endl;
    cout << "A (bin): " << bitset<8>(a) << endl;
    cout << "B (bin): " << bitset<8>(b) << endl;


    return 0;
}







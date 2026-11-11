#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int a, b;

    cout << "Enter number A: ";
    cin >> a;
    cout << "Enter number B: ";
    cin >> b;

    cout << "\n--- BINARY REPRESENTATION ---" << endl;
    cout << "A = " << a << " (bin: " << bitset<8>(a) << ")" << endl;
    cout << "B = " << b << " (bin: " << bitset<8>(b) << ")" << endl;

    cout << "\n--- BITWISE OPERATIONS ---" << endl;
    
    cout << "A & B  (AND):   " << (a & b) << " (bin: " << bitset<8>(a & b) << ")" << endl;
    
    cout << "A | B  (OR):    " << (a | b) << " (bin: " << bitset<8>(a | b) << ")" << endl;
    
    cout << "A ^ B  (XOR):   " << (a ^ b) << " (bin: " << bitset<8>(a ^ b) << ")" << endl;
    
    cout << "~A     (NOT A): " << (~a) << " (bin: " << bitset<8>(~a) << ")" << endl;
    
    cout << "A << 1 (Shift): " << (a << 1) << " (bin: " << bitset<8>(a << 1) << ")" << endl;
    
    cout << "A >> 1 (Shift): " << (a >> 1) << " (bin: " << bitset<8>(a >> 1) << ")" << endl;

    return 0;  
}
#include <iostream>
using namespace std;
int main() {
    cout << "Convert from fahrenheit to Celsius" << endl;
    cout << "Insert temprature in Fahrenheit: ";
    double Fahrenheit = 0.0;
    cin >> Fahrenheit;
   // double Celsius = (Fahrenheit - 32)/1.8;
    cout << "Temp in Celsius : " <<  (Fahrenheit - 32)/1.8;;
    cout << "Hello, World!" << endl;
    
    // int a = 1;
    // int b = 2;
    // cout<<a<<endl;
    // cout<<b;
    // //swapIntegerValue(&a, &b);
    // cout<<a;
    // cout<<b;
    return 0;
}

void swapIntegerValue(int *a, int *b) {
    int *c = b;
    b = a;
    a = c;
}

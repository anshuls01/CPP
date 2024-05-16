#include<iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include<array>
using namespace std;

void swapIntegerValue(int *a, int *b) {
    int *c = b;
    b = a;
    a = c;
}
int main() {
    // cout << "Convert from fahrenheit to Celsius" << endl;
    // cout << "Insert temprature in Fahrenheit: ";
    // double Fahrenheit = 0.0;
    // cin >> Fahrenheit;
    // cout << "Temp in Celsius : " <<  (Fahrenheit - 32)/1.8;;

    // cout << "generate Random Number" <<endl;
    // srand(time(nullptr));
    // cout<< rand();

    // cout << "read value from console";
    // string myVariable;
    // getline(cin, myVariable);
    // cout << myVariable << endl;

    cout << "Arrays in c++" << endl;
    int array[] = {1,2,3,4};
    // for(int i:array) {
    //     cout << i <<endl;
    // }
    cout << "Size of int Array : ";
    cout << sizeof(array)/sizeof(int)<<endl;

    string stringArray[] = {"abc","dffg","a"};
    cout << "Length of string array :";
    int counter= 0;
    for(string s:stringArray) {
     counter++;
    }
    cout << counter <<endl;
    cout << "Length of string array :";
    cout<< end(stringArray) - begin(stringArray)<<endl;

    cout << "Length of string array using standard library: ";
    cout<< stringArray->size()<<endl;
    int length = *(&stringArray +1)-stringArray;
    cout<< length <<endl;
    // int a = 1;
    // int b = 2;
    // // cout<<a<<endl;
    // // cout<<b;
    // swapIntegerValue(&a, &b);
    // cout<<a<<endl;
    // cout<<b;
    return 0;

}



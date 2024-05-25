#include<iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include<array>
#include <vector>;
#include "MyClass.h"
#include "FirstProgram.h"
using namespace std;

void swapIntegerValueByRef(int &a, int &b) {
    int c = b;
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

    // cout << "Arrays in c++" << endl;
    // int array[] = {1,2,3,4};
    // // for(int i:array) {
    // //     cout << i <<endl;
    // // }
    // cout << "Size of int Array : ";
    // cout << sizeof(array)/sizeof(int)<<endl;
    //
    // string stringArray[] = {"abc","dffg","a"};
    // cout << "Length of string array :";
    // int counter= 0;
    // for(string s:stringArray) {
    //  counter++;
    // }
    // cout << counter <<endl;
    // cout << "Length of string array :";
    // cout<< end(stringArray) - begin(stringArray)<<endl;
    //
    // cout << "Length of string array using standard library: ";
    // cout<< stringArray->size()<<endl;
    // int length = *(&stringArray +1)-stringArray;
    // cout<< length <<endl;

    // cout << "Multi Dimensional array" << endl;
    // string letters[2][4] = {
    //     {
    //         "A", "B", "C, "D"
    //     },
    //     {
    //         "A", "B", "C, "D"
    //     }
    // };

    // cout << "Structure" <<endl;;
    // struct {
    //     string name;
    //     int value;
    // } struct1;
    //
    // struct1.name="xyz";
    // struct1.value=1;
    //
    // cout << struct1.name << "," << struct1.value <<endl;
    //
    // cout << "structure with multiple valriables" <<endl;
    // struct {
    //     string brand;
    //     string model;
    //     int year;
    // } myCar1, myCar2;
    //
    // myCar1.brand = "BMW";
    // myCar1.model = "X5";
    // myCar1.year = 1999;
    //
    // // Put data into the second structure
    // myCar2.brand = "Ford";
    // myCar2.model = "Mustang";
    // myCar2.year = 1969;
    //
    // cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
    // cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

    // cout << "Named structure" <<endl;
    // struct mystruct{
    //     string name;
    //     int value;
    // };
    // mystruct car1;
    // car1.name="BMW";
    // car1.value= 1999;
    //
    // mystruct car2;
    // car2.name="Ford";
    // car2.value= 1969;
    //
    // cout << car1.name << " " << car1.value  << "\n";
    // cout << car2.name << " " << car2.value  << "\n";

    // cout << "Reference Variables" <<endl;;
    // string food = "Pizza";
    // string &meal = food;
    //
    // cout << food << "  " << meal <<endl;
    // cout << "Food address is : " << &meal << endl;
    // cout << &food << endl;

    // cout << "Pointers" <<endl;;
    // string food = "Pizza";
    // string* ptr = &food;
    // cout << ptr<<endl;
    // cout << *ptr<<endl;
    // *ptr="Burger";
    // cout << *ptr << endl;
    // cout<< food << endl;

    // cout << "function declaration and definition" << endl;
    // cout << sum(2,2) << endl;

    // int a = 1;
    // int b = 2;
    // cout<<a<<endl;
    // cout<<b<< endl;
    // swapIntegerValueByRef(a, b);
    // cout<<a<<endl;
    // cout<<b<<endl;

    // MyClass obj;
    // obj.name="sedfw";
    // obj.value=123;
    // obj.printValue();

    // cout << "Vectors" << endl;
    // vector<int> ints;
    // vector<int> ints1 = {1,2,3,4,5}; // 5 length vector
    // vector<int> ints2(2); //use construstor to intialize the vector of length 2, and all index values to zero
     // vector<int> ints3 (5, 80); // 5 length vector and intialized every value with 80;
    //
    // cout << ints1.at(0) << endl;
    // cin >> ints1.at(0) ;
    // cout << ints1.at(0) << endl;
    //
    // ints3.push_back(100);
    // cout << ints3[5] << endl;
    // cout << "Vector Size" << endl;
    // cout << ints3.size() << endl;

    FirstProgram obj;
    obj.PrintUserInputValues();
    return 0;

}

int sum(int a, int b);// declaration

int sum(int a, int b) {
    return a+b;
}

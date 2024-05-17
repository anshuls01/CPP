#ifndef MYCLASS_H
#define MYCLASS_H

#include <iostream>;
using namespace std;

class MyClass {
public:
    int value;
    string name;

    void printValue() {
        cout << this->name << " " << this->value << endl;
    }
};
#endif //MYCLASS_H

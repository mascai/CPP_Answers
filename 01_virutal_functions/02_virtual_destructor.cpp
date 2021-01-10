#include <bits/stdc++.h>

using namespace std;

// What is virtual destructor in C++ ?

class Base {
public:
    Base () {
        cout << "Create Base" << endl;
    }
    virtual ~Base() {
        cout << "Delete Base" << endl;
    }
};

class Son : public Base {
public:
    Son() : Base() {
        data_ = new char[2567];
        cout << "Create Son" << endl;
    }
    virtual ~Son() {
        cout << "Delete Son" << endl;
        delete[] data_;
    }
private:
    char* data_;
};


int main() {  
    Base* ptr = new Son();
    delete ptr;
}

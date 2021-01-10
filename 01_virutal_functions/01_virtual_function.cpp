#include <bits/stdc++.h>

using namespace std;

// What is virtual function in C++ ?

class Base {
public:
    virtual void foo() {
        cout << "Base()" << endl;
    }
};

class Son : public Base {
public:
    void foo() {
        cout << "Son()" << endl;
    }
};


int main() {  
    Base* ptr = new Son();
    ptr->foo(); // Son()
    cout << "Sizeof(Base) = " << sizeof(Base) << endl;
}

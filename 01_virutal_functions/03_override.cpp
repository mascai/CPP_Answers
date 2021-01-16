#include <bits/stdc++.h>

using namespace std;

// What is the override keyword and what are its advantages?

class Base {
public:
    virtual void foo(int x) const {
        cout << "Base()" << endl;
    }
};


class Son : public Base {
public:
    void foo(int x) const override {
        cout << "Son()" << endl;
    }
};

int main() {
    Base* ptr = new Son();
    int arg = 4; 
    ptr->foo(4);
}

#include <bits/stdc++.h>

using namespace std;

// What is the final keyword?

class Base {
public:
    virtual void foo(int x) {
        cout << "Base()" << endl;
    }
};

class Son : public Base {
public:
    void foo(int x) {
        cout << "Son()" << endl;
    }
};

class GrandSon : public Son {
public:
    void foo(int x) {
        cout << "GrandSon()" << endl;
    }
};

int main() {
    Base* ptr = new GrandSon();
    int arg = 4; 
    ptr->foo(4);
}

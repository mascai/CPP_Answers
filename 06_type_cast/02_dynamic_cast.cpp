#include <iostream>
#include <memory>

using namespace std;

// What is the dynamic_cast

class Base {
public:
    virtual void f() {
        cout << "Base\n";
    }
};

class Derived : public Base {
public:
    void f() {
        cout << "Derived\n";
    }
};


int main(){
    Base* base = new Derived(); // new Base() --> Derived is NULL
    Derived* derived = new Derived();  
    derived = dynamic_cast<Derived*>(base);
    if (derived == NULL) {
        cout << "Derived is NULL\n";
        derived->f();  
    } else {
        cout << "Derived is NOT NULL\n";
        derived->f();
    }
}


#include <bits/stdc++.h>

using namespace std;

// What is the unique_ptr

struct A {
    A(int n) { 
        cout << "A(" << n << ")\n";
        data_ = n;
    }
    ~A() { cout << "~A(" << data_ << ")\n";}
public:
    int data_;
};


int main() {
    unique_ptr<A> ptr  = make_unique<A>(5);
    unique_ptr<A> ptr2(move(ptr));
    
    if (ptr == nullptr) {
        cout << "ptr is NULL\n";
    }
    A* ptr3 = ptr2.release();
    cout << "PTR3 " <<  ptr3->data_ << endl;
    if (ptr2 == nullptr) {
        cout << "ptr2 is NULL\n";
    }
    ptr2.reset(ptr3);
    cout << "PTR3: " << ptr2->data_ << endl;
    
    
}

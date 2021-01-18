#include <bits/stdc++.h>

using namespace std;

// What is the shared_ptr

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
    shared_ptr<A> ptr = make_shared<A>(5);
    cout << "PTR " << ptr->data_ << endl;
    shared_ptr<A> ptr2(ptr);
    cout << "USE_COUNT " << ptr.use_count() << endl; // 2

    A* ptr3 = ptr.get();
    cout << "PTR3 " << ptr3->data_ << endl;
    
    ptr2.reset(new A(10));
    cout << "PTR2 " << ptr2->data_ << endl; // 10
    cout << "PTR " << ptr->data_ << endl; // 5
}

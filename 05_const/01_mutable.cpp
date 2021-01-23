#include <bits/stdc++.h>

using namespace std;

// What is the mutable

class A {
public:
    int get_data() const { // thread safe getter
        lock_guard guard(m_); // m_ is changed
        return data_;
    }
    int set_data(int data) {
        data_ = data;
    }
private:
    int data_;
    mutable mutex m_;
};

int main() {
}

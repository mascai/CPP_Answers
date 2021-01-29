#include <iostream>


using namespace std;


class A {
    static int cnt;
    int var;
public:
    A() {
        ++cnt;
    }
    ~A() {
        --cnt;
    }
    static int get_cnt() {
        return cnt;
    }
};

int A::cnt = 0;


void foo() {
    static int calls_num;
    ++calls_num;
    cout << calls_num << endl;
}

int main() {
    A a;
    cout << A::get_cnt() << endl;
    cout << "=================\n";
    foo(); // 1;
    foo(); // 2;
}


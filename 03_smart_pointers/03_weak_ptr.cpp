#include <bits/stdc++.h>

using namespace std;

// What is the weak_ptr

struct Person {
    Person(const string& s) {
        cout << "Person(" << s << ")\n";
        name_ = s;
    }
    ~Person() {
        cout << "~Person(" << name_ << ")\n";
    }
public:
    weak_ptr<Person> partner_;
    string name_;
};


int main() {
    shared_ptr<Person> Alisa = make_shared<Person>("Alisa");
    shared_ptr<Person> Bob = make_shared<Person>("Bob");
    Alisa->partner_ = Bob;
    Bob->partner_ = Alisa;
    cout << "PARTNER_NAME: " << Bob->partner_.lock()->name_ << endl;
}

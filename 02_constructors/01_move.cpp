#include <bits/stdc++.h>

using namespace std;

// What is the move() finction?

class String {
public:
    String(const char* s) {
        cout << "String(const char* s)\n";
        data_ = new char[strlen(s)];
        strcpy(data_, s);
    }
    String(const String& s) { // copy constructor
        cout << "String(const String& s)\n";
        data_ = new char[strlen(s.data_)];
        strcpy(data_, s.data_);
    }
    String(String&& s) { // move constructor
        cout << "String(String&& s)\n";
        data_ = s.data_;
        s.data_ = nullptr;
    }
    ~String() {
        cout << "~String()\n";
        delete[] data_;
    }
    friend ostream& operator<<(ostream& os, const String& s) {
        os << s.data_;
        return os;
    }
private:
    char* data_;
};

void print(String s) {
    cout << s << endl;
}

int main() {
    String s1("12345");
    String s2(std::move(s1));
}

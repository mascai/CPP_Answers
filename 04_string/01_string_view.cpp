#include <bits/stdc++.h>
#include <string_view>

using namespace std;

// What is the string_view

// use string_view insread of const string&
void print(string_view long_string) {
    cout << long_string << endl;
}

int main() {
    char resourse[] = "123456";
    string_view s {resourse};
    resourse[1] = '#';
    cout << s << endl;
    s.remove_prefix(2);
    cout << s << endl;
    s.remove_suffix(3);
    cout << s << endl;
}

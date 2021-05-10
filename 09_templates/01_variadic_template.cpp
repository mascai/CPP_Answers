#include <bits/stdc++.h>

using namespace std;

template<class T>
T sum(T arg) {
    return arg;
}

template<class T, class ...Args>
T sum(T arg, Args... args) {
    return arg + sum(args...);
}


int main() {
    cout << sum<float>(1, 2.5, 34, 56) << endl;
}


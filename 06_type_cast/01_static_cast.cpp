#include <bits/stdc++.h>

using namespace std;

// What is the static_cast

#include <bits/stdc++.h>

using namespace std;

void print_data(void* data) {
    cout << static_cast<char*>(data) << endl;
}

int main(){
    char* ptr = new char[10];
    ptr = "abc";
    void* ptr2 = ptr;
    print_data(ptr2);
}


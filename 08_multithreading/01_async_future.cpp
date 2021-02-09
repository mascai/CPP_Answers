#include <iostream>
#include <future>
#include <vector>

using namespace std;

int get_sum(const vector<int>& v, int start, int end) {
    int res = 0;
    for (int i = start; i <= end; ++i) {
        res += v[i];
    }
    return res;
}


// What is std::async


int main() {
    vector<int> v{1, 2, 3, 4, 5, 6};
    int mid = v.size() / 2;
    future<int> f1 = async(std::launch::async, get_sum, v, 0, mid);
    cout << f1.get() + get_sum(v, mid + 1, v.size() - 1) << endl;
}

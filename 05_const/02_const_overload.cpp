#include <chrono>
#include <iostream>

using namespace std;
 
// What is the output of the following code?

class A {
public:
 int value() { return 1; }
 int value() const { return 2; }
};


int main() {
  A a;
  const auto b = a.value();
  std::cout << b << '\n'; // Output is 1, because type of 'a' is not constant
}

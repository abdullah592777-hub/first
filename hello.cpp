#include <iostream>
using namespace std;
class Hello {
public:
    void sayHello() {
        cout << "Hello, World!" << endl;
    }
};
int main() {
    Hello hello;
    hello.sayHello();
    return 0;
}
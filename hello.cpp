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
    cout<<"Hello, C++14!" << endl;
    return 0;
}
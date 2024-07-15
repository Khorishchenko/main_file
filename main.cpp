#include <iostream>
#include <chrono>
#include <list>
#include <iterator>
#include <algorithm> // для функції std::max_element
#include <map>
#include <set>
#include <sstream>
#include <queue>
#include <vector>
using namespace std;

 
class A {
    int a;
 
public:
    A(int x) {
        a = x;
        cout << "A(" << a << ")\n";
    }
 
    ~A() {
        cout << "~A(" << a << ")\n";
    }

    friend void operator << (std::ostream &out, const A &o1);
};
 
A f() {
    A a1(123);
    return a1;
}

void operator << (std::ostream &out, const A& o1)
{
    out << o1.a;
}
 
int main() {
    std::cout << f();
    return 0;
}
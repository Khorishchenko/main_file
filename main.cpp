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

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype> // для tolower
#include <cctype> // для tolower

using namespace std;


class A
{
    char value;
public:
    A() {}
    A(char value) :  value(value) {std::cout << "A" << std::endl; } 
    A(const A& o) : value(o.value) {std::cout << "AA" << std::endl;}
};

class B : virtual public A
{
   char value;
public:
   B() {}
   B(char value) :  value(value) {std::cout << "B" << std::endl; } 
   B(const B& o) : value(o.value) {std::cout << "BB" << std::endl;}
};


class C : virtual public A
{
   char value;
public:
   C() {}
   C(char value) :  value(value) {std::cout << "C" << std::endl; } 
   C(const C& o) : value(o.value) {std::cout << "CC" << std::endl;}
};


class E : B, C
{
public:
    E(char value) : A(value), B(value), C(value) {}
};

int main() 
{
    E o1('c');
    A o2 = o1;

}
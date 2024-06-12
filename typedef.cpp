#include <iostream>
#include <vector>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <iterator>
#include <algorithm>
#include <map>
#include <set>
#include <sstream>
#include <chrono>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <list>
#include <memory>
#include <iostream>
#include <string>
#include <cstring>
#include <cassert>
#include <algorithm>
#include <cctype>
#include <ctime>

using namespace std;

typedef std::string NameStuned;
typedef unsigned int uint;
typedef char Array[20];
typedef std::string StringTwo;
typedef int (*PtrF)(int, int);
typedef int (*Array_Func_Ptr[5])(int, int);

typedef int INT_16;
typedef char CHAR_CHAR;
typedef float FLOAt_FLOAt;


struct INt_Char
{
    int x;
    char value;
};


int main()
{
    INt_Char obj;

    obj.x = 10;
    obj.value = 'A';

    std::cout <<  obj.x << ' ' << obj.value << std::endl;
}
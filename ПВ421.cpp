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

#include <iostream>
#include <memory>   // for smart pointer
#include <vector>

using namespace std;

#include <functional>  // std::function
#include <numeric> // для std::accumulate






// // Не можна перегрузити !

// // .   
// // * 
// // :: 
// // ?:
// // #
// // sizeof


class Point
{

};





// Перевантажимо оператори порівняння >, <, >= та <= == and !=


class Sum{
    int a;
    public:
        Sum(int a) : a (a) {}

};


// int main()
// {
//     Sum a(30);
//     Sum b(30);


//     if(a > b)
//         std::cout << "a > b" << std::endl;
//     else if(a == b)
//         std::cout << "a == b" << std::endl;
//     else
//         std::cout << " a < b" << std::endl;

// }






 
// Перевантаження операторів інкременту та декременту
// Оскільки оператори інкременту та декременту є унарними та змінюють свої операнди,
// то навантаження слід виконувати через методи класу.


class Number
{
    int a;
    public:
    Number(int a ) : a(a){}


    Number operator++(){
        ++(this->a);
        return *this;
    }

    Number operator++(int){
         Number tmp(this->a);
        ++(this->a);
        return tmp;
    }


    friend std::ostream& operator<<(std::ostream &out, const Number &obj);
};

std::ostream& operator<<(std::ostream &out, const Number &obj)
{
    out << obj.a;
    return out;
}

// int main()
// {
//     Number a(10);



//     std::cout << ++a << std::endl;
//     std::cout << a++ << std::endl;
//     std::cout << a << std::endl;



//     // int x = 10;

//     // std::cout << ++x << std::endl;
//     // std::cout << x++ <<  ' ' << x << std::endl;
//     // std::cout << x   <<   std::endl;

//     return 0;
// }




// Перегрузка оператора индексации []

class Int
{
public:
    Int()
    {
        for (int i = 0; i < 10; i++)
        {
            arr[i] = rand() % 10;
        }
    }

    int getArray(int index)
    {
        return arr[index];
    }

    void SetArray(int index, int value)
    {
        arr[index] = value;
    }

    int& operator[](int index)
    {
        return arr[index];
    }


    void Print() const{
        for (int i = 0; i < 10; i++)
        {
            std::cout << arr[i] << ' ';
        }
        std::cout << std::endl;
    }

private:
    int arr[10];    

};



// int main()
// {

//         Int o1;
//         o1.Print();

// // початок

    // int arr[10];

    // arr[5] = 6;
    // std::cout << arr[5] << std::endl;

// // Можна використовувати геттери і сеттери:


    // std::cout << o1.getArray(4) << std::endl;

    // o1.SetArray(4, 10);

    // std::cout << o1.getArray(4) << std::endl;



    // o1[4] = 20;
    // std::cout << o1[4] << std::endl;





// // Можна також просто повертати весь масив (array) і використовувати оператор [] для доступу до його елементів:

//     Int a;
  
//     a.getArr()[4] = 6;
//     std::cout << a.getArray(4) << std::endl;


// // Але можна зробити ще простіше, перевантаживши оператор індексації.
//     a[4] = 7;

//     std::cout << a[4] << std::endl;
//     return 0;
// }




//  Перегрузка оператора ()


class Operaor
{
    private:
        int arr[5][5];
    public:
     
        friend std::ostream& operator<<(std::ostream &out, Operaor &o);
};



// int main()
// {
//     Operaor a;

//     std::cout << a << std::endl;

//     a(3, 3) = 5;

//     std::cout << a << std::endl;


//     a();

//     std::cout << a << std::endl;

//     a(10);

//     std::cout << a << std::endl;

// }
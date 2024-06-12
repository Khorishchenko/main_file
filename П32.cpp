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


// Повторення.

// Базові поняття ООП:

// Класи та об'єкти
// Інкапсуляція
// Наслідування
// Поліморфізм
// Абстракція





// Класи і об'єкти:
// - Визначення класів
// - Конструктори та деструктори
// - Методи та атрибути
// - Статичні члени класу
// - Доступ до приватних даних через методи

// class A
// {

//     int value;

// public:

//     A ( int value  ) : value(value) {}
//     A() : value ( 0 ) {}



//     void setV( int value )
//     {
//         this->value = value;
//     }

//     int getV()
//     {
//         return value;
//     }



//     ~A()
//     {
//         std::cout << "our destructor " << std::endl;
//     }
// };

// int main()
// {
//     A o1;

//     {
//         A o2;
//         o2.setV(10);
//     }
//     // o1.setV(10);


//     std::cout << o1.getV() << std::endl;
// }



// Перевантаження операторів:
// - Основи перевантаження операторів
// - Перевантаження операторів для користувацьких типів

// class A
// {
// private:
//     int value;
// public:
//     A ( int value ) : value(value) {}

//     bool operator == ( A o1 )
//     {
//         return value == o1.value;
//     }


//     friend bool operator < ( const A o1, const A o2 );

// };

// bool operator < ( const A o1, const A o2 )
// {
//     return o1.value < o2.value;
// }

// int main()
// {
//     A o1( 20 ), o2 ( 30 );



//         std::cout <<  ( o1 == o2 ) << std::endl;
// }







// Наслідування
// - Базові класи та похідні класи
// - Доступ до базових класів
// - Віртуальні функції та перевизначення
// - Абстрактні класи та чисті віртуальні функції


// class A
// {
// protected:
//     int value;

// public:

//     A ( int value ) : value(value) {}

//      void Print()
//     {
//         std::cout << "hello world " << std::endl;
//     }

//     virtual ~A()
//     {
//         std::cout << " destructor class A  " << std::endl;
//     }
// };


// class B : public A
// {
// public:

//     B ( int value ) :  A ( value )
//     {
//         // value = 100;
//     }

//      void Print()
//     {

//         std::cout << " hello " << ' ' << value <<  std::endl;
//     }

//     ~B()
//     {
//         std::cout << " destructor class B  " << std::endl;
//     }
// };


// int main()
// {

//     A *ptr = new B( 20 );

//     ptr->Print();

//     delete ptr;
// }





// Поліморфізм:
// - Віртуальні методи
// - Використання поліморфізму для створення гнучкого та розширюваного коду
// - Інкапсуляція та абстракція:



// #include <iostream>
// #include <string>

// class Animal {
// public:
//     virtual void makeSound() const {
//         std::cout << "Some generic animal sound" << std::endl;
//     }
// };

// class Dog : public Animal {
// public:
//     void makeSound() const override {
//         std::cout << "Woof! Woof!" << std::endl;
//     }
// };

// class Cat : public Animal {
// public:
//     void makeSound() const override {
//         std::cout << "Meow! Meow!" << std::endl;
//     }
// };

// void demonstratePolymorphism(const Animal& animal) {
//     animal.makeSound();
// }

// int main() {
//     Dog dog;
//     Cat cat;

//     demonstratePolymorphism(dog);
//     demonstratePolymorphism(cat);

//     return 0;
// }









// Шаблони та узагальнене програмування:
// - Шаблонні функції
// - Шаблонні класи


// template <typename T, typename T1>
// void Print( T value )
// {
//     std::cout << value << std::endl;
// }


template <typename T>
class A
{
    T value_compare;
public:
    A( T value  ) : value_compare(value) {}

};

int main()
{
    // Print( 10 );
    // Print( 'A' );
    // Print( "Hello" );
    // Print( 12.12 );


    A < int > o1 ( 20 );


}
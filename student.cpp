#include <iostream>
#include <chrono>
#include <list>
#include <iterator>
#include <algorithm> // для функції std::max_element
#include <map>
#include <set>
#include <sstream>
#include <queue>
#include <functional>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


// Основи C++

// Основи синтаксису і семантики:
// - Змінні та типи даних (int, float, double, char, bool).
// - Константи та ключове слово const.
// - Оператори (арифметичні, логічні, побітові, умови).


// Введення/виведення:
// - Основні функції для роботи з консолью: std::cin, std::cout, std::cerr.


// int main()
// {
//     int x = 10;

//     const int y = 20;

//     // y = 30;


//     // + - / * < > == != & | if 

//     cin >> x;

//     std::cout << x << std::endl;
// }






// Умовні оператори:
// - if, else if, else.
// - Тернарний оператор ? :.


// int main()
// {
//     int a = 10, b = 20;

//     if ( a == b )
//     {
//         std::cout << " a == b  " << std::endl;
//     }
//     else 
//     {
//         std::cout << "a != b " << std::endl;
//     }


//     if ()


//     if()
//     else if ()
//     else


//     () ? :


//     (a == b) ? std::cout << " a == b  " << std::endl :  std::cout << "a != b " << std::endl;

// }






// Цикли:
// - for, while, do-while.
// - Ключові слова break та continue.



// int main()
// {
//     // for ( int x = 5; x < 10; ++x )
//     //     std::cout << x << std::endl;

//     int x = 5;

//     // while(x < 10)
//     // {
//     //     std::cout << x << std::endl;
//     //     ++x;
//     // }



//     // do
//     // {
//     //     std::cout << x << std::endl;
//     //     x++;
//     // } while (x > 10);
    
// }










// Функції
// - Оголошення та визначення функцій.
// - Передача аргументів (за значенням, за посиланням, за вказівником).
// - Рекурсія.
// - Перевантаження функцій.



// void print(int value)
// {
//     std::cout << value << std::endl;
// }

// int sum( int value, int value2 )
// {
//     return value + value2;
// }

// int sum( int value, float value2 )   // ЧИм відрізнятись ?????
// {
    
// }



// int main()
// {
//     print(10);
//     int sum2 = sum(10, 20);
//     std::cout << sum2 << std::endl;
// }









// Масиви та рядки
// - Одновимірні та багатовимірні масиви.
// - Рядки C-стилю та клас std::string.
// - Вказівники та динамічна пам'ять
// - Вказівники та адресація.
// - Виділення та звільнення пам'яті (new, delete).
// - Вказівники на масиви та функції.




int main()
{

    // int arr[] {1, 2, 3, 4, 5}; // ???
    // int arr2[2][2] { { 1,1 }, { 2, 2 } }; 


    // // for ( int i = 0; i < 5; i++ )
    // //     std::cout << arr[i] << ' ';
    // // std::cout << std::endl;


    // for ( int i = 0; i < 2; i++ )
    // {
    //     for ( int j = 0; j < 2; j++ )
    //     {
    //         std::cout << arr2[i][j] << ' ';
    //     }
    //     std::cout << std::endl;
    // }



    int *ptr;

    int x = 10;

    ptr = &x;

    std::cout << *ptr << std::endl;
    


}







// Структури 
// - Структури.







// Шаблони
// Шаблони функцій.









// Виключення
// Обробка виключень:
// - try, catch, throw.









// Інші важливі теми
// - Простори імен (namespace).
// - Препроцесорні директиви (#include, #define, умовна компіляція).
// - Файловий ввід/вивід.








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







// Перевантаження операторів:
// - Основи перевантаження операторів
// - Перевантаження операторів для користувацьких типів







// Наслідування
// - Базові класи та похідні класи
// - Доступ до базових класів
// - Віртуальні функції та перевизначення
// - Абстрактні класи та чисті віртуальні функції






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
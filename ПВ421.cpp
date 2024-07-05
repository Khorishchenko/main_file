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



// class Human
// {
// private:
//     int age;
//     std::string name;

//     const int id;

// public:

//     // Human()
//     // {
//     //     age = 0;
//     //     name = "no name";
//     // }

//     // Human(std::string name, int age) : name(name), age(age)
//     // {
        
//     // }

//     Human( std::string Name = "no name", int Age  = 0 , int Id = 0) : name( Name ) , age( Age ), id( Id )
//     {
        
//     }

//     int getAge()
//     {
//         return age;
//     }

//     std::string getName()
//     {
//         return name;
//     }

//     void setAge( int age )
//     {
//         this->age = age;
//     }

//     void setName(std::string name)
//     {
//         this->name = name;
//     }

// };

// int main()
// {
//     Human people("Anton", 24, 5);

//     // people.setAge(20);
//     // people.setName("Anton");

//     std::cout << "Name: " << people.getName() << ' ' << "Age: " << people.getAge() << std::endl;

// }
 







// =============================================//
// Деструктор


// class Array
// {
// private:
//     int *ptr;
//     int size;
// public:

//     Array ( int size = 0 )
//     {
//         if ( size > 0 )
//         {
//             ptr = new int[size];

//             for ( int i = 0; i < size; i++)
//                 ptr[i] = rand() % 10;

//             this->size = size;
//         }
//         else
//         {
//             ptr = nullptr;
//             size = 0;
//         }
//     }

//     void Print()
//     {
//         if ( ptr != nullptr )
//         {
//             for ( int i = 0; i < size; i++ )
//                 std::cout << ptr[i] << ' ';
//             std::cout << "\n";
//         }
//         else
//         {
//             std::cout << "our arr is empty " << std::endl;
//         }
//     }

//     ~Array()
//     {
//         if ( ptr != nullptr )
//         {
//             delete[] ptr;
//             std::cout << " destructor delete arr " << std::endl;
//         }
//         else
//         {
//              std::cout << " destructor " << std::endl;
//         }

//     }
// };


// int main()
// {
//     Array arr;
//     arr.Print();

//     Array arr1( 15 );
//     arr1.Print();

//     {

//         Array o1( 10 );
//         o1.Print();


//     }

//     std::cout << "hello " << std::endl;

// }













// =============================================//
// Порядок виклику конструкторів та деструкторів

// class A{
// public:
//     A() {std::cout << "This is const A" << std::endl;}
//     ~A() { std::cout << "This is dest A " << std::endl; }
// };


// class B{
// public:
//     B() {std::cout << "This is const B" << std::endl;}
//     ~B() { std::cout << "This is dest B " << std::endl; }
// };

// int main()
// {
//     A a;
//     B b;
// }






//=================================================================//
// Реалізація методів за межами класу
// Спискова ініціалізація


class Titan
{
    std::string _name;
    int m_age;
    const int size;
public:
    Titan(std::string name, int conssst) : _name(name), m_age(0), size(conssst)
    {
        // size = conssst;
    }

    void showName_Titan();
};

void Titan::showName_Titan()
{
    std::cout << _name << ' ' << m_age << ' '  << size << std::endl;
}


// int main(){
//     Titan b("Mark", 10);
   
//     b.showName_Titan();
// }















 

// THIS*

// class MyClass {
// public:
//     void SetData(int data) {
//         this->data = data;  // Використовуємо this для доступу до змінної-члена data
//     }

//     int GetData() {
//         return this->data;  // Використовуємо this для отримання значення data
//     }

//     void GetPtr()
//     {
//         std::cout << this << std::endl;
//     }

// private:
//     int data;
// };

// int main() {
//     MyClass obj;
//     obj.SetData(42);  // Встановлюємо значення data за допомогою методу SetData

//     obj.GetPtr();


//     std::cout << "Data: " << obj.GetData() << std::endl;  // Отримуємо значення data за допомогою методу GetData

//     return 0;
// }











// https://youtu.be/Ic19I0kcBnU - Дружні функції та класи приклад
// https://youtu.be/SiOfT03jSU0 - Дружні класи. ООП. friend class.

// Дружні функції
















// Умова завдання 2:

// Створіть клас Person, який представляє особу з ім'ям і віком. Клас повинен мати два конструктори: один, який приймає ім'я та вік, та інший, 
// який приймає лише ім'я. 
// В цьому випадку вік має ініціюватися значенням за замовчуванням (наприклад, 0). 
// Використовуйте делегування конструкторів для забезпечення можливості створювати об'єкти Person з ім'ям і віком або лише з ім'ям.
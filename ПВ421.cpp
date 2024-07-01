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

// public:

//     // Human()
//     // {
//     //     age = 0;
//     //     name = "no name";
//     // }

//     // Human(std::string name, int age) : name(name), age(age)
//     // {

//     // }

    // Human( std::string Name = "no name", int Age  = 0 ) : name( Name ) , age( Age )
    // {
    //     name = Name;
    //     age = Age;
    // }

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
//     Human people;

//     // people.setAge(20);
//     // people.setName("Anton");

//     std::cout << "Name: " << people.getName() << ' ' << "Age: " << people.getAge() << std::endl;

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



// Умова завдання 2:

// Створіть клас Person, який представляє особу з ім'ям і віком. Клас повинен мати два конструктори: один, який приймає ім'я та вік, та інший, 
// який приймає лише ім'я. 
// В цьому випадку вік має ініціюватися значенням за замовчуванням (наприклад, 0). 
// Використовуйте делегування конструкторів для забезпечення можливості створювати об'єкти Person з ім'ям і віком або лише з ім'ям.


// class Person
// {
// public:
//     Person(std::string name, int age) : m_name(name), m_age(age) {}
//     Person(std::string name) : Person(name, 0) {}

//     void Print() const{
//         std::cout << "Name: " << m_name << ". Age: " << m_age << std::endl;
//     }
// private:
//     std::string m_name;
//     int         m_age;

// };

// int main()
// {
//     Person o1("Anton", 20);
//     o1.Print();

//     Person o2("Sergii");
//     o2.Print();
// }






// https://youtu.be/Ic19I0kcBnU - Дружні функції та класи приклад
// https://youtu.be/SiOfT03jSU0 - Дружні класи. ООП. friend class.

// Дружні функції
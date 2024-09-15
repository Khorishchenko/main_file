#include <iostream>

// Що таке ООП простими словами.
// Інкапсуляція. Поліморфізм. Успадкування.
// Що таке клас. Що таке об'єкт класу? Примірник класу це
// Методи класу. Що таке методи у програмуванні
// Модифікатори доступу класів. public private protected що це
// Що таке гетери та сеттери для класу. Методи get та set. Інкапсуляція це


// # Об’єктно-орієнтоване програмування (ООП) 

// # Об’єкт — це будь-яка сутність, яка має атрибути (дані) та поведінку (методи/функції). Наприклад, кошеня — це об’єкт. В нього є:

// #    атрибути — ім’я, вік, колір тощо.

// #    поведінка — бігає, нявкає, спить і т.д.

// # Клас — це креслення (план) цього об’єкта.







// Конструктор Деструктор, спискова ініціалізація

// Конструктори
// Параметри конструкторів
// За замовчуванням
// Деструктори
// Спискова ініціалізація
// Реалізація методів за межами класу
// Порядок виклику конструкторів та деструкторів


// =============================================//
// Конструктори - За замовчуванням/з параметрами






// =============================================//
// Деструктор

// #include <time.h>

// class Array
// {
// public:
//     Array( int size = 0 ) : m_size ( size )
//     {
//         if ( m_size > 0 )
//         {
//             m_ptr = new int[m_size];
//             for ( int i = 0; i < m_size; ++i )
//             {
//                 m_ptr[i] = rand() % 10;
//             }
//         }
//         else
//         {
//             m_ptr = nullptr;
//             m_size = 0;
//         }
//     }

//     void Print()
//     {
//         if ( m_ptr != nullptr )
//         {
//             for ( int i = 0; i < m_size; ++i )
//             {
//                 std::cout << m_ptr[i] << " ";
//             }
//             std::cout << std::endl;
//         }
//         else
//         {
//             std::cout << "Array is empty." << std::endl;
//         }
//     }

//     ~Array()
//     {
//         if ( m_ptr != nullptr )
//         {
//             delete[] m_ptr;
//             m_ptr = nullptr;
//             std::cout << "destructor" << std::endl;
//         }
//         else
//         {
//             std::cout << "404" << std::endl;
//         }
        
//     }


// private:
//     int *m_ptr;
//     int m_size;


// };


// int main()
// {
//     srand(time(NULL));

//     int size;
//     std::cout << "Enter the size of array: ";
//     std::cin >> size;

//     {
//         Array arr(size);
//         arr.Print();
//     }

//     std::cout << "function main () workings" << std::endl;


//     int value;
// }










//=================================================================//
// Реалізація методів за межами класу
// Спискова ініціалізація


// class Titan
// {
//     std::string _name;
//     int m_age;
//     const int size;
// public:
//     Titan(std::string name, int conssst) : _name(name), m_age(0), size(conssst)
//     {
//         // size = conssst;
//     }

//     void showName_Titan();
// };

// void Titan::showName_Titan()
// {
//     std::cout << _name << ' ' << m_age << ' '  << size << std::endl;
// }


// int main(){
//     Titan b("Mark", 10);
   
//     b.showName_Titan();
// }





// =============================================//
// Порядок виклику конструкторів та деструкторів

class A{
public:
    A() {std::cout << "This is const A" << std::endl;}
    ~A() { std::cout << "This is dest A " << std::endl; }
};


class B{
public:
    B() {std::cout << "This is const B" << std::endl;}
    ~B() { std::cout << "This is dest B " << std::endl; }
};

int main()
{
    A a;
    B b;
}
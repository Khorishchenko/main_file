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












#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}











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


class Studen
{
public:



private:
    int m_age;
    std::string m_name;
};

// int main()
// {
//     Studen student1;
//     student1.Print();

//     Studen student2(20, "Anton");
//     student2.Print();
// }














// =============================================//
// Деструктор


// class Array
// {
// public:
    

// private:
//     int *m_ptr;
//     int m_size;
// };


// int main()
// {

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
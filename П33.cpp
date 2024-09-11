#include <iostream>





// int main()
// {
//     int i;
//     char name;


//     Student student1 = {"John Doe", 18};
//     Student student2 = {"Jane Smith", 22};

//     std::cout << "Student 1: " << student1.name << ", Age: " << student1.age << std::endl;
//     std::cout << "Student 2: " << student2.name << ", Age: " << student2.age << std::endl;



//     std::cout << "Student 3: " << student3.name << ", Age: " << student3.age << std::endl;

// }















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


struct Student
{
    int age;
    std::string name;
};


class Person
{
private:
    int age;
    std::string name;
    int ID;


public:

    void setAge(int Age)
    {
        if ( Age > 0 )
        {
            age = Age;
        }
        else 
        {
            age = 0;
        }
    }

    void setName(std::string Name)
    {
        name = Name;
    }

    void setID(int iD)
    {
        if ( iD > 0 )
            ID = iD;
        else
            ID = 0;
    }

    int getAge() 
    {
        return age;
    }

    std::string getName()
    {
        return name;
    }

    int getID()
    {
        return ID;
    }

    void Print()
    {
        std::cout << "Person: " << name << ", Age: " << age << " ID: " << ID << std::endl;
    }
};


int main()
{

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
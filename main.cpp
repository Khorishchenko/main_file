#include <iostream>

int sum(int a, int b)
{
    return a + b;
}


// # Об’єктно-орієнтоване програмування (ООП) 

// # Об’єкт — це будь-яка сутність, яка має атрибути (дані) та поведінку (методи/функції). Наприклад, кошеня — це об’єкт. В нього є:

// #    атрибути — ім’я, вік, колір тощо.

// #    поведінка — бігає, нявкає, спить і т.д.

// # Клас — це креслення (план) цього об’єкта.


struct Person
{
    int age;
    std::string name;
};

class Studen
{
    int age;
    std::string name;
    std::string group;
public:

    Studen(std::string Name, int Age, std::string Group)
    {
        name = Name;
        age = Age;
        group = Group;
    }

    void setNames(std::string Name)
    {
        name = Name;
    }

    void setAge(int Age)
    {
        age = Age;
    }    

    void speaking()
    {
        std::cout << "Hello, my name is " << name << std::endl;
        std::cout << "I'm " << age << " years old" << std::endl;
        std::cout << "I study in group " << group << std::endl;
    }
};

int main()
{
    Studen person("Anton", 22, "A1");

}


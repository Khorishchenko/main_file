#include <iostream>
#include <string>
#include <cstring>



// Базове наслідування, порядок побудови дочірніх класів, protected:
// Ключове слово protected:

class Parent
{

};


class Child
{

};


int main()
{
    
    return 0;
}






//=============================================================================================================================================




// Порядок побудови дочірніх класів
class A
{
public:
    A()
    {
        std::cout << "A\n";
    }
};
 
class B : public A
{
public:
    B()
    {
        std::cout << "B\n";
    }
};
 
class C : public B
{
public:
    C()
    {
        std::cout << "C\n";
    }
};
 
class D: public C
{
public:
    D()
    {
        std::cout << "D\n";
    }
};


// int main()
// {
    // std::cout << "Constructing A: \n";
    // A cA;
 
    // std::cout << "Constructing B: \n";
    // B cB;
 
    // std::cout << "Constructing C: \n";
    // C cC;
 
    // std::cout << "Constructing D: \n";
    // D cD;
// }










//=============================================================================================================================================
// Множинне спадкування в С++, перевизначення методів батьківського класу 





// приклад перевизначення методів батьківського класу 

class Parent {
public:
    void show() {
        std::cout << "This is the Parent class." << std::endl;
    }
};



class Child : public Parent {
public:
    void show() {
        std::cout << "This is the Child class." << std::endl;
    }
};


int main() 
{
    Parent p;
    Child c;

    // Виклик методу батьківського класу


    // Виклик перевизначеного методу в похідному класі

    return 0;
}





// Множинне спадкування в С++

// class A
// {
 

// public:
//     int value;
// };



// Базовий клас
class Animal {
public:
    void speak() {
        std::cout << "Тварина говорить" << std::endl;
    }
};



// Ще один базовий клас
class Bird  {
public:
    void chirp() {
        std::cout << "Пташка щебече" << std::endl;
    }
};




// Клас, який успадковує від обох базових класів
class Parrot : public Animal, public Bird {
public:
    void mimic() {
        std::cout << "Папуга імітує" << std::endl;
    }
};

int main() {
    Parrot parrot;
    
    parrot.speak();  // Викликає метод з базового класу Animal
    parrot.chirp();  // Викликає метод з базового класу Bird
    parrot.mimic();  // Викликає метод класу Parrot
    
    return 0;
}
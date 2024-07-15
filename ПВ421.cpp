#include <iostream>
#include <string>
#include <cstring>



// Базове наслідування, порядок побудови дочірніх класів, protected:



// Базове наслідування

// Батьківський клас ( базовий клас )
class Animal 
{
public:
    void eat() {
        std::cout << "Animal is eating." << std::endl;
    }

    void sleep() {
        std::cout << "Animal is sleeping." << std::endl;
    }
};



// Похідний клас (підклас), який успадковує властивості Animal
class Dog : public Animal
{
public:
    void bark() {
        std::cout << "Dog is barking." << std::endl;
    }
};

// int main() {

//     // Створюємо об'єкт класу Dog
//     Dog dog;

//     // Викликаємо методи які успадковані від Animal
//     dog.eat();
//     dog.sleep();

//     // Викликаємо метод, який визначений у класі Dog
//     dog.bark();


//     // Animal animal;
//     // animal.eat();
//     // animal.sleep();

//     return 0;
// }



//=============================================================================================================================================




// Ключове слово protected:

class Gander
{
protected:
    std::string man_woman;
public:
    Gander(std::string people = "") : man_woman(people)
    {
        std::cout << "Gander(std::string people = "")" << std::endl;
    }
   
    // std::string getPeople(){
    //     return man_woman;
    // }
};
 

// Player відкрито успадковує Gander
class Player : public Gander
{
    std::string name;
    int age;
public:
    Player(std::string name, int age, std::string people) : name(name), age(age)
    {
        std::cout << "Player(std::string name, int age, std::string people)" << std::endl;
    }


    void print(){
        std::cout << name << ' ' << age << ' ' << man_woman << std::endl;
    }
};

void pritn(int hfhhfhf){}

int main()
{
    Player human1("Anton", 25, "Man");

    human1.print();
    // std::cout << human1.getPeople() << std::endl;

    // pritn(333);

    // Gander gander;
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
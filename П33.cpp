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

    Person person;


    person.setAge(100);
    person.setName("John Doe");
    person.setID(111);

    std::string name = person.getName();

    std::cout << name << std::endl;

    // std::cout << "Age: " << person.getAge() << std::endl;
    // std::cout << "Name: " << person.getName() << std::endl;
    // std::cout << "ID: " << person.getID() << std::endl;


    person.Print();

    // Person person {"Jane Doe", 25, "female"};

    // std::cout << "Person: " << person.name << ", Age: " << person.age << " ID: " << person.ID << std::endl;

    // Person person2  {30, "name", 777};

    // std::cout << "Person 2: " << person2.name << ", Age: " << person2.age << " ID: " << person2.ID << std::endl;

   


    Student student3;
    student3.name = "Anton";
    student3.age = 20;
}









// Умова 1: Що таке клас. Створення класу.
// Створіть клас Person, який буде представляти особу з такими атрибутами: ім'я, вік, стать. 


// Умова 2: Що таке об'єкт класу.
// Створіть кілька об'єктів класу Person і встановіть їхні атрибути (ім'я, вік, стать) для кожного об'єкта.



// Умова 3: Примірник класу.
// За допомогою об'єктів класу Person, створіть метод displayInfo(), який виводитиме інформацію про кожну особу (ім'я, вік, стать) в консоль.


// Умова 4: Методи класу.
// Додайте метод до класу Person, який дозволить змінювати вік особи. Назвіть цей метод, наприклад, setAge(int age).



// Умова 5: Модифікатори доступу класів.
// Змініть модифікатор доступу до атрибуту "стать" класу Person з "public" на "private". Внесіть необхідні зміни в код, щоб забезпечити доступ до цього атрибуту через гетери та сетери.


// Умова 6: Що таке гетери та сеттери для класу.
// Додайте гетери (методи getGender()) та сетери (методи setGender()) для атрибуту "стать" в класі Person. Гетери повинні дозволяти отримувати значення атрибуту, а сетери - змінювати його.



// Умова 7: Інкапсуляція.
// Впевніться, що доступ до атрибуту "стать" здійснюється через гетери та сетери, що забезпечує інкапсуляцію даних.
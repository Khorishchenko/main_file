#include <iostream>
#include <stdlib.h>
#include <time.h>

#include <algorithm>

#include <iterator>
#include <locale>

int GLOBAL_VAR = 0;
int SIZE = 0;

using namespace std;

#include <iostream>
#include <string>

#include <fstream> // Підключаємо бібліотеку



// STRUCT

// struct Human
// {
// 	int age;
// 	std::string name;
// };

// int main()
// {
// 	Human Student;

//     Student.age = 23;
//     Student.name = "sergey";

// 	std::cout << Student.age << ' ' << Student.name << std::endl;

// 	Student.age = 100;

// 	std::cout << Student.age << std::endl;

// 	return 0;
// }


// ================================================================//
// Оголошення Обєктів 

// struct Human
// {
// 	int age;
// 	const char * name;

// } Student ;

// int main()
// {
// 	Student = { 23, "sergey" };

// 	std::cout << Student.age << ' ' << Student.name << std::endl;



//     Human oleg = { 23, "oleg"};

//     Human Anton;

//     Anton.age = 28;
//     Anton.name = "anton";

//     std::cout << oleg.age << ' ' << oleg.name << std::endl;
//     std::cout << Anton.age << ' ' << Anton.name << std::endl;

// 	return 0;
// }


// ================================================================//
// Без дескриптора 

struct				
{
	int age;
	const char *name;
} Student, Student2 ;

int main()
{
	Student = { 23, "sergey"};
	std::cout << Student.age << ' ' << Student.name << std::endl;

	Student2 = Student;										// Присвоєння 

	std::cout << Student2.age << ' ' << Student2.name << std::endl;

	return 0;
}



// ================================================================//
// створюємо ще одну структуру, щоб вкласти її у структуру building

// Оголошення структури "Адреса"
// struct Address {
//     std::string street;
//     std::string city;
//     std::string postalCode;
// };

// // Оголошення структури "Контактна інформація"
// struct ContactInfo {
//     std::string name;
//     std::string phoneNumber;
//     Address address;        // Включення структури "Адреса" в "Контактну інформацію"
// };

// int main() {
//     // Створення об'єкта типу "Контактна інформація"
//     ContactInfo person;

//     // Заповнення даних про контакт
//     person.name = "Іван Петрович";
//     person.phoneNumber = "+1234567890";
//     person.address.street = "Вулиця Лісова, 5";
//     person.address.city = "Київ";
//     person.address.postalCode = "12345";

//     // Виведення інформації про контакт на консоль
//     std::cout << "Ім'я: " << person.name << std::endl;
//     std::cout << "Номер телефону: " << person.phoneNumber << std::endl;
//     std::cout << "Адреса: " << person.address.street << ", " << person.address.city << ", " << person.address.postalCode << std::endl;


//     ContactInfo ArrPerson[2];

//     for (int i = 0; i < 2; i++)
//     {
//         std::cin >> ArrPerson[i].name;
//         std::cin >> ArrPerson[i].phoneNumber;
//         std::cin >> ArrPerson[i].address.city;
//         std::cin >> ArrPerson[i].address.street;
//         std::cin >> ArrPerson[i].address.postalCode;
//     }

//     std::cout << "\n\n";
//     for (int i = 0; i < 2; i++)
//     {
//         std::cout << ArrPerson[i].name << std::endl;
//         std::cout << ArrPerson[i].phoneNumber  << std::endl;
//         std::cout << ArrPerson[i].address.city  << std::endl;
//         std::cout << ArrPerson[i].address.street  << std::endl;
//         std::cout << ArrPerson[i].address.postalCode  << std::endl;
//     }
//     return 0;
// }





// Завдання №1: Керування рахунком користувача
// Створіть структуру, яка представляє рахунок користувача (ім'я користувача, номер рахунку, баланс). 
// Напишіть функції для зняття грошей з рахунку, поповнення рахунку та виведення інформації про рахунок.
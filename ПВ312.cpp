#include <iostream>

#include <iterator>
#include <climits>
#include <stdlib.h>
#include <vector>
#include <climits>
#include <cstring>
#include <stdio.h>
#include <string.h>

#include <vector>
#include <iomanip>
#include <algorithm>



#include <chrono>
#include <list>
#include <iterator>


#include <iostream>
#include <chrono>
#include <list>
#include <iterator>
#include <algorithm>
#include <map>
#include <set>
#include <sstream>


#include <iostream>
#include <chrono>
#include <list>
#include <iterator>
#include <algorithm> // для функції std::max_element
#include <map>
#include <set>
#include <sstream>
#include <queue>

// https://youtu.be/bP5GJN3-zIo

using namespace std;


//  Предикат, Функтор, Лямбда Функції

// https://youtu.be/bP5GJN3-zIo

using namespace std;


// void process_data(const std::vector<int>& data, std::function<void(int)> func) {
//     for (auto d : data) {
//         func(d);
//     }
// }



// class Person {
// public:
//     Person(std::string name, int age) : name_(name), age_(age) {}

//     std::string get_name() const { return name_; }
//     int get_age() const { return age_; }

// private:
//     std::string name_;
//     int age_;
// };


// void print_vector(std::vector<Person> &arr, std::function<void(Person)> fun)
// {
// 	for (auto &element : arr)
// 		fun(element);
// }


// int main()
// {

	// Лямбда-вираз у С++ — анонімна функція, яка підтримує стан між викликами і 
	// може отримати доступ до змінних зі своєї області видимості. Використовуючи лямбда-вирази, можна оголошувати функції в будь-якому місці коду.


	// std::vector<int> arr{1, 2, 3, 4, 5};

	// auto f = [](int a) 
	// {
	// 	std::cout << "Element vector is: " << a << std::endl;

	// };

	// print_vector(arr, [](int a) 
	// {
	// 	std::cout << "Element vector is: " << a << std::endl;

	// });


	// auto sum = [](int a, int b) { return a + b; };
	// int result = sum(2, 3); // result буде 5

	// std::cout << result << std::endl;


	// Використання лямбда-функції в якості параметру функції:

	// std::vector<int> vec = {3, 2, 1, 5, 4};
	// process_data(vec, [](int val) { std::cout << val << " "; });



	// Використання лямбда-функції для порівняння об'єктів класу:
	// Цей код відсортує вектор об'єктів класу Person за зростанням віку.

	// std::vector<Person> people = {
	// 	{"Alice", 25},
	// 	{"Bob", 30},
	// 	{"Charlie", 20},
	// };


// 	std::function<void(Person)> fun = [](const Person &a)
// 	{
// 		std::cout << a.get_age() << ' ' << a.get_name() << std::endl;
// 	};

// 	print_vector(people, fun);

// 	std::sort(people.begin(), people.end(), [](const Person& a, const Person& b) {
// 		return a.get_age() < b.get_age();
// 	});

// 	print_vector(people, fun);




//     return 0;
// }
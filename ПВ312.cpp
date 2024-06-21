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



// https://www.youtube.com/watch?v=1cKvMZOJeeE&ab_channel=%23SimpleCode - VECTOR

#include <map>
#include <iterator>
using namespace std;

// https://codelessons.ru/cplusplus/map-v-c-chto-eto-i-kak-s-etim-rabotat.html --- MAP
#include <iostream>
#include <map>
#include <string>

int main() {
    // Як створити map
    // map <L, R> <ім'я>;
    // <L> — цей тип даних буде відноситись до значення ключа.
    // <R> — цей тип даних відноситься до значення.

    // Приклад 1: map з ключами типу int і значеннями типу int
    std::map < int, int > mp1;

    mp1[ 0 ] = 7; // ключ - число
    std::cout << "mp1[0] = " << mp1[0] << std::endl;

    // Приклад 2: map з ключами типу string і значеннями типу int
    std::map<std::string, int> mp2;
    mp2["zero"] = 4;  // ключ - рядок
    mp2["zero"] = 10;
    std::cout << "mp2[\"zero\"] = " << mp2["zero"] << std::endl;

    // Приклад 3: map з ініціалізацією елементів




    // std::map<std::string, std::string> book {
    //     {"Hi", "Привет"},
    //     {"Student", "Студент"},
    //     {"!", "!"}
    // };

    // std::cout << "book[\"Hi\"] = " << book["Hi"] << std::endl;
    // book["Hi"] = "Hello";                       
    // std::cout << "book[\"Hi\"] = " << book["Hi"] << std::endl;









    // Використання ітераторів для map
    // map <тип даних>::iterator <ім'я>;

    // Створення map для прикладу з ітераторами



    std::map<int, int> mp;
    // std::cout << "Введіть кількість елементів: "; 
    // int n; 
    // std::cin >> n;
 
    // for (int i = 0; i < n; i++) {
    //     std::cout << "Елемент " << i + 1 << ": "; 
    //     int a, b; 
    //     std::cin >> a >> b;
    //     mp[a] = b;  // додаємо нові елементи
    // }
 
    // std::map<int, int>::iterator it = mp.begin();

    // // auto it_auto = mp.begin();
    // // auto value = 10;

    // std::cout << "Всі елементи map, відсортовані за ключем: " << std::endl;
    // for (int i = 0; it != mp.end(); ++it, ++i) {  // виводимо їх
    //     std::cout << i << ") Ключ " << it->first << ", значення " << it->second << std::endl;
    // }

    // for ( const auto& element : mp )
    //     std::cout <<  " Ключ " << element.first << ", значення " << element.second << std::endl;


    // Приклад використання insert
    int key = 0, value = 5;
    mp[1] = 11;
    mp.insert(std::make_pair(key, value));

    std::cout << "\nНовий map після insert: " << std::endl;
    auto it = mp.begin();
    for (int i = 0; it != mp.end(); ++it, ++i) {  // виводимо їх
        std::cout << i << ") Ключ " << it->first << ", значення " << it->second << std::endl;
    }

    mp[ 0 ] = 9;

    // std::cout << "\nНовий map після додавання елемента: " << std::endl;
    it = mp.begin();
    for (int i = 0; it != mp.end(); ++it, ++i) {  // виводимо їх
        std::cout << i << ") Ключ " << it->first << ", значення " << it->second << std::endl;
    }

    // Приклад використання find
    // std::map<std::string, std::string> book_example;  
    // book_example["book"] = "книга";     

    // std::map<std::string, std::string>::iterator it_book;

    // it_book = book_example.find("book");

    // if ( it_book != book_example.end() ) {
    //     std::cout << it_book->second << std::endl;
    // } else {
    //     std::cout << "Ключа зі значенням 'book' немає" << std::endl;
    // }

    // it_book = book_example.find("books");
    // if ( it_book == book_example.end() ) {
    //     std::cout << "Ключа зі значенням 'books' немає" << std::endl;
    // }


    // // Приклад використання erase
    std::map<std::string, std::string> passport;
    passport["maxim"] = "Denisov";     // додаємо нові значення
    passport["andrey"] = "Puzerevsky";
    passport["dima"] = "Tilyupo";
    
    std::map<std::string, std::string>::iterator full_name; // створили ітератор на passport
    
    full_name = passport.begin();
    for (int i = 0; full_name != passport.end(); ++full_name, ++i) {  // виводимо їх
        std::cout << i << ") Ключ " << full_name->first << ", значення " << full_name->second << std::endl;
    }
    std::cout << "Розмір map: " << passport.size() << std::endl;

    std::string str;
    std::cout << "Введіть ключ для видалення: ";
    std::cin >> str;
    full_name = passport.find(str); // знаходимо елемент
    if (full_name != passport.end()) {
        passport.erase(full_name); // видаляємо елемент
    } else {
        std::cout << "Елемент з ключем " << str << " не знайдений" << std::endl;
    }
     
    full_name = passport.begin();
    for (int i = 0; full_name != passport.end(); ++full_name, ++i) {  // виводимо їх
        std::cout << i << ") Ключ " << full_name->first << ", значення " << full_name->second << std::endl;
    }
    std::cout << "Розмір map після видалення: " << passport.size() << std::endl;

    return 0;
}
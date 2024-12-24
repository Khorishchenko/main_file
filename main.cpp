#include <iostream>
#include <string>
#include <set>
#include <cctype>
#include <algorithm>
#include <sstream>
#include <fstream>
#include <vector>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cassert>





// 2. Поглиблене вивчення функцій:
// Різновиди функцій:
// Функції-члени класів (методи).
// Шаблони функцій (template).
// Лямбда-функції.
// Передача аргументів:
// За значенням, за вказівником, за посиланням.
// Ключове слово const у параметрах функцій.
// Перевантаження функцій та операторів.



// 3. Управління пам’яттю:
// Статична та динамічна пам’ять:
// Що таке стек і купа (stack and heap).
// Використання оператора new та delete.
// Робота з покажчиками:
// Що таке покажчик, арифметика покажчиків.
// Покажчики на функції.
// Розумні вказівники (smart pointers):
// unique_ptr, shared_ptr, weak_ptr.
// Уникнення витоків пам’яті (memory leaks).



int AddTwo(int);
void print(int);


int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

template <typename T, typename T1>
void Print(const T value, const T1 valueTwo)
{
    std::cout << value << ' ' << valueTwo << std::endl;
}

template <typename T>
void Swap(T& , T& );


int main()
{
    Print(10, 'A');
    Print("Hello", 10);
    Print(12.34, 12);
    Print(true, "Cat");
    Print('A', 2.3);



    std::string str1 = " Cat", str2 = "Dog";
    Swap(str1, str2);
    std::cout << "str1 is: " << str1 << ", str2 is: " << str2 << std::endl;

    int x = 10, y = 5;
    Swap(x, y);
    std::cout << "x is: " << x << ", y is: " << y << std::endl;




    // [] () {};

    auto PRINT = [] (int x, int y) 
    {
        std::cout << "x is: " << x << ", y is: " << y << std::endl;
    };

    PRINT(10, 5);


    int arr[5] {4, 2, 0, 8, 10};
    std::sort(std::begin(arr), std::end(arr), [](const int x, const int y){
        return x > y;  
    });

    for (int i = 0; i < 5; i++)
    {
        std::cout << arr[i] <<' ';
    }

    bool arr_positiv= std::all_of(std::begin(arr), std::end(arr), [](const int y){
        return y > 0;  
    });

    if (arr_positiv)
    {
        std::cout << "All elements in array are positiv." << std::endl;
    }
    else 
    {
        std::cout << "Not all elements in array are positiv." << std::endl;
    }


    auto mulTwo = [](int x)
    {
        return x * 2;
    };

    std::cout << mulTwo(5) << std::endl;



    int value = 2;

    auto mulTwo = [ &value ](int y)
    {
        // std::cout << value << std::endl;
        
        // y = value * y;
        // std::cout << y << std::endl;

        value = y * 2;

    };

    mulTwo(5);
    std::cout << "Value is: " << value << std::endl;

    // [] () {};












    // [](int *ptr) {
       
    //    ptr[]
    // }
 

     // Показник на ціле число:
    int number = 42;
    int * ptr = &number;                         // Оголошення вказівника та присвоєння йому адреси змінної

    std::cout << number << std::endl;

    std::cout << ptr << std::endl;

    *ptr = 100;
    std::cout << number << std::endl;            // Виведення оновленого значення змінно�� через вказівник


    
    // int x = 10;

    

    // *ptr = 10;                                  // Зміна значення змінної через вказівник


    
    int x = 10;
    int* px;
    
         
    px = &x;                                    // Записуємо адреси змінної x у px
    std::cout << px << " " << &x << std::endl;  // Відображаємо адресу x через покажчик
                        


    // оказник на рядок C-стилю (масив символів):
    // const char* text = "Hello, World!";         // Оголошення вказівника на рядок
    // std::cout << text << std::endl;             // Виведення рядка




    // Масив через вказівник:
    int arr[] = {1, 2, 3, 4, 5};
    int* arrPtr = arr;                          // Вказівник на початок масиву

    std::cout << *arrPtr << std::endl;
    arrPtr++;                                    // Перехід до наступного елемента масиву
    std::cout << *arrPtr << std::endl;
    arrPtr++;                                    // Перехід до наступного елемента масиву
    std::cout << *arrPtr << std::endl;


    for (int i = 0; i < 5; i++)
    {
        std::cout << arr[i] << " ";            // Виведення елемента масиву через вказівник
    }

    // ++ -- + - 

    for (int i = 0; i < 5; i++) {
        std::cout << *arrPtr << " "; 
        *arrPtr *= 2;           // Виведення елемента масиву через вказівник           // Виведення елемента масиву через вказівник
        arrPtr++;                               // Перехід до наступного елемента/Можливість використовувати інкремент і декремент
    }
    std::cout << std::endl;

    std::cout << *arrPtr << std::endl; 

     for (int i = 0; i < 5; i++) {
        std::cout << *arrPtr << " "; 
        *arrPtr = 0;           // Виведення елемента масиву через вказівник
        std::cout << *arrPtr << " "; 

        arrPtr++;                               // Перехід до наступного елемента/Можливість використовувати інкремент і декремент
    }
    std::cout << std::endl;




    for (int i = 0; i < 5; i++)
    {
        std::cout << arrPtr[ i ] << " ";            // Виведення елемента масиву через вказівник
    }
    std::cout << std::endl;

    std::cout << *arrPtr << std::endl; 

     for (int i = 0; i < 5; i++)
    {
        std::cout << arrPtr[ i ] << " ";            // Виведення елемента масиву через вказівник
    }
    std::cout << std::endl;

    std::cout << *arrPtr << std::endl;
    arrPtr++;
    std::cout << *arrPtr << std::endl;
    arrPtr++;
    std::cout << *arrPtr << std::endl;

    arrPtr = arr;

    // Переміщення вказівника вперед на 2 елементи (вказівник на 3)
    ptr = ptr + 2;

    // Отримання значення, на яке вказує вказівник
    int value = *ptr; // value = 3
    


    // Використання арифметики масиву:
    int array[] = {1, 2, 3, 4, 5};
    int* ptr = array;

    // Доступ до елементу за допомогою індекса масиву через вказівник
    // int thirdElement = ptr[2]; // thirdElement = 3




    // Вказівник на функцію:
    int (*functionPtr)(int, int) = add;                         // Вказівник на функцію
    int result = functionPtr(5, 3);                             // Виклик функції через вказівник


    // Масив вказівників на функції:
    int (*functionPointers[])(int, int) = {add, subtract};      // Масив вказівників на функції

    int result1 = functionPointers[0](5, 3);                    // Виклик функції "add"
    int result2 = functionPointers[1](5, 3);                    // Виклик функції "subtract"

    return 0;   
}

template <typename T>
void Swap(T& value, T& valueTwo)
{
    T temp = value;
    value = valueTwo;
    valueTwo = temp;
}


void print(int number)
{
    std::cout << "number is " << number << std::endl;
}


int AddTwo(int number)
{
    return number + 2;
}
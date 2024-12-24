#include <iostream>
// #include <windows.h>

// 2.3 Порядок виконання лабораторної  роботи і методичні вказівки з її виконання


// -------------------------------------------------------------------------------------------------------
// 2.3.1. Створити клас Array (динамічний масив), у якому визначити класи винятків, що ідентифікують некоректне завдання розмірності масиву:


using namespace std;

class Array
{
private:
    int *pType;
    int itsSize;

public:
    Array(int itsSize = 10);
    Array(const Array &rhs);
    ~Array(); // Деструктор для звільнення пам'яті
    int& operator[](int index);

    //визначення класів винятків
    class xZero; 
    class xTooBig;
    class xTooSmall;
    class xNegative;

};

// Визначення класів винятків поза класом Array
class Array::xZero : public std::exception {
public:
    const char* what() const noexcept override {
        return "You asked for a zero array.";
    }
};

class Array::xTooBig : public std::exception {
public:
    const char* what() const noexcept override {
        return "This array is too big.";
    }
};

class Array::xTooSmall : public std::exception {
public:
    const char* what() const noexcept override {
        return "This array is too small.";
    }
};

class Array::xNegative : public std::exception {
public:
    const char* what() const noexcept override {
        return "Negative size is not allowed.";
    }
};


Array::Array(int itsSize)
{
    int size = itsSize;

    if (size==0)
        throw xZero();

    if ((size<10)&&(size>0))
        throw xTooSmall();

    if (size>1000)
        throw xTooBig();

    if (size<0)
        throw xNegative();

    pType = new int[size];
    for (int i=0; i<size; i++)
        pType[i]=0;

}

Array::Array(const Array &rhs) {
    itsSize = rhs.itsSize; 
    pType = new int[itsSize]; 
    for (int i = 0; i < itsSize; i++) {
        pType[i] = rhs.pType[i]; 
    }
}

// Реалізація деструктора
Array::~Array() 
{
    delete[] pType;
}

int& Array::operator[](int index)
{
    if (index < 0 || index >= itsSize) // Перевірка індексу
        throw out_of_range("Index out of bounds");
    return pType[index];
}

int main()
{

    // SetConsoleOutputCP(CP_UTF8);
    
    int n;
    cout << "Input the dimension of array -> "; cin >> n;
    try{
        Array intArray(n);
        for (int j=0; j<n; j++)
        {
            intArray[j]=j;
            cout<<intArray[j]<<" ";
        }
    }
    catch (Array::xTooBig &e)
    {
        // cout << "This array is too big";
        cout << e.what();
    }
    catch (Array::xTooSmall &e)
    {
        // cout << "This array is too small";
        cout << e.what();
    }
    catch (Array::xZero &e) {
        // cout << "You asked for a zero array";
        cout << e.what();
    }
    catch (Array::xNegative &e) {
        // cout << "Negative size is not allowed";
        cout << e.what();
    }
    catch (const out_of_range& e) {
        cout << e.what();
    }
    catch (...)
    {
        cout << "That’s all";
    }
    return 0;
}









// -------------------------------------------------------------------------------------------------------
// 2.3.2  Створити виняток власного типу:



// #include "stdafx.h"
#include <new>
#include <iostream>
using namespace std;

class BigClass
{
public:
    BigClass() {};
    ~BigClass(){}

    long BigArray[100000000];
};

int main()
{
    while (true)
    {
        BigClass* q = new(std::nothrow) BigClass[5];
    

        if (q == nullptr) {
            cout << "Return nullptr pointer" << endl;
            cout << '+' << ' ';
        }
        else {
            std::cout << "Succeeded!\n";
            delete[] q;
        }

        break;
    }


    try
    {
        while (true)
        {
            BigClass* p = new BigClass;
            cout << '+' << ' ';
        }
    }
    catch(bad_alloc a)
    {
        const char* temp = a.what();
        cout << temp << '\n';
        cout << "Generated exception bad_alloc_1" << '\n';
    }
    
    try
    {
        BigClass * arr = new BigClass[3];
    }
    catch(bad_alloc a)
    {
        const char * temp = a.what();
        cout << temp << endl;
        cout << "Generated exception bad_alloc_2" << '\n';
    }
    
    return 0;
}
 

















// -------------------------------------------------------------------------------------------------------
// 2.4 Завершіти роботу збереженням проекту й оформленням звіту! Звіт завантажити у відповідну папку на dl.nure.

// Введення
// Метою даного проекту було вивчення обробки виключень у C++ під час динамічного виділення пам'яті. У ході роботи була реалізована програма, яка демонструє, як обробляти виключення, що виникають при нестачі пам'яті, а також як управляти ресурсами в C++.

// Результати виконання
// Створення класу BigClass:
// Реалізовано клас, що містить масив з 100 мільйонів елементів типу long. Це дозволяє створити ситуацію, коли виділення пам'яті може завершитися невдачею.



// Динамічне виділення пам'яті:
// Реалізовано функції для виділення пам'яті для масиву об'єктів BigClass та обробки виключень bad_alloc.
// Включено приклади, які показують, як обробляти ситуації, коли виділення пам'яті не вдалося.

// Програма успішно обробляє ситуації, коли виділення пам'яті не вдається, виводячи відповідні повідомлення.


// Висновки за результатами роботи
// У ході виконання проекту була отримана практична інформація про те, як управляти пам'яттю в C++ та як обробляти виключення, що виникають при динамічному виділенні пам'яті.
// Реалізована програма дозволяє ефективно обробляти помилки, що робить код більш надійним.
// Робота з виключеннями допомагає уникнути витоків пам'яті та інших проблем, пов'язаних із неправильним управлінням ресурсами.
// У подальшому рекомендується продовжити вивчення тем, пов'язаних з управлінням пам'яттю та виключеннями в C++, щоб поглибити свої знання та навички в програмуванні.
// Заключення
// Даний проект продемонстрував важливість обробки виключень та правильного управління пам'яттю в C++. Результати роботи можуть бути використані в майбутньому для розробки більш складних програмних рішень.
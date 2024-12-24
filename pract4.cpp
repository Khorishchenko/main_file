#include <iostream>

// ------------------------------------------------------------------------------------------------
// Завдання 1.
// Створити проект з урахуванням запропонованого тексту, протестувати його. Розглянути ініціалізацію об'єктів похідного класу (1 бал)
// Результат: 
// 0 0 0
// Ann 
// 10 12 2020

// Текст до завдання №1
 
#include <string>
using namespace std ;
 
class date {
    int day, month, year;
public :
    date ( int , int , int );
    date ( );
    void print();
};

date::date ( )
{ 
    day = 0;
    month = 0;
    year = 0;
}
 
date::date ( int a, int b, int c )
{
    day = a;
    month = b;
    year = c;
}
void date::print()
{
    cout << day<< " " << month << " " << year << endl ;
}
 
// Похідний клас
class birthday : public date{
string name;
    public :
    birthday( ); // стандартний конструктор
    birthday( int , int , int , string); // конструктор з параметрами
    void print1();
};

// Стандартний конструктор базового класу викликається автоматично
birthday::birthday ( )
{ 
    name = "no name";
} // рядок при оголошенні ініціалізується порожнім рядком
 
//конструктор із параметрами викликає конструктор із параметрами базового класу
birthday::birthday( int d, int m, int y, string s) :date ( d,m,y )
{ 
    name = s;
}

void birthday::print1()
{ 
    cout << name << " " << endl ;
    this->print();
}
 
int main()
{ 
    birthday n,n1(10,12,2020, "Ann" );
    n.print( );
    n1.print1( );
    return 0;
}





// ------------------------------------------------------------------------------------------------
// Завдання 2 . 
// Змінити в запропонованому тексті специфікатор доступу до даних у базовому класі на protected. Внести необхідні зміни до проекту та протестувати (1 бал.).
// Результат: 
// 0 0 0
// Ann 
// 10 12 2020


class date 
{
protected:  // змінити на protected
    int day, month, year;
public :
    date ( int , int , int );
    date ( );
    void print();
};

date::date ( )
{ 
    day = 0;
    month = 0;
    year = 0;
}
 
date::date ( int a, int b, int c )
{
    day = a;
    month = b;
    year = c;
}
void date::print()
{
    cout << day<< " " << month << " " << year << endl ;
}
 
// Похідний клас
class birthday : public date{
string name;
    public :
    birthday( ); // стандартний конструктор
    birthday( int , int , int , string); // конструктор з параметрами
    void print1();
};

// Стандартний конструктор базового класу викликається автоматично
birthday::birthday ( )
{ 
    name = "no name";
    day = 0;
    month = 0;
    year = 0;
} // рядок при оголошенні ініціалізується порожнім рядком
 
//конструктор із параметрами викликає конструктор із параметрами базового класу
birthday::birthday( int d, int m, int y, string s) 
{ 
    name = s;
    day = d;
    month = m;
    year = y;
}

void birthday::print1()
{ 
    cout << name << " " << endl ;
    this->print();
}
 
int main()
{ 
    birthday n,n1(10,12,2020, "Ann" );
    n.print( );
    n1.print1( );
    return 0;
}









// ------------------------------------------------------------------------------------------------
// Завдання 3 .
// Внести зміни до цього проекту відповідно до обраного варіанту завдання  та протестувати проект.
//  Специфікатор доступу до даних в базовому класі встановити protected. У головній програмі організувати динамічне виділення пам'яті під об'єкти 
//  та використовувати ці об'єкти під час тестування.

// 5. У похідному класі розробити метод порівняння дати народження двох осіб та повернути 
// об'єкт старшого. Параметр передати за покажчиком та результат методу передати за посиланням.


// Результат: 
// Person 1: Alice 
// 15 5 1990
// Person 2: Bob 
// 20 7 1985
// Older person: Bob 
// 20 7 1985


#include <iostream>
#include <string>
using namespace std;

class date {
protected:
    int day, month, year;
public:
    date(int, int, int);
    date();
    void print() const;
};

date::date() {
    day = 0;
    month = 0;
    year = 0;
}

date::date(int a, int b, int c) {
    day = a;
    month = b;
    year = c;
}

void date::print() const {
    cout << day << " " << month << " " << year << endl;
}

class birthday : public date {
    string name;
public:
    birthday();
    birthday(int, int, int, string);
    void print1() const;
    void compare(const birthday* other, birthday& older) const;
};

birthday::birthday() {
    name = "no name";
    day = 0;
    month = 0;
    year = 0;
}

birthday::birthday(int d, int m, int y, string s) : date(d, m, y) {
    name = s;
}

void birthday::print1() const {
    cout << name << " " << endl;
    this->print();
}

void birthday::compare(const birthday* other, birthday& older) const {
    if (year < other->year || (year == other->year && month < other->month) ||
        (year == other->year && month == other->month && day < other->day)) {
        older = *this;
    } else {
        older = *other;
    }
}

int main() {
    // Динамічне створення об'єктів
    birthday* person1 = new birthday(15, 5, 1990, "Alice");
    birthday* person2 = new birthday(20, 7, 1985, "Bob");

    // Виведення інформації про осіб
    cout << "Person 1: ";
    person1->print1();

    cout << "Person 2: ";
    person2->print1();

    // Порівняння дати народження
    birthday older;
    person1->compare(person2, older);

    cout << "Older person: ";
    older.print1();

    // Звільнення пам'яті
    delete person1;
    delete person2;

    return 0;
}





// ------------------------------------------------------------------------------------------------
// 4. Завершіть роботу збереженням проекту й оформленням звіту.




//  умову завдання , текст та результат виконання завдання №1;
// Завдання 1
// Код реалізує базовий клас date і похідний клас birthday. У головній програмі створено об'єкти класу birthday із використанням як стандартного конструктора, 
// так і конструктора з параметрами.
// Результат:
// 0 0 0  
// Ann  
// 10 12 2020




// − умову завдання , текст та результат виконання завдання №2; 
// Завдання 2
// Умова:
// Змінити специфікатор доступу до даних у базовому класі з private на protected. Внести зміни в похідний клас і протестувати програму.
// Текст завдання:
// Дані day, month, year у базовому класі date змінені на protected. Конструктори та методи похідного класу birthday оновлено, 
// щоб забезпечити доступ до захищених даних базового класу.
// Результат:
// 0 0 0  
// Ann  
// 10 12 2020





// − умову завдання , текст та результат виконання завдання №3.
// Умова:
// Додати динамічне виділення пам'яті для об'єктів класу. Використовувати ці об'єкти під час тестування.
// У похідному класі розробити метод порівняння дати народження двох осіб та повернути 
// об'єкт старшого. Параметр передати за покажчиком та результат методу передати за посиланням.

// Текст завдання:
// Реалізовано динамічне створення об'єктів класу birthday за допомогою операторів new. Після використання пам'ять звільнено за допомогою оператора delete.
// також додато реалізацію порівняння дат.
// Результат:
// Person 1: Alice 
// 15 5 1990
// Person 2: Bob 
// 20 7 1985
// Older person: Bob 
// 20 7 1985


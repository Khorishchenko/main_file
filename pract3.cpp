#include <iostream>


// Завдання 1. (загальне-1 бал)
// Текст к завданню №1

class Rational
{
private:
    int chisl, znam;
public:
    Rational(){chisl=0; znam=0;}
    Rational(int a,int b){chisl=a; znam=b;}
    void Mult(Rational x);
    void Write();
    friend Rational operator * (const Rational &n1, const Rational &n2 );
};

void Rational::Mult(Rational x)
{
    chisl=chisl*x.chisl;
    znam=znam*x.znam;
}

// перевизначення операції множення. 
Rational operator * (const Rational &n1, const Rational &n2 )
{
    Rational res;
    res.chisl=n1.chisl*n2.chisl;
    res.znam=n1.znam*n2.znam;
    return res;
}

void Rational::Write()
{
    std::cout<<chisl<<"|"<<znam<<std::endl;
}
 
int  main( )
{
    Rational n1(2,3), n2(3,2);
    n1.Mult(n2);
    n1.Write();

    Rational n3 = n1 * n2;
    n3.Write();
    return 0; 
}







//----------------------------------------------------------------------------------------------------------------
// Завдання 2. (індивідуальне-3 бала)
// Варіанти індивідуальних завдань № 2:
// 5. Розробити метод "Визначити простий дріб", дані ввести з клавіатури.

class Rational
{
private:
    int chisl, znam;

    // Функція для знаходження найбільшого спільного дільника (НДД)
    int gcd(int a, int b) const {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    // Функція для скорочення дробу
    void reduce() {
        int divisor = gcd(chisl, znam);
        chisl /= divisor;
        znam /= divisor;

        //Переконаємося, що знаменник позитивний
        if (znam < 0) {
            chisl = -chisl;
            znam = -znam;
        }
    }

public:
    Rational(){
        chisl=0; znam=1;
    }
    Rational(int a,int b)
    {
        chisl=a; znam=b;
        reduce(); // Скорочуємо дріб під час створення
    }
    void Mult(Rational x);
    void Write();
    friend Rational operator * (const Rational &n1, const Rational &n2 );
};

void Rational::Mult(Rational x)
{
    chisl=chisl*x.chisl;
    znam=znam*x.znam;
    reduce(); // Скорочуємо дріб під час створення
}

Rational operator * (const Rational &n1, const Rational &n2 )
{
    Rational res(n1.chisl * n2.chisl, n1.znam * n2.znam);
    return res;
}

void Rational::Write()
{
    std::cout<<chisl<<"|"<<znam<<std::endl;
}
 


// У головній програмі організувати динамічне виділення пам'яті під об'єкти класу Rational.
int  main( )
{
    int a, b;
    std::cout << "Введите числитель: ";
    std::cin >> a;
    std::cout << "Введите знаменатель: ";
    std::cin >> b;
    if (b == 0) {
        throw std::invalid_argument("Знаменатель не может быть равен нулю.");
    }

    Rational *r1 = new Rational(a,b);
    Rational *r2 = new Rational(5, 4);

    Rational n3 = *r1 * *r2;
    n3.Write();


    delete r1;
    delete r2;

    return 0; 
}

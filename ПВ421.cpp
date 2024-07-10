#include <iostream>
#include <string>

// * + - / % 

// Перевантажимо оператори порівняння >, <, >= та <= == and !=

class Sum{
    int a;
    public:
        Sum(int a) : a (a) {}

        friend void operator << ( std::ostream& out, const Sum &obj );
        friend void operator >> ( std::istream& in,  Sum &obj );

};

void operator << ( std::ostream& out, const Sum &obj )
{
    out << obj.a << std::endl;
}

void operator >> ( std::istream& in,  Sum &obj )
{
    in >> obj.a;
}

int main()
{
    Sum a(30);
    Sum b(30);

    std::cout << a;

    std::cin >> a;


    // if(a > b)
    //     std::cout << "a > b" << std::endl;
    // else if(a == b)
    //     std::cout << "a == b" << std::endl;
    // else
    //     std::cout << " a < b" << std::endl;

}






 
// Перевантаження операторів інкременту та декременту
// Оскільки оператори інкременту та декременту є унарними та змінюють свої операнди,
// то навантаження слід виконувати через методи класу.


class Number
{
    int a;
    public:
    Number(int a ) : a(a){}


    Number operator++(){
        ++(this->a);
        return *this;
    }

    Number operator++(int){
         Number tmp(this->a);
        ++(this->a);
        return tmp;
    }


    friend std::ostream& operator<<(std::ostream &out, const Number &obj);
};

std::ostream& operator<<(std::ostream &out, const Number &obj)
{
    out << obj.a;
    return out;
}

// int main()
// {
//     Number a(10);



//     std::cout << ++a << std::endl;
//     std::cout << a++ << std::endl;
//     std::cout << a << std::endl;



//     // int x = 10;

//     // std::cout << ++x << std::endl;
//     // std::cout << x++ <<  ' ' << x << std::endl;
//     // std::cout << x   <<   std::endl;

//     return 0;
// }




// Перегрузка оператора индексации []

class Int
{
public:
    Int()
    {
        for (int i = 0; i < 10; i++)
        {
            arr[i] = rand() % 10;
        }
    }


    void Print() const{
        for (int i = 0; i < 10; i++)
        {
            std::cout << arr[i] << ' ';
        }
        std::cout << std::endl;
    }

private:
    int arr[10];    

};



// int main()
// {

//     return 0;
// }




//  Перегрузка оператора ()


class Operaor
{
private:
        int arr[5][5];
public:
     
    friend std::ostream& operator<<(std::ostream &out, Operaor &o);
};



// int main()
// {
//     Operaor a;

//     std::cout << a << std::endl;

//     a(3, 3) = 5;

//     std::cout << a << std::endl;


//     a();

//     std::cout << a << std::endl;

//     a(10);

//     std::cout << a << std::endl;

// }
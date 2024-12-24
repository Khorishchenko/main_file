// 3.3.1 (загальне -1 бал) Побудувати граф спадкування, що відображає послідовність, в якій викликаються конструктори, використовуючи наведений нижче текст.
// Результат: A1 B1 A2 B2 C E 

// #include<iostream>
class A1
{
    public:
    A1()
    {
        std::cout << "A1 ";
    }
};

class A2
{
    public:
    A2()
    {
        std::cout << "A2 ";
    }
};

class B1: public A1
{
    public:
    B1()
    {
        std::cout << "B1 ";
    }
};

class B2: public A2
{
    public:
    B2()
    {
        std::cout << "B2 ";
    }
};

class C: public B1, public B2
{
    public:
    C() 
    {
        std::cout << "C ";
    }
};

class E: public C
{
    public:
    E()
    {
        std::cout << "E ";
    }
};

int main( )
{
    E *e = new E();
    return 0;
}





//-----------------------------------------------------------------------------------------------------------------------

// 3.2.2. (Загальне-1 бал) Побудувати граф спадкування, що відображає послідовність, у якій викликаються конструктори (рис.2).
// Результат: A1 B1 A2 B2 C D1 A1 B1 A2 B2 C D2 E 

// 3.2.3. (загальне-1 бал) Виконати завдання п.2.2, використовуючи віртуальне успадкування. Порівняти результати п.2.2 і п.2.3, зробити висновки та відобразити їх у звіті.
// Результат: A1 B1 A2 B2 C D1 D2 E 

#include<iostream>
class A1
{
    public:
    A1()
    {
        std::cout << "A1 ";
    }
};

class A2
{
    public:
    A2()
    {
        std::cout << "A2 ";
    }
};

class B1: public A1
{
    public:
    B1()
    {
        std::cout << "B1 ";
    }
};

class B2: public A2
{
    public:
    B2()
    {
        std::cout << "B2 ";
    }
};

class C: public B1, public B2
{
    public:
    C() 
    {
        std::cout << "C ";
    }
};

class D1 : virtual public C             // Додаємо virtual 
{
    public:
    D1()
    {
        std::cout << "D1 ";
    }
};

class D2 : virtual public C             // Додаємо virtual 
{
    public:
    D2()
    {
        std::cout << "D2 ";
    }
};

class E : public D1, public D2
{
    public:
    E()
    {
        std::cout << "E ";
    }
};


int main( )
{
    E *e = new E();
    delete e;
    return 0;
}





//-----------------------------------------------------------------------------------------------------------------------
// 3.2.4. (загальне-1 бал). Побудувати граф спадкування (рис.3), що відображає послідовність,
//  у якій викликаються конструктори, використовуючи невіртуальне успадкування та віртуальне успадкування.
// Результат: G A1 B1 G A2 B2 C D1 D2 E 

#include<iostream>
// // додаємо новий клас G
class G
{
    public:
    G()
    {
        std::cout << "G ";
    }
};


class A1 : public G
{
    public:
    A1()
    {
        std::cout << "A1 ";
    }
};

class A2 : public G
{
    public:
    A2()
    {
        std::cout << "A2 ";
    }
};

class B1: public A1
{
    public:
    B1()
    {
        std::cout << "B1 ";
    }
};

class B2: public A2
{
    public:
    B2()
    {
        std::cout << "B2 ";
    }
};

class C: public B1, public B2
{
    public:
    C() 
    {
        std::cout << "C ";
    }
};

class D1 : virtual public C             // Додаємо virtual 
{
    public:
    D1()
    {
        std::cout << "D1 ";
    }
};

class D2 : virtual public C             // Додаємо virtual 
{
    public:
    D2()
    {
        std::cout << "D2 ";
    }
};

class E : public D1, public D2
{
    public:
    E()
    {
        std::cout << "E ";
    }
};


int main( )
{
    E *e = new E();
    delete e;
    return 0;
}








//-----------------------------------------------------------------------------------------------------------------------
// 3.2.5 Виконати наступні завдання (-4 балів). 3 студенти за списком виконують один варіант)
// Завдання 2. (варіанти 4-6) Розробити специфікацію та реалізацію стандартного конструктора 
// та конструктора з параметрами для класу В, похідного від А: (проект протестувати)


// Результат:
// A(0,0,0)
// d = 0
// A(1,2,3)
// d = 4.5

class A
{
    int a,b,c;
public:
    A();
    A(int,int,int);


    void Print() const
    {
        std::cout << "A(" << a << "," << b << "," << c << ")" << std::endl;
    }
};

A::A()
{
    a=b=c=0;
}

A::A(int a, int b, int c)
{
    this->a=a;
    this->b=b;
    this->c=c;
}

class B: public A
{
    float d;
public:
    B()
    {
        d = 0;
    }

    B(int a, int b, int c, float d) : A(a,b,c)
    {
        this->d = d;
    }

    void Print() const
    {
        A::Print();
        std::cout << "d = " << d << std::endl;
    }

};

int main()
{
    B obj1;
    B obj2(1,2,3,4.5);

    obj1.Print();
    obj2.Print();

    return 0;
}
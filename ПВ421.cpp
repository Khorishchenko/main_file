#include <iostream>
#include <string>
#include <cstring>


// Перевантаження оператора =, Конструктор перенесення та Конструктор копіювання

class MyString {
public:
    // Конструктор за замовчуванням
    MyString() : data(nullptr) {}

    MyString( const char *str )
    {
        if (str != nullptr) {
            data = new char[strlen(str) + 1];
            strcpy(data, str);
        } else {
            data = nullptr;
        }
    }

    // Конструктор копіювання
    MyString( const MyString &obj )
    {
        std::cout << " constructor copy " << std::endl;
        if ( obj.data != nullptr )
        {
            data = new char[ strlen(obj.data) + 1 ];

            for ( int i = 0; i < strlen(obj.data); i++)
                data[i] = obj.data[i];
            data[strlen(obj.data)] = '\0';
        }
        else
        {
            data = nullptr;
        }
    }

   




    // Перевантаження оператора присвоювання
    MyString& operator = ( const MyString &obj )
    {
        std::cout << " operator = " << std::endl;
        if ( this == &obj )
        {
            return *this;
        }

        if ( data != nullptr && obj.data != nullptr )
        {
            delete [] data;

            data = new char[ strlen(obj.data) + 1 ];

            for ( int i = 0; i < strlen(obj.data); i++)
                data[i] = obj.data[i];
            data[strlen(obj.data)] = '\0';
        }
        return *this;
    }

    // Конструктор переміщення
    MyString( MyString && obj)
    {
        data = obj.data;
        obj.data = nullptr;
    }
    

    // Деструктор
    ~MyString() {
        if (data != nullptr)
        {
            
            delete[] data;
            std::cout << "destructor" << std::endl;
        }
    }

    // Виведення рядка
    void print() const
    {
        if ( data != nullptr )
            std::cout << data << std::endl;
        else
            std::cout << " str is empty " << std::endl;
    }
    

private:
    // MyString( const MyString &obj ) = delete; // заборона використання конструктора копіювання !!!
    // MyString& operator = ( const MyString &obj ) = delete; // заборона використання оператора = !!!
    char * data;

};

void print( const MyString obj )
{
    obj.print();
}

int main() 
{


    MyString str( "Hello world" );
    str.print();



    // // Виклик конструктору копіювання
    MyString str2( str );
    str2.print();

    print(str2);

    MyString str3 = str2;
    str3.print();



    // Виклик перевантаженого оператора присвоювання
    MyString str("hello");
    MyString str2("hello World");

    str.print();
    str2.print();

    str = str2;

    str.print();


    // Виклик конструктору переміщення
    
    MyString o1( "hello" );
    o1.print();

    MyString o2( std::move( o1 ) );

    o2.print();
    o1.print();

    return 0;
}
#include <iostream>
#include <stdlib.h>
#include <time.h>

#include <algorithm>

#include <iterator>
#include <locale>

int GLOBAL_VAR = 10;




// Перший спосіб: до функції main

// значення ім'я_функції (параметри) 
// { 
//     блок повторюваного коду (тіло); 
// }


// // ********************************************************************************


// // 2. Приклади створення та виклик функцій


// void Hello(       )
// {
//     std::cout << "Hello, World!!!\n\n";
// }


// int main()
// {
//     Hello();
//     Hello();
//     Hello();
    
//     // Результат - тричі фраза - Hello, World! - на екрані
    
//     return 0;
// }

// // //-----------------------------------------------------------------------------


// // // 1. Функція, яка приймає один параметр,
// // // але не повертає жодного значення

// // малює лінію із зірочок довжиною count
// void Star( int count )
// {
//      for(int i = 0; i < count; i++)
//          std::cout << '*';
//      std::cout << "\n";
// }

// int main()
// {
//     Star(3); // показ лінії із трьох зірочок
//     Star(5); // показ лінії з п'яти зірочок
//     Star(30);

//     return 0;
// }


// // //-----------------------------------------------------------------------------


// // // 2. Функція, яка приймає два параметри, але все ще не повертає жодного значення

// // малює лінію із символу - symb, довжиною count
// void AnyLine(  char symb, int count )
// {
//       for(int i = 0; i < count; i++)
//         std::cout << symb << ' ';
//       std::cout << "\n";
      
// }

// int main()
// {
//       AnyLine('+', 3); // показ лінії із трьох плюсів
//       AnyLine('=', 5); // показ лінії із п'яти знаків
// }


// // //-----------------------------------------------------------------------------


// // Ключове слово return
// // return значення;

// // // 3. Функція, яка приймає два параметри, і повертає значення

// // // обчислює ступінь (Pow) числа (Digit)

void print(int value)
{
    std::cout << value << std::endl;
}

int MyPow(int Digit, int Pow)
{
     int key = 1;

     for(int i = 0; i < Pow; i++)
         key *= Digit;

     return key;
}

int main()
{
      // запис повертається в змінну
      
      int Digit;
      int Pow;

      std::cin >> Digit;
      std::cin >> Pow;

      print( MyPow(Digit, Pow) );                // виклик функці�� перший спосіб

      int res = MyPow(Digit, Pow);              // отримання значення з функції перший спосіб 

      std::cout << MyPow(5, 3) << std::endl;    // отримання значення з функції другий спосіб 

    //   MyPow(5, 3);

    //   std::cout << "Res = " << res << "\n\n";
      return 0;
}


// // //-----------------------------------------------------------------------------

// // // 4. Функція, яка приймає два параметри
// // // і повертає максимальне із двох значень:


int Max(int a, int b)
{
    return a > b ? a : b;   // тернарний оператор
}

int main()
{
     int result = Max(10, 30);
    
     std::cout << "Maximum is: " << result << std::endl;
     // or
     std::cout << "Maximum is: " << Max(42, 2) << std::endl;
    
     return 0;
}

// // //-----------------------------------------------------------------------------

// // // 5. Ми можемо викликати функцію всередині іншої функції.


void Second()
{

    std::cout << "\nSecond function\n";
}

void First()
{
      std::cout << "\nBegin first function\n";
      Second();
      std::cout << "\nEnd first function\n";
}

int main()
{
     First();
     std::cout << "End main function" << std::endl;
     return 0;
    
}



// // // Дещо про масиви...

// int summa(int array[], int size)
// {
//     int sum = 0;
//     for (int i = 0; i < size; i++)
//         sum += array[i];
//     return sum;
    
// }


// int const SIZE = 5;



// void change(int array[])
// {
//     for (int i = 0; i < SIZE; i++)
//     {
//         array[i] = 0;
//     }
// }


// int main()
// {
//     int arr[SIZE];

//     for (int i = 0; i < SIZE; i++)
//     {
//         arr[i] = rand() % 10;
//         std::cout << arr[i] << ' ';
//     }
//     std::cout << "\n";

//     change(arr);

//     for (int i = 0; i < SIZE; i++)
//     {
//         std::cout << arr[i] << ' ';
//     }

//     std::cout << "\n";

//     std::cout << "sum arr is: " << summa(arr, SIZE) << std::endl;
// }










// // // Прототипи функцій чи другий спосіб оголошення
// // // Прототипи

// void MyFunc();
// void MyFuncNext();

// int main()
// {
//       MyFunc(); // MyFunc
//       MyFuncNext(); // MyFuncNext
//       return 0;
// }

// // описи
// void MyFunc()
// {
//       cout << "MyFunc\n";
// }

// void MyFuncNext()
// {
//       cout << "MyFuncNext\n";
// }


// // Є масив, змінити всі літери нижнього регістру у верхній.


// void toUPPER(char str[])
// {
//     int size = strlen(str);
    
//     for (int i = 0; i < size; i++)
//     {
//         if (islower(str[i]))
//         {
//             str[i] = toupper(str[i]); 
//         }
//     }
// }


// int main()
// {
//     char str[] = "Hello world";

//     toUPPER(str);

//     std::cout << str << std::endl;
// }
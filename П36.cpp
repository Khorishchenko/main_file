#include <stdlib.h>
#include <time.h>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    // const int Size = 10;

    // int array[] = {0,1,2,3,4,5,6,7};
    // int array_rand[Size];

    // for (int i = 0; i < Size; i++)
    // {
    //     array_rand[i] = rand() % 100; 
    // }

    // for (int element : array_rand)
    // {
    //     cout << element << ' ';
    // }
    // cout << endl;


    // std::cout << "--------------------------" << std::endl; 


    // const int size_arr = size(array);
    // const int size_array = sizeof(array) / sizeof(array[0]);

    // for (int i = 0; i < size_array; i++)
    // {
    //     cout << array[ i ] << ' ';
    // }
    // cout << endl;

    // for (int element : array)
    // {
    //     cout << element << ' ';
    // }
    // cout << endl;



// 1. Двовимірні масиви

    //  Загальний синтаксис:

    //  тип_даних імені_масиву [число_рядків][число_стовпців];

    //  Приклад:

    //  int array[2][3];
   

    //  array[0][0] = 10;
    //  array[0][1] = 20;
    //  array[0][2] = 30;

    //  array[1][0] = 40;
    //  array[1][1] = 50;
    //  array[1][2] = 60;


    //  cout << array[0][0] << ' '; 
    //  cout << array[0][1] << ' '; 
    //  cout << array[0][2] << endl; 

    //  cout << array[1][0] << ' '; 
    //  cout << array[1][1] << ' ';
    //  cout << array[1][2] << endl;




// Ініціалізація

    //  int array[3][3] = { {7, 8}, {10, 3, 5} };

    //  for(int i = 0; i < 3; i++)
    //  { 
    //     for (int x = 0; x < 3; x++)
    //     { 
    //         cout << array[i][x] << ' ';
    //     }
    //     cout << "\n";
    //  }


// 2. Ініціалізація з допомогою циклу
    
    //  const int row = 5;
    //  const int col = 5;

    //  int array[row][col];
    
    
    //  for (int i = 0; i < row; i++)
    //  {
    //     for (int j = 0; j < col; j++)
    //     {
    //         array[i][j] = rand() % 100;
    //         std::cout << array[i][j] << "\t";
    //     }

    //     std::cout << "\n\n";
    //  }

    //  std::cout << array[1][4] << std::endl;
    


     // сортувати


    //  int matrix[][4] = { {91, 80, 82, 89}, {9, 8, 7, 6}, {13, 12, 11, 10} };

    //  int rows = sizeof(matrix) / sizeof(matrix[0]);
    //  int cols = sizeof(matrix[0]) / sizeof(matrix[0][0]);

    // //  Сортування кожного стовпця окремо
    //  for (int i = 0; i < rows; i++) {
    //      std::sort(matrix[i], matrix[i] + cols);
    //  }

    // //  Вивід відсортованого двовимірного масиву
    //  for (int i = 0; i < rows; i++) {
    //      for (int j = 0; j < cols; j++) {
    //          std::cout << matrix[i][j] << " ";
    //      }
    //      std::cout << std::endl;
    //  }



     // Пошук мінімального значення:
    //  int matrix[][3] = { {5, 2, 9}, {1, 5, 6}, {3, 8, 4} };

    //  int rows = sizeof(matrix) / sizeof(matrix[0]);
    //  int cols = sizeof(matrix[0]) / sizeof(matrix[0][0]);

    //  int min_value = INT_MAX;

    //  // Пошук мінімального значення в двовимірному масиві
    //  for (int i = 0; i < rows; i++) {
    //     for (int j = 0; j < cols; j++)
    //         min_value = ( matrix[i][j] < min_value ) ? matrix[i][j] : min_value;
    //  }

    //  std::cout << "Мінімальне значення: " << min_value << std::endl;






    // Завдання 1
    // Напишіть програму, яка створює двовимірний масив і заповнює його за таким принципом: користувач вводить число (наприклад, 3); 
    // перший елемент масиву набуває значення цього числа; наступний елемент масиву набуває значення цього числа + 1 
    // (тобто 4 для нашого прикладу); 
    // третій елемент масиву — попередній елемент + 1 (тобто 5 для нашого прикладу). Створений масив вивести на екран

    
    const int rows = 5;
    const int cols = 5;

    int array[rows][cols];

    // std::cout << "Enter number: ";
    // int num;
    // std::cin >> num;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            array[i][j] = (rand() % 50) + 50;
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }






    // DZ
    // Завдання 2
    // Необхідно відсортувати перші дві третини масиву в порядку зростання, якщо середнє арифметичне всіх елементів більше нуля; 
    // в разі — лише першу третину. Іншу частину масиву не сортувати, а розташувати у зворотному порядку.


     
    return 0;
}
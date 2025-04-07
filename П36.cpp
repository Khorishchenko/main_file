#include <iostream>
#include <cctype>
#include <stdio.h>
#include <string>
#include <cstring>
#include <string>
#include <algorithm>
#include <iostream>
#include <string>
#include <fstream>
#include <iostream>





// assert використовується для перевірки логічних умов під час виконання програми, 
// допомагаючи виявити помилки на етапі розробки. Коли умова в assert не виконується, 
// програма завершується з повідомленням про помилку. 



// Приклад 1: Перевірка значень параметра функції

#include <iostream>
#include <cassert>

void setArrayValue(int* arr, int size, int index, int value) {
    assert(index >= 0 && index < size);  // Перевірка, що індекс в межах масиву
    arr[index] = value;
}

void PrintArray(int* arr)
{
    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}


// int main() {
//     int arr[5] = {0, 1, 2, 3, 4};

//     setArrayValue(arr, 5, 2, 10);  // Коректно
//     PrintArray(arr);

//     setArrayValue(arr, 5, 7, 20);  // Викличе помилку через некоректний індекс
//     PrintArray(arr);

//     return 0;
// }




// Приклад 2: Перевірка вказівника на нуль
void printArray(int* arr, int size) {
    assert(arr != nullptr);  // Перевірка, що вказівник не є нульовим
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int* array = new int[3]{1, 2, 3};
    printArray(array, 3);  // Коректно
    delete[] array;
    
    array = nullptr;
    printArray(array, 3);  // Викличе помилку через nullptr

    std::cout << "end our program" << std::endl;
    return 0;
}
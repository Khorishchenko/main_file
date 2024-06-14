#include <iostream>
#include <algorithm>
#include <iterator>
#include <climits>
#include <stdlib.h>
#include <vector>
#include <climits>
#include <cstring>
#include <stdio.h>
#include <string.h>

#include <vector>
#include <iomanip>



// https://www.youtube.com/watch?v=1cKvMZOJeeE&ab_channel=%23SimpleCode - VECTOR

using namespace std;

int main()
{

    vector<int> myVector(10, 4); 


    for (int i = 0; i < myVector.size(); i++)
    {
        std::cout << setw(4) << myVector[i];
    }
    std::cout << endl;


    std::cout << "My vector size is " << myVector.size() << std::endl; 
    std::cout << "My vector capacity is " <<  myVector.capacity() << std::endl;     // Размер вектора по ячейкам помяты



    myVector.resize(6); // устанавливаем длину, равную 6

    for (int i = 0; i < myVector.size(); i++)
    {
        std::cout << setw(4) << myVector[i];
    }
    std::cout << std::endl;

    std::cout << "My vector size is " << myVector.size() << std::endl; 
    std::cout << "My vector capacity is " <<  myVector.capacity() << std::endl;     // Размер вектора по ячейкам помяты




    myVector.resize(12); // устанавливаем длину, равную 6


    std::cout << "My vector size is " << myVector.size() << std::endl; 
    std::cout << "My vector capacity is " <<  myVector.capacity() << std::endl;     // Раз





    myVector = { 8, 7, 6, 5 }; // ок, длина myVector теперь равна 4!
    std::cout << "length: " << myVector.size() << "  capacity: " << myVector.capacity() << '\n';


    for (auto &element : myVector)
        std::cout << element << ' ';
    std::cout << std::endl;




    myVector.push_back(5);
    myVector.push_back(5);
    myVector.push_back(5);
    myVector.push_back(5);

    for (auto &element : myVector)
        std::cout << element << ' ';
    std::cout << std::endl;

    std::cout << "length: " << myVector.size() << "  capacity: " << myVector.capacity() << '\n';




    myVector.clear();         // Очистить вектор 

    std::cout << "My Vector size is " << myVector.size() << std::endl;
    std::cout << "My vector capacity is " <<  myVector.capacity() << std::endl;

    for (auto &element : myVector)
        std::cout << element << '|';
    std::cout << std::endl;




    myVector.reserve(100);             // Выделить количество памяти по ячейкам  

    std::cout << "My Vector size is " << myVector.size() << std::endl;
    std::cout << "My vector capacity is " <<  myVector.capacity() << std::endl;



    std::cout << ((bool)myVector.empty()) << std::endl;    // Проверка на наличия значения в векторе 1 нету 0 есть 



    myVector.resize(20, 10);  // Создать вектор на 20 элементы заполнить значением 10 все элементы 


    std::cout << "My Vector size is " << myVector.size() << std::endl;
    std::cout << "My vector capacity is " <<  myVector.capacity() << std::endl;

    std::cout << ((bool)myVector.empty()) << std::endl;

    for (int i = 0; i < myVector.size(); i++)
    {
        std::cout << setw(4) << myVector[i];
    }
    std::cout << std::endl;



    int index = 3;
    myVector.erase(myVector.begin() + index);


    for (auto const &element: myVector)
        std::cout << std::setw(4) << element;
    std::cout << std::endl;

    std::cout << "My Vector size is " << myVector.size() << std::endl; 
    cout << "My vector capacity is " <<  myVector.capacity() << std::endl;

    cout << std::endl;

}
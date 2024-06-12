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




template <class T>
struct Element {
    T data;
    Element* Next;
};




template <class T>
class List {
    Element<T>* Head;
    Element<T>* Tail;
    int count;

public:
    List();
    ~List();

    void Add(T data);             //Додавання елемента до списку  (Новий елемент стає останнім)
    void Del();
    void DelAll();
    void Print() const;
    int GetCount() const;
    bool IsEmpty() const;
    bool IsFull() const;
};



template<class T>
List<T>::List() 
{
    Head = Tail = nullptr;
    count = 0;
}

template<class T>
List<T>::~List() {
    DelAll();
}

template<class T>
int List<T>::GetCount() const {
    return count;
}

template<class T>
bool List<T>::IsEmpty() const {
    return (Head == nullptr);
}

template<class T>
bool List<T>::IsFull() const {
    return (Head != nullptr);
}

template<class T>
void List<T>::Add(T data) 
{
    Element<T>* tmp = new Element<T>;
    tmp->data = data;
    tmp->Next = nullptr;

    if (Tail != nullptr) {
        Tail->Next = tmp;
        Tail = tmp;
    }
    else {
        Head = Tail = tmp;
    }
    count++;
}

template<class T>
void List<T>::Del() {
    if (Head != nullptr) {
        Element<T>* tmp = Head;
        Head = Head->Next;
        delete tmp;
        count--;
    }
}

template<class T>
void List<T>::DelAll() {
    while (Head != nullptr) {
        Del();
    }
}

template<class T>
void List<T>::Print() const {

    Element<T>* temp = Head;              //Запам'ятовуємо адресу головного елемента

    while (temp != nullptr) {             //Виводимо дані
        std::cout << temp->data << " ";
        temp = temp->Next;
    }

    std::cout << std::endl;
}

int main() {
    List<int> lst;
    int size = 6, arr[] = { 6, 13, 4, 6, 7, 9 };

    if (lst.IsEmpty()) {
        std::cout << "The list is empty." << std::endl;
    }
    // if (lst.IsFull()) {
    //     std::cout << "The list is full." << std::endl;
    // }

    for (int i = 0; i < size; i++) {
        lst.Add(arr[i]);
    }

    lst.Print();

    if (lst.IsEmpty()) {
        std::cout << "The list is empty." << std::endl;
    }

    return 0;
}
#include <iostream>

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
#include <algorithm>



#include <chrono>
#include <list>
#include <iterator>


#include <iostream>
#include <chrono>
#include <list>
#include <iterator>
#include <algorithm>
#include <map>
#include <set>
#include <sstream>



// https://www.youtube.com/watch?v=1cKvMZOJeeE&ab_channel=%23SimpleCode - VECTOR


// int main() 
// {
//     std::vector<int> vec = {1, 2, 3, 4, 5};
//     std::vector<int> vec2;
//     std::vector<int> vec3(10);


    // std::cout << "Elements of the vector in reverse order: ";
    // for ( std::vector<int>::reverse_iterator rit = vec.rbegin(); rit != vec.rend(); ++rit ) {
    //     std::cout << *rit << " ";
    // }
    // std::cout << std::endl;

    // auto it = vec.begin();

    // for (; it != vec.end(); it++ )
    //     std::cout << *it << ' ';
    // std::cout << std::endl;


    // for ( int i = vec.size() - 1; i >= 0 ; i-- )
    //     std::cout << vec[i] << ' ';
    // std::cout << std::endl;
    


    // std::list<int> lst {10, 20, 30, 40, 50};

    // std::list<int>::iterator it = lst.begin();

    // while ( it != lst.end() )
    // {
    //     std::cout << *it << ' ';
    //     it++;
    // }
    // std::cout << std::endl;

    // it = lst.begin();



    // while ( it != lst.end() )
    // {
    //     if ( *it == 30 )
    //         lst.erase(it);
    //     it++;
    // }
    // std::cout << std::endl;



    // for (const auto& element : lst )
    //     std::cout << element << ' ';
    // std::cout << std::endl;
    
    // int index;
    // std::cout << "enter index element: ";
    // std::cin >> index;

    // it = lst.begin();
    // advance(it, --index);
    // lst.erase(it);

    // for (const auto& element : lst )
    //     std::cout << element << ' ';
    // std::cout << std::endl;


    // lst.push_back(22);


    // for (const auto& element : lst )
    //     std::cout << element << ' ';
    // std::cout << std::endl;


    // std::cout << "enter index element: ";
    // std::cin >> index;

    // int data;
    // std::cout << "enter element: ";
    // std::cin >> data;


    // it = lst.begin();
    // advance(it, --index);

    // lst.insert(it, data);


    // for (const auto& element : lst )
    //     std::cout << element << ' ';
    // std::cout << std::endl;


    // lst.sort();

    // for (const auto& element : lst )
    //     std::cout << element << ' ';
    // std::cout << std::endl;


    // lst.push_front(33);


    // for (const auto& element : lst )
    //     std::cout << element << ' ';
    // std::cout << std::endl;



//     return 0;
// }



// using namespace std;

bool is_anagram(std::string word, std::string anagram);
int count_unique_words(std::string sentence);


int main()
{


	// std::set <int> st; // пример
    
// Чтобы добавить новый элемент нужно использовать функцию insert():

	// for (int i = 5; i >= 0; i--){
	// 	st.insert(i); // 5 4 3 2 1 0
	// }

	// std::set<int>::iterator it = st.begin();

	// while (it != st.end()) 
	// {
	// 	std::cout << *it++ << ' ';
	// }
    // cout << endl;


// add new element value = 4;

	// std::cout << "New add element, value == 4" << std::endl;
	// st.insert(4);

	// copy(st.begin(), st.end(), std::ostream_iterator<int>(std::cout, " ")), std::cout << '\n';

// изменить сторону сортировки в обратную
// std::cout << "new set rever element !!!" << std::endl;


	// std::set <int, std::greater <int> > st2; 
	// for (int i = 0; i < 5; i++){
	// 	st2.insert(i); // 0 1 2 3 4
	// }

	// std::set <int> :: iterator it2 = st2.begin();

	// copy(st2.begin(), st2.end(), std::ostream_iterator<int>(std::cout, " ")), std::cout << '\n';


// multiset 

	// std::multiset <int> mst;
 
    // std::cout << "Добавление случайных значений: " << std::endl;
    // for (int i = 0; i < 10; i++) {
    //     int random = rand() % 10 + 1;
    //     mst.insert(random);
    //     std::cout << i + 1 << ") " << random << std::endl;
    // }
 
    // std::multiset <int> :: iterator it = mst.begin();
 
    // std::cout << "Отсортированный вариант: " << std::endl;
    // for (int i = 1; it != mst.end(); i++, it++) {
    //     std::cout << *it << " ";
    // }
    // std::cout << "\n\n";

 // delete elemet
    // std::cout << "Delete element: \n";
    // mst.erase(4);

	// copy(mst.begin(), mst.end(), std::ostream_iterator<int>(std::cout, " ")), std::cout << '\n';

// lower_bound
	// std::cout << "lower_bound: = ";
	// it = mst.lower_bound(2);
	// std::cout << *it << std::endl;


// count
	// std::cout << mst.count(10) << std::endl;
	// std::cout << mst.size() << std::endl;




// Вивести всі унікальні елементи з масиву arr:

   	// int arr[] = {1, 2, 3, 4, 1, 2, 5};
    // std::set<int> unique_elems;

    // for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
    //     unique_elems.insert(arr[i]);
    // }

    // for (int elem : unique_elems) {
    //     std::cout << elem << " ";
    // }
    // std::cout << std::endl;

// Перевірити, чи є дане слово word анаграмою іншого слова anagram:
// Анаграма - це слово або фраза, створена шляхом перестановки літер іншого слова або фрази. Наприклад, анаграмою слова "кінь" може бути слово "нік".

	// std::string word = "listen";
    // std::string anagram = "silent";

    // if (is_anagram(word, anagram)) {
    //     std::cout << word << " and " << anagram << " are anagrams" << std::endl;
    // } else {
    //     std::cout << word << " and " << anagram << " are not anagrams" << std::endl;
    // }

// Визначити кількість унікальних слів у рядку sentence:

	// std::string sentence = "The quick brown fox jumps over the lazy dog.";
    // int unique_word_count = count_unique_words(sentence);

    // std::cout << "There are " << unique_word_count << " unique words in the sentence." << std::endl;

    return 0;
}

bool is_anagram(std::string word, std::string anagram) {
    std::set<char> word_set(word.begin(), word.end());
    std::set<char> anagram_set(anagram.begin(), anagram.end());

    return word_set == anagram_set;
}

int count_unique_words(std::string sentence) {
    std::set<std::string> unique_words;
    std::stringstream ss(sentence);
    std::string word;

    while (ss >> word) {
        unique_words.insert(word);
    }

    return unique_words.size();
}
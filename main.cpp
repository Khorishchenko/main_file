#include <iostream>
#include <chrono>
#include <list>
#include <iterator>
#include <algorithm> // для функції std::max_element
#include <map>
#include <set>
#include <sstream>
#include <queue>
#include <vector>
using namespace std;
// chcp 65001
#include <iostream>
#include <set>
#include <sstream>
#include <string>
using namespace std;
  
using namespace std;
  
using namespace std;
 
vector<int> Arrays(const vector<int>& arr1, const vector<int>& arr2)
{
    vector<int> togetherArray;
    int i = 0, j = 0;
 
    while (i < arr1.size() && j < arr2.size())
    {
        if (arr1[i] <= arr2[j])
        {
            togetherArray.push_back(arr1[i]);
            i++;
        }
        else
        {
            togetherArray.push_back(arr2[j]);
            j++;
        }
    }
 
    while (i < arr1.size())
    {
        togetherArray.push_back(arr1[i]);
        i++;
    }
    while (j < arr2.size())
    {
        togetherArray.push_back(arr2[j]);
        j++;
    }
 
    return togetherArray;
}
 
int main()
{
    vector<int> arr1 = { 1, 3, 5, 7 };
    vector<int> arr2 = { 2, 4, 6, 8 };
 
    vector<int> result = Arrays(arr1, arr2);
 
    cout << "Together Array: ";
    for (int num : result) {
        cout << num << " ";
    }
}
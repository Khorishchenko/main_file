#include <iostream>
#include <vector>
#include <algorithm>
#include <time.h>
using namespace std;

class A
{
public:
    int value;

    A(int value) : value(value) {}

    bool operator<(A a)
    {
        return value < a.value;
    }

    bool operator>(A a)
    {
        return value > a.value;
    }

    bool operator==(A a)
    {
        return value == a.value;
    }

    friend ostream& operator<<(ostream& a, A& o);
};

ostream& operator<<(ostream& a, A& o)
{
    a << o.value;
    return a;
}

void print(vector<A>& a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << endl;
    }
    cout << endl;
}

int main()
{
    srand(time(0));

    vector<A> vect;
    vect.push_back(A(10));
    vect.push_back(A(15));
    vect.push_back(A(5));
    vect.push_back(A(45));
    vect.push_back(A(20));

    print(vect);

    A new_el(10);
    int pos = rand() % (vect.size() + 1);
    vect.insert(vect.begin() + pos, new_el);

    cout << pos << endl;
    print(vect);

    int min_num = 0, max_num = 0;
    for (int i = 1; i < vect.size(); i++)
    {
        if (vect[i] < vect[min_num])
        {
            min_num = i;
        }
        if (vect[i] > vect[max_num])
        {
            max_num = i;
        }
    }

    cout << "Min: " << vect[min_num] << " at position " << min_num << endl;
    cout << "Max: " << vect[max_num] << " at position " << max_num << endl;

    vector<A> new_vect;
    if (min_num < max_num)
    {
        new_vect.insert(new_vect.end(), vect.begin() + min_num + 1, vect.begin() + max_num);
        vect.erase(vect.begin() + min_num + 1, vect.begin() + max_num);
    }
    else
    {
        new_vect.insert(new_vect.end(), vect.begin() + max_num + 1, vect.begin() + min_num);
        vect.erase(vect.begin() + max_num + 1, vect.begin() + min_num);
    }

    cout << "Before: \n";
    print(vect);

    cout << "After: \n";
    print(new_vect);

    return 0;
}
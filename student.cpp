#include <iostream>
#include <chrono>
#include <list>
#include <iterator>
#include <algorithm> // для функції std::max_element
#include <map>
#include <set>
#include <sstream>
#include <queue>
#include <functional>
#include <iostream>
#include <vector>
#include <algorithm>

#include <array>
using namespace std;

// LABORATORNA ROBOTA


#include <iostream>
#include <string>

using std::cout;
using std::endl;

class Date {
public:
    void setDate(int day, int month, int year);
    void getDate(int& day, int& month, int& year) const;
    void incrementDate();
    void display() const;

private:
    int day, month, year;
};

void Date::setDate(int d, int m, int y) {
    day = d;
    month = m;
    year = y;
}

void Date::getDate(int &d, int &m, int &y) const {
    d = day;
    m = month;
    y = year;
}

void Date::incrementDate() {
    day++;
}

void Date::display() const {
    cout << "day=" << day << " month=" << month << " year=" << year << endl;
}

enum Command {
    Help,
    Get,
    Print,
    Next,
    Unknown
};

Command parseCommand(const std::string& input) {
    if (input == "-h") return Help;
    if (input == "-g") return Get;
    if (input == "-p") return Print;
    if (input == "-n") return Next;
    return Unknown;
}

int main(int argc, char* argv[]) {
    Date dateInstance;
    cout << endl << "argc =" << argc << endl;
    cout << "Arguments:" << endl;

    for (int i = 0; i < argc; i++)
        cout << "argument " << i + 1 << ": " << argv[i] << endl;

    dateInstance.setDate(22, 11, 2024); // Установка начальной даты

    if (argc > 1) {
        for (int i = 1; i < argc; i++) {
            switch (parseCommand(argv[i])) {
                case Help:
                    cout << "Options:" << endl;
                    cout << "-h display this help" << endl;
                    cout << "-g get Date" << endl;
                    cout << "-n next Date" << endl;
                    break;
                case Get: {
                    int d, m, y;
                    dateInstance.getDate(d, m, y);
                    cout << "g: day=" << d << " month=" << m << " year=" << y << endl;
                    break;
                }
                case Print:
                    dateInstance.display();
                    break;
                case Next: {
                    dateInstance.incrementDate();
                    dateInstance.display();
                    break;
                }
                case Unknown:
                    cout << "Not found this param: " << argv[i] << endl;
                    break;
            }
        }
    } else {
        cout << "User -h for more help" << endl;
    }

    return 0;
}
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

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype> // для tolower
#include <cctype> // для tolower

using namespace std;
void Divide(int a, int b) {
	try {
		if (b == 0) {
			throw "Divide by 0";
		}
		cout << a / b;
	}
	catch (const char *ex) {
		cout << "Inside - " << ex << endl;
		// throw;
	}
}

int main() {

	try {
		Divide(4, 0);
	}
	catch (const char *ex) {
		cout << "Inside main- " << ex << endl;
	}

	return 0;
}
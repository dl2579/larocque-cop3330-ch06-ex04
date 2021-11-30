#include "std_lib_facilities.h"
using namespace std;

class Name_value {
public:
	Name_value(string n, int val) : name(n), value(val) {}
	string name;
	int value;
};

int main() {

	vector<Name_value> nameValArray;
	string nameInput;
	int valueInput;

    cout << "Enter name and value: " << endl;

	while (cin >> nameInput >> valueInput) {	
        if(nameInput == "NoName" && valueInput == 0){
            break;
        }

        cout << "Enter name and value: " << endl;

		for (int i=0; i<nameValArray.size(); ++i){
			if (nameInput==nameValArray[i].name) {
                error(nameInput, " already entered! ");
            }
        }
		nameValArray.push_back(Name_value(nameInput,valueInput));
	}

    cout << "Name, value\n--------------\n";
	for (int i=0; i<nameValArray.size(); ++i)
			cout << nameValArray[i].name << ", " << nameValArray[i].value << ")\n";

}
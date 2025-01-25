// Random Numbers
#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	// this only make random number once 
	//int randomnum = rand() % 101; // random number between 0 to 100
	//cout << randomnum << endl;
	// fix the issus by srand
	//srand(time(0));
	//int randomnum = rand() % 101; // random number between 0 to 100
	//cout << randomnum << endl;
	/// io stream 
	int firstAge = 18;
	int secondAge = 28;
	string name = "hussein";
	string secondname = "Albert";
	
	if (firstAge < 20) {
		clog << ("perfect age for football\n");

	}
	else {
		cerr << "bad ages for football\n";
	}

}

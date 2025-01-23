//// STL standard template library
//
//
//#include <iostream>
//#include <vector>
//using namespace std;
//int main() {
//
//	vector<string> animals =
//	{ "chicken", "lion", "tiger", "roast", "cat", "dog" }
//	;
//	for (string Animals : animals) {
//		cout << "animal names : " << Animals << endl;
//	}
//	// access to first and last element of array of vector
//
//	vector<string> studentNames =
//	{ "John", "Albert", "Hussein", "Alberto", "Ronald", "Julia" };
//	cout << studentNames.back() << endl;
//	cout << studentNames.front() << endl;
//	cout << studentNames.at(2) << endl;
//	cout << studentNames.at(4) << endl;
//	//change the element by refrence the number of it 
//	studentNames[0] = "Sara";
//	cout << studentNames[0] << endl;
//	//it is safer to use the.at() function:
//	studentNames.at(1) = "Marshal";
//	cout << studentNames.at(1) << endl;
//	// lets add somthing to end of our  vector
//	vector<string>  pLangs = { "c++" , "javascript" , "c#" , "php" };
//	pLangs.push_back("python");
//	pLangs.push_back("ruby");
//	pLangs.push_back("golang");
//	pLangs.push_back("typescript");
//	pLangs.push_back("Reactjs");
//	//for (string languages : pLangs) {
//	//	cout << "languages names : " << languages << endl;
//	//}
//	// now lets add Reactjs library as language why? becuase we want to remove it from language list
//	pLangs.pop_back();
//	for (string languages : pLangs) {
//		cout << "languages names : " << languages << endl;
//	}
//	//now let get the size of new vector which now we have 
//	cout << pLangs.size() << endl;
//	//now lets check vector is empty or not 
//	vector<string> cars;
//	cout << "empty" << cars.empty() << endl;
//
//	cout << "not empty " << pLangs.empty() << endl;
//	//loop the vector 
//	vector<string> Cars = { "Volvo", "BMW", "Ford", "Mazda" };
//	for (int i = 0; i < Cars.size(); i++) {
//		cout << "cars loop : " << Cars[i] << endl;
//	}
//}
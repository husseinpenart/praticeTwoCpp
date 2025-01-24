//// STL standard template library
//#include <iostream>
//#include <set>
//#include <map>
//#include <vector>
//#include <algorithm>  
//using namespace std;
//int main() {
//	set<string> names = { "Hussein", "Albert", "Junior", "Sara" };
//
//	// Print set elements
//	for (string namesAlter : names) {
//		cout << namesAlter << "\n";
//	}
//
//	//set<int> ages = { 25,29,30,52,6 };
//	//Sort a Set in Descending Order
//	//set<int, greater<int>>ages = { 25,29,30,52,6 }; // beggest age
//	set<int, less<int>>ages = { 25,29,30,52,6 }; // lesser ages
//	for (int Ages : ages) {
//		cout << "biggest age : " << Ages << endl;
//	}
//	// unique names its ignore the same values if existed look at the exmpale
//	set<string> newNames = { "Albert" , "Marry" ,"Tanya", "Marry" , "John" };
//	for (string namesnew : newNames) {
//		cout << "biggest age : " << namesnew << endl;
//	}
//	//Add Elements insert more element
//	newNames.insert("Ashely");
//	for (string namesnew : newNames) {
//		cout << "biggest age : " << namesnew << endl;
//	}
//	// lets remove added bt erase function
//	newNames.erase("Ashely");
//	for (string namesnew : newNames) {
//		cout << "remove  Ashely name : " << namesnew << endl;
//	}
//	// Remove all elements 
//	newNames.clear();
//	// in this code we also  have empty and size
//	//map the elements 
//
//	map<string, int> TestResult = { {"hussein" , 20 } , {"sara" , 20 } , {"Albert" , 9 } };
//	cout << "test result : " << TestResult["hussein"] << endl;
//	cout << "test result : " << TestResult["Albert"] << endl;
//	//other function is same as set but with stl name of map
//	vector<string> hobbies = { "videoGames" , "coding" , "painting" };
//	//vector<string>::iterator hob; // also insted ot iterators we can use this after c++ 11
//	//put auto inside loop beacuse auto self detecting the type of varaibles 
//	for (auto hob = hobbies.begin(); hob != hobbies.end(); ++hob)
//	{
//		cout << "hobbies : " << " " << *hob;
//	}
//	// use algorithem for data structuring and sorting and find search elements in iterators 
//	vector<string> cars = { "Volvo", "BMW", "Ford", "Mazda" };
//
//	sort(cars.begin(), cars.end());
//
//	for (string car : cars) {
//		cout << car << "\n";
//	}
//	vector<int> numbers = { 1, 7, 3, 5, 9, 2 };
//
//	sort(numbers.begin(), numbers.end());
//
//	for (int num : numbers) {
//		cout << num << "\n";
//	}
//	//reverse the sort 
//	vector<int> years = { 1995, 2000, 2015, 2024,1950,2003 };
//
//	// Sort numbers numerically in reverse order
//	sort(years.rbegin(), years.rend());
//
//	for (int num : years) {
//		cout << num << "\n";
//	}
//
//}

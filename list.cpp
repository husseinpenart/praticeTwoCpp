//// STL standard template library
//#include <iostream>
//#include <list>
//
//using namespace std;
//int main() {
//	list<string> mobiles = { "what_the_f" ,"Redmi", "Iphone", "Samsung" , "Honor" ,"not_a_phone" };
//	for (string Brands : mobiles) {
//		cout << "mobiles: " << Brands << endl;
//	}
//	//remove from list 
//	mobiles.pop_back();
//	mobiles.pop_front();
//
//	for (string deletedPhone : mobiles) {
//		cout << "deleted mobiles: " << deletedPhone << endl;
//	}
//
//	cout << mobiles.front() << endl;
//	cout << mobiles.back() << endl;
//	// add more value to start and end of element
//	mobiles.front() = "Motorala";
//	mobiles.back() = "Nokia";
//
//	cout << mobiles.front() << endl;
//	cout << mobiles.back() << endl;
//	//push the element in front and back of list which can not be don in vector only in end of it 
//	mobiles.push_front("Sony ericsson");
//	mobiles.push_back("Huawei");
//	for (string NewBrands : mobiles) {
//		cout << "new Brands: " << NewBrands << endl;
//	}
//	cout << "length of mobiles or size : " << mobiles.size() << endl;
//	list <string> humanGenders;
//	cout << humanGenders.empty() << endl; //1 means empty
//	cout << mobiles.empty() << endl; //0 means have value
//
//
//}
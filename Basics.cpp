//#include <iostream>
//#include <vector> 
//using namespace std;
//
//
//
//struct StudentInfoStruc
//{
//	string name;
//	int age;
//	bool isPassed;
//	int nNumber;
//};
//StudentInfoStruc studentInfo;
//StudentInfoStruc studentInfo2;
//enum LessonSection {
//	math = 50,
//	history = 25,
//	EnglishLanguage = 30,
//
//};
//enum  LessonSection baseLevel = math;
//
//int main() {
//	string studentTeacher = "James Albert";
//	string& Master = studentTeacher;
//	string* MT = &Master;
//	studentInfo.name = "Hussein Asadi";
//	studentInfo.age = 25;
//	studentInfo.isPassed = true;
//	studentInfo.nNumber = 56001255478;
//	//second student 
//	studentInfo2.name = "Sara Anson";
//	studentInfo2.age = 23;
//	studentInfo2.isPassed = true;
//	studentInfo2.nNumber = 565414132984;
//
//	if (studentInfo.nNumber < 11) {
//		cout << "national number can't be less than 11";
//	}
//	else if (studentInfo.nNumber > 11) {
//		cout << "national number cant be more than 11" << endl;
//	};
//	cout << "base score of all students is:  " << baseLevel << endl;
//	//redrence define 
//	cout << "teacher is : " << Master << endl;
//	//memory memorization 
//	cout << &studentTeacher << endl;
//	cout << MT << endl;
//	//by sdding *(pointer )we can get the value istead of memory address 
//	cout << *MT << endl;
//
//	//cout << studentInfo.name << " " << studentInfo.age << " " << studentInfo.nNumber << " " << studentInfo.isPassed << endl;
//	//cout << studentInfo2.name << " " << studentInfo2.age << " " << studentInfo2.nNumber << " " << studentInfo2.isPassed << endl;
//
//
//	//for (int i = 0; i < 5; i++) {
//	//	cout << i << "\n";
//	//};
//	//for (int i = 0; i <= 10; i = i + 2) {
//	//	cout << i << "\n";
//	//};
//	//int number = 2;
//	//int i;
//
//	//for (i = 1; i <= 10; i++) {
//	//	cout << number << " x " << i << " = " << number * i << "\n";
//	//};
//	//for (int i = 0; i < 10; i++) {
//	//	if (i == 4) {
//	//		break;
//	//	}
//	//	else if (i == 3) {
//	//		continue;
//	//	};
//	//	cout << i << "\n";
//	//};
//	//string StudentList[] = {"hussein", "sara", "sam", "john", "aly"};
//	//for (int i = 0; i < 5; i++)
//	//{
//	//	cout << StudentList[i] << "\n";
//	//}
//	//// A vector with 3 elements
//	//vector<string> studentAges = { "15", "25", "35" , "20"};
//
//	//// Adding another element to the vector
//	//studentAges.push_back("12");
//	//for (string car : studentAges) {
//	//	cout << car << "\n";
//	//}
//	//int myNumbers[] = { 10, 20, 30, 40, 50 };
//	//cout << "size of the number: " << sizeof(myNumbers);
//
//
//
//}
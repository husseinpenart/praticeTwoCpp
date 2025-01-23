//#include <iostream>
//#include <fstream>
//#include <ctime> 
//#define _CRT_SECURE_NO_WARNINGS
//using namespace std;
//
//
////ofstream	Creates and writes to files
////ifstream	Reads from files
////fstream	A combination of ofstream and ifstream: creates, reads, and writes to files
//int main() {
//	ofstream createFile("filesystem.txt");
//	createFile << "this is an text in filesystem approach let show me here in filesystem.txt";
//	createFile.open("filesystem.txt");
//
//	//Exceptions
//
//	try {
//		int age = 15;
//		if (age >= 18) {
//			cout << "Access granted - you are old enough.";
//		}
//		else {
//			throw 505;
//		}
//	}
//	catch (int myNum) {
//		cout << "Access denied - You must be at least 18 years old.\n";
//		cout << "Error number: " << myNum << endl;
//	}
//
//	//time_t timeStamp;
//	//time(&timeStamp);
//	//char timeString[26];
//	//ctime_s(timeString, sizeof(timeString), &timeStamp);
//	//cout << timeString;
//	time_t timeStamp;
//	time(&timeStamp);
//	struct tm timeInfo;
//	localtime_s(&timeInfo, &timeStamp);
//	char timeString[26];
//	strftime(timeString, sizeof(timeString), "%c", &timeInfo);
//	cout << timeString;
//}
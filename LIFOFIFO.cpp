//// STL standard template library
//#include <iostream>
//#include <stack>
//#include <queue>
//#include <deque>
//using namespace std;
//int main() {
//	stack<string> pLangs;
//	pLangs.push("c++");
//	pLangs.push("javascript");
//	pLangs.push("java");
//	pLangs.push("python");
//	cout << pLangs.top() << endl;
//	pLangs.top() = "typescript";
//	cout << pLangs.top() << endl;
//	pLangs.pop();
//	cout << pLangs.top() << endl;
//	cout << pLangs.size() << endl;
//	stack<string> cars;
//	cout << cars.empty() << endl;
//	cout << pLangs.empty() << endl;
//	//queue fifo first in first out 
//	queue<string>lessons;
//	lessons.push("history");
//	lessons.push("math");
//	lessons.push("english");
//	lessons.push("art");
//	cout << lessons.back() << endl;
//	cout << lessons.front() << endl;
//	// Change the value of the front element
//	lessons.front() = "physic";
//
//	// Change the value of the back element
//	lessons.back() = "chemist";
//
//
//	cout << lessons.front() << endl;
//	cout << lessons.back() << endl;
//	lessons.pop();
//
//	cout << lessons.front();
//	// also we have size empty too in queue
//	// THIS IS DEQUE ITS ACT LIKE LIST AND MORE stands for double-ended queue IT CAN ADD FRON FIFO LIFO ANYTHING IN VECTOR AND LIST WE HAD AS SMAE IS HERE TOO ITS MORE FLEXIABLE
//	deque<string>Cars = { "BMW","FERRARI", "BUGATTI", "porsche " };
//	for (string car : Cars) {
//		cout << car << "\n";
//	}
//
//}
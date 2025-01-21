//#include <iostream>
//using namespace std;
//class StudentAction {
//public:
//	int scores;
//	string names;
//	bool isPassed;
//};
//class funcClass {
//public:
//	void ClassFunction() {
//		cout << "hello this is function inside the class\n";
//	};
//};
//class OutLineFunc {
//public:
//	void outerFunc();
//};
//void OutLineFunc::outerFunc() {
//	cout << "hello this is function out side the class\n";
//
//
//};
//class TeacherSuccess {
//public:
//	string TeacherAction(string motiveation);
//};
//string TeacherSuccess::TeacherAction(string motiveation) {
//	return motiveation;
//}
//
//// constructors is somthing like functions for calssess this is an exmaple of it i  want to calculate the salary for teachers
//class TeacherSalary {
//public:
//	int PurePayment;
//	int taxes;
//	int insurance;
//	int extraAcheivement;
//	TeacherSalary(
//		int pp,
//		int tx,
//		int ins,
//		int xa
//	) {
//		PurePayment = pp;
//		taxes = tx;
//		insurance = ins;
//		extraAcheivement = xa;
//	}
//};
//// constructors is somthing like functions for calssess this is an exmaple of it i  want to calculate the salary for teachers
//
///// now lets calculate the salary by out side constructors this is the exmpale of it 
//class TeacherSalaryOut {
//public:
//	int PurePayment;
//	int taxes;
//	int insurance;
//	int extraAcheivement;
//	TeacherSalaryOut(
//		int pp,
//		int tx,
//		int ins,
//		int xa
//	);
//};
//TeacherSalaryOut::TeacherSalaryOut(int pp,
//	int tx,
//	int ins,
//	int xa) {
//	PurePayment = pp;
//	taxes = tx;
//	insurance = ins;
//	extraAcheivement = xa;
//}
///// now lets calculate the salary by out side constructors this is the exmpale of it 
////<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< Access Specifiers >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//class AccessSpecifiers
//{
//public:
//	int num1;
//
//private:
//	int num2;
//};
////now lets access to private  for som circumestances 
//class SetergetterClass {
//private:
//	int employeeSalary;
//	int employeeInsurance;
//public:
//	//setter for set the value
//	void SetTheSalray(int ES, int EI) {
//		employeeSalary = ES;
//		employeeInsurance = EI;
//	}
//	//getter for get the value
//	int getTheSalary() {
//		return  employeeSalary << employeeInsurance;
//	}
//};
////now lets access to private  for som circumestances 
////<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< Access Specifiers >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
////Encapsulation
//class Encapsulation {
//private:
//	int studentmilkAmount;
//public:
//	void setmilk(int milk) {
//		studentmilkAmount = milk;
//	};
//	int getmilk() {
//		return studentmilkAmount;
//	}
//};
////Encapsulation
//
////_______________________________________________  Inheritance  ___________________________________________________
////parent Base 
//class VehicleTypes {
//public:
//	string automobile = "ferrari";
//	void automoniletypes() {
//		cout << "yessssssssssssssssssssssssssssssss\n";
//	}
//};
////child  Derived 
//class AllVehicleTypes : public VehicleTypes {
//public:
//	string model = "Mustang";
//};
////Multilevel Inheritance
//class ElectricVehicls : public AllVehicleTypes {
//public:	string electricmodel = "Tesla";
//};
//
//
////Multiple Inheritance
//
//class Level1 {
//public:	string levelmode1 = "easy";
//};
//class Level2 {
//public:	string levelmode2 = "normal";
//};
//class Level3 {
//public:	string levelmode3 = "hard";
//};
//
//
//
//class Multiple : public Level1, public Level2, public Level3 {
//
//public:
//	string levelmode4 = "Inferno";
//
//};
//
////_______________________________________________  Inheritance  ___________________________________________________
////_______________________________________________  Polymorphism  ___________________________________________________
//class Animals {
//public:
//	void animalLives() {
//		cout << "the animals lives in \n";
//	}
//};
//class AnimalSpace : public Animals {
//public:
//	void Fish() {
//		cout << "fish lives underneath of water\n";
//	}
//
//};
//
//class AnimalSpace2 : public AnimalSpace {
//public:
//	void Penguin() {
//		cout << "penguin lives in Southern Hemisphere:\n";
//	}
//
//};
////_______________________________________________  Polymorphism  ___________________________________________________
//
//int main() {
//
//	StudentAction studentStatus;
//	studentStatus.isPassed = false; // in c++ its 0 false 1 is true
//	studentStatus.names = "Albert Aniston";
//	studentStatus.scores = 30;
//
//	StudentAction studentStatus2;
//	studentStatus2.isPassed = true; // in c++ its 0 false 1 is true
//	studentStatus2.names = "John Aniston";
//	studentStatus2.scores = 90;
//	cout << studentStatus.isPassed << " " << studentStatus.names << " " << studentStatus.scores << endl;
//	cout << studentStatus2.isPassed << " " << studentStatus2.names << " " << studentStatus2.scores << endl;
//	//access to function inside the class 
//	funcClass insideFunc;
//	insideFunc.ClassFunction();
//	OutLineFunc outfunction;
//	outfunction.outerFunc();
//	TeacherSuccess callTeacherSuccess;
//	cout << callTeacherSuccess.TeacherAction("she passed the teaching successfully") << endl;
//	// now lets set the values for salary
//	TeacherSalary TeacherMoney(5000, 200, 50, 100);
//	TeacherSalary TeacherMoney2(6000, 250, 40, 1000);
//	if (TeacherMoney2.extraAcheivement > 500) {
//		cout << "This Acheivement is for High Ranked Teachers\n";
//
//	}
//	else if (TeacherMoney2.extraAcheivement < 1000) {
//		cout << "This Acheivement is for less Ranked Teachers\n";
//	}
//	TeacherSalaryOut TeacherAchieveOut(5000, 200, 50, 100);
//	TeacherSalaryOut TeacherAchieveOut2(6000, 250, 40, 1000);
//	cout << "TeacherAchieveOut : " << TeacherAchieveOut.extraAcheivement << endl;
//	cout << "TeacherAchieveOut2 : " << TeacherAchieveOut.insurance << endl;
//	//AccessSpecifiers accessRange;
//	/// in this line private doesnt shows beacuse its private 
//	//cout << accessRange.num1 << endl;
//		/// now lets access the private 
//	SetergetterClass getThePrivate;
//	getThePrivate.SetTheSalray(5000, 100);
//	cout << getThePrivate.getTheSalary() << endl;
//	//get encapsulation 
//	Encapsulation milkEncapsulation;
//	milkEncapsulation.setmilk(20);
//	cout << milkEncapsulation.getmilk() << endl;
//	//get encapsulation 
//	//Inheritance
//	ElectricVehicls carTypes;
//	carTypes.automoniletypes();
//	cout << carTypes.automobile + " " + carTypes.model + " " + carTypes.electricmodel << endl;
//	Multiple multiplelevels;
//	cout << multiplelevels.levelmode1 + " " + multiplelevels.levelmode2 + " " + multiplelevels.levelmode3 + " " + multiplelevels.levelmode4 << endl;
//
//
//	//Inheritance
//	//Polymorphism
//	Animals animalsPlace;
//	AnimalSpace animaltwo;
//	AnimalSpace2 animalthree;
//	animalsPlace.animalLives();
//	animaltwo.Fish();
//	animalthree.Penguin();
//	//Polymorphism
//	return 0;
//
//}
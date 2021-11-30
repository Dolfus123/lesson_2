#include <iostream>
#include<Windows.h>
#include<string>


using namespace std;

class Human
{
private:
	string name;
public:
	Human(string name) {
		this->name = name;
	}

	Human() {
		this->name = "";
	}

	void setName(string name) {
		this->name = name;
	}

	string getName() {

		return this->name;
	}
	
	void info() {

		cout << "Name: " << this->name << endl;
	}

	~Human() {

	}
};

class Student : virtual public Human {
private:
	double avgPoint;
public:
	Student(string name, double avgPoint) : Human(name) {
		this->avgPoint = avgPoint;
	}

	Student( double avgPoint) {
		this->avgPoint = avgPoint;
	}

	Student() :Human() {
		this->avgPoint = 0;
	}

	void setAvgPoint(double avgPoint) {
		this->avgPoint = avgPoint;
	}

	double getavgPoint() {

		return this->avgPoint;
	}

	void info() {

		cout << "Name: " << this->getName() <<", Point: "<<this->avgPoint <<endl;
	}
	~Student() {

	}
};

class Worker : virtual public Human {
private:
	double salary;
public:
	Worker(string name, double salary) : Human(name) {
		this->salary = salary;
	}

	Worker(double salary)  {
		this->salary = salary;
	}

	Worker() :Human() {
		this->salary = 0;
	}

	void setSalary(double salary) {
		this->salary = salary;
	}

	double getSalary() {

		return this->salary;
	}

	void info() {

		cout << "Name: " << this->getName() << ", Selary: " << this->salary << endl;
	}
	~Worker() {

	}
};

class Superman : public Student, public Worker {
private:
	int sleepHours;
public:
	Superman(string name, double avgPoint, double salary, int sleepHours) :Human(name), Student(avgPoint), Worker(salary) {
		this->sleepHours = sleepHours;
	}


	Superman() {
		this->sleepHours = 0;
	}

	void setSleepHours(int sleepHours) {
		this->sleepHours = sleepHours;
	}

	int getSleepHours() {

		return this->sleepHours;
	}

	void info() {

		cout << "Name: " << this->getName() << ", Selary: " << this->getSalary()<< ", Point: "<<this->getavgPoint()<<", sleepHours: "<< this->sleepHours << endl;
	}
	~Superman() {

	}
};



int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Superman* s1 = new Superman("Игорь", 500, 2, 5);
	s1->info();
	
	delete s1;
	s1 = NULL;

	


	system("pause");
	return 0;
}
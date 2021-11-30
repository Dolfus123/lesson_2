#include <iostream>
#include<Windows.h>

using namespace std;

class Human {
private:
	string name;
	int age;
public:
	Human(string name, int age) {
		this->name = name;
		this->age = age;
		cout << "работает конструктор с параметрами Human" << endl;
	}

	Human() {
		this->name = "";
		this->age = 0;
		cout << "работает конструктор без параметров Human" << endl;
	}

	void setName(string name) {
		this->name = name;
		this->name.shrink_to_fit();
	}

	string getName() {
		return this->name;
	}

	void setAge(int age) {
		this->age = age;
	}

	int getAge() {
		return this->age;
	}

	void infoHuman() {
		cout << "Имя: " << this->name << ", возраст: " << this->age << endl;
	}

	~Human() {
		cout << "работает диструктор Human" << endl;
	}
};
class Student : public Human {
private:
	double salary;
public:
	Student(string name, int age, double salary):Human (name,age) {
		this->salary = salary;
		cout << "работает конструктор с параметрами Worcker(3)" << endl;
	}
	Student(string name, int age) : Human(name, age) {
		this->salary = 0;
		cout << "работает конструктор с параметрами Worcker(2)" << endl;
	}
	Student() :Human() {
		this->salary = 0;
		cout << "работает конструктор без параметрами Worcker" << endl;
	}
	void setSalary(double salary) {
		this->salary = salary;
	}

	double getSalary() {
		return this->salary;
	}
	void infoWorker() {
		cout << "Имя: " << this->getName() << ", возраст: " << this->getAge() << ", зарплата: " << this->salary << endl;
	}

	~Student() {
		cout << "работает диструктор Worker" << endl;
	}
};





/*int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Human* h1 = new Human("Петр", 40);
	h1->infoHuman();
	delete h1; h1 = NULL;

	cout << "-----------------------------" << endl;

	Worker* w1 = new Worker("Игорь", 34, 500);
	w1->infoWorker();
	delete w1; w1 = NULL;


	system("pause");
	return 0;
}*/

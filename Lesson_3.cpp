#include <iostream>
#include<Windows.h>
//перегрузка и переопределение метода: Overloading, overriding
		//перегрузка методов это возможность здания в одной области видимости нескольких методов 
		//с одинаковым именем но различным списком параметров
		//рекомендуется применять при наличии задачи которая может быть реализована различными способами 
		//в зависимости от списка параметров
	//переопределение методов возможно при наичии наследования
	//переопределение методов это мозможность создания в производном классе метода с таким же типом, 
	//именем и списком параметров как и в базовом классе
	//для создания новой версии метода и перекрытия версии метода базового класса

using namespace std;

class Human
{
public:
	Human(string mark, int maxSpeed) {
		this->name = mark;
		this->maxSpeed = maxSpeed;

	}
	
	Human() {
		this->name = "";
		this->maxSpeed = 0;

	}

private:
	string name;
	int maxSpeed;

	void setMark(string mark) {
		this->name = mark;
	}
public:
	void setMaxSpeed(int maxSpeed) {
		this->maxSpeed = maxSpeed;

	}

	string getMark() {

		return this->name;
	}

	int getMaxSpeed() {

		return this->maxSpeed;
	}

	int cost() {
		return (this->maxSpeed * 100);
	}

	void upgrade() {
		if ((this->maxSpeed +10) <= 220)
		{this->maxSpeed += 10;
		cout << "Обновление успешно совершено" << endl;
		}
		else
		{
		cout << "Невозможно произвести обновление " << endl;
		}
	}

	void upgrade(int addSpeed) {
		if (addSpeed>=1 && addSpeed <= 15 && (this->maxSpeed + addSpeed)<=220)
		{
			this->maxSpeed += addSpeed;
			cout << "Обновление успешно совершено" << endl;

		}else
		{
			cout << "Невозможно произвести обновление " << endl;
		}
	}

	void info() {

		cout << "Марка:" << this->name << ", макс. скорость: " << this->maxSpeed << ", Стоимость: " << this->cost() << endl;
	}

	~Human() {

	}
};

class Student : public Human {
public:
	Student(string mark, int maxSpeed) : Human(mark, maxSpeed) {

	}

	Student() :Human() {

	}

	int cost() {
		return (this->getMaxSpeed() * 250);
	}

	void upgrade() {
		if ((this->getMaxSpeed()+ 5)<=300)
		{
			this->setMaxSpeed(this->getMaxSpeed() + 5);
			cout << "Обновление успешно совершено" << endl;
		}
		else
		{
			cout << "Невозможно произвести обновление " << endl;
		}
	}

	void upgrade(int addSpeed) {
		if (addSpeed>=1 && addSpeed<=10 && (this->getMaxSpeed()+ addSpeed)<=300)
		{
			this->setMaxSpeed(this->getMaxSpeed() + addSpeed);
			cout << "Обновление успешно совершено" << endl;
		}
		else
		{
			cout << "Невозможно произвести обновление " << endl;
		}
	}

	void info() {

		cout << "Марка:" << this->getMark() << ", макс. скорость: " << this->getMaxSpeed() << ", Стоимость: " << this->cost() << endl;
	}
};




/*int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Human* car1 = new Human("Opel", 200);
	car1->info();
	car1->upgrade();
	car1->info();
	car1->upgrade(7);
	car1->info();
	car1->upgrade(5);
	car1->info();
	delete car1;
	car1 = NULL;

	cout << "____________________________________________________" << endl;

	Student* sc1 = new Student("Bugatti", 290);
	sc1->info();
	
	sc1->upgrade();
	sc1->info();
	sc1->upgrade(15);
	sc1->info();
	sc1->upgrade(3);
	sc1->info();
	delete sc1;
	sc1 = NULL;


	system("pause");
	return 0;
}*/
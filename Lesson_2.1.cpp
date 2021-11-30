#include <iostream>
#include<Windows.h>

using namespace std;

class Item {
private:
	string name;
	
public:
	Item(string name) {
		this->name = name;
		cout << "работает конструктор с параметрами item" << endl;
	}

	Item() {
		this->name = "";
		cout << "работает конструктор без параметров item" << endl;
	}

	void setName(string name) {
		this->name = name;
		this->name.shrink_to_fit();
	}

	string getName() {
		return this->name;
	}

	void infoItem() {
		cout << "Название: " << this->getName()  << endl;
	}

	
	~Item() {
		cout << "работает диструктор item" << endl;
	}
};
class Milk : public Item {
private:
	double price;
public:
	Milk(string name, double price) :Item(name) {
		this->price = price;
		cout << "работает конструктор с параметрами milk" << endl;
	}
	
	Milk() :Item() {
		this->price = 0;
		cout << "работает конструктор без параметрами milk" << endl;
	}
	void setPrice(double price) {
		this->price = price;
	}

	double getPrice() {
		return this->price;
	}
	void infoMilk() {
		cout << "Название: " << this->getName() << ", цена: " << this->price << endl;
	}

	~Milk() {
		cout << "работает диструктор milk" << endl;
	}
};

class Yogurt : public Item {
private:
	int fatness;
public:
	Yogurt(string name, int fatness) :Item(name) {
		this->fatness = fatness;
		cout << "работает конструктор с параметрами Yogurt" << endl;
	}

	Yogurt() :Item() {
		this->fatness = 0;
		cout << "работает конструктор без параметрами Yogurt" << endl;
	}
	void setFatness(int fatness) {
		this->fatness = fatness;
	}

	double getFatness() {
		return this->fatness;
	}
	void infoYogurt() {
		cout << "Название: " << this->getName() << ", Жирность: " << this->fatness <<"%"<< endl;
	}

	~Yogurt() {
		cout << "работает диструктор Yogurt" << endl;
	}
};

class MilkArm : public Milk {
private:
	string nameArm;
public:
	MilkArm(string name, double prise, string nameArm) :Milk(name, prise) {
		this->nameArm = nameArm;
		cout << "работает конструктор с параметрами MilkArm" << endl;
	}

	MilkArm() :Milk() {
		this->nameArm = "Без арома";
		cout << "работает конструктор без параметрами MilkArm" << endl;
	}
	void setNameArm(double salary) {
		this->nameArm = nameArm;
		this->nameArm.shrink_to_fit();
	}

	string getNameArm() {
		return this->nameArm;
	}
	void infoMilkArm() {
		cout << "Название: " << this->getName() << ", цена: " << this->getPrice() << ", Арома: " << this->nameArm << endl;
	}

	~MilkArm() {
		cout << "работает диструктор MilkArm" << endl;
	}
};

/*int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Item* i1 = new Item("Молоко");
	i1->infoItem();
	delete i1; i1 = NULL;

	cout << "-----------------------------" << endl;

	Milk* m1 = new Milk("молоко", 2.5);
	m1->infoMilk();
	delete m1; m1 = NULL;

	cout << "-----------------------------" << endl;

	MilkArm* ma1 = new MilkArm("молоко", 2.5, "клубника");
	ma1->infoMilkArm();
	delete ma1; ma1 = NULL;

	cout << "-----------------------------" << endl;

	Yogurt* y1 = new Yogurt("молоко", 2);
	y1->infoYogurt();
	delete y1; y1 = NULL;

	
	system("pause");
	return 0;
}*/

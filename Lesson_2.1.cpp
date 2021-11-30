#include <iostream>
#include<Windows.h>

using namespace std;

class Item {
private:
	string name;
	
public:
	Item(string name) {
		this->name = name;
		cout << "�������� ����������� � ����������� item" << endl;
	}

	Item() {
		this->name = "";
		cout << "�������� ����������� ��� ���������� item" << endl;
	}

	void setName(string name) {
		this->name = name;
		this->name.shrink_to_fit();
	}

	string getName() {
		return this->name;
	}

	void infoItem() {
		cout << "��������: " << this->getName()  << endl;
	}

	
	~Item() {
		cout << "�������� ���������� item" << endl;
	}
};
class Milk : public Item {
private:
	double price;
public:
	Milk(string name, double price) :Item(name) {
		this->price = price;
		cout << "�������� ����������� � ����������� milk" << endl;
	}
	
	Milk() :Item() {
		this->price = 0;
		cout << "�������� ����������� ��� ����������� milk" << endl;
	}
	void setPrice(double price) {
		this->price = price;
	}

	double getPrice() {
		return this->price;
	}
	void infoMilk() {
		cout << "��������: " << this->getName() << ", ����: " << this->price << endl;
	}

	~Milk() {
		cout << "�������� ���������� milk" << endl;
	}
};

class Yogurt : public Item {
private:
	int fatness;
public:
	Yogurt(string name, int fatness) :Item(name) {
		this->fatness = fatness;
		cout << "�������� ����������� � ����������� Yogurt" << endl;
	}

	Yogurt() :Item() {
		this->fatness = 0;
		cout << "�������� ����������� ��� ����������� Yogurt" << endl;
	}
	void setFatness(int fatness) {
		this->fatness = fatness;
	}

	double getFatness() {
		return this->fatness;
	}
	void infoYogurt() {
		cout << "��������: " << this->getName() << ", ��������: " << this->fatness <<"%"<< endl;
	}

	~Yogurt() {
		cout << "�������� ���������� Yogurt" << endl;
	}
};

class MilkArm : public Milk {
private:
	string nameArm;
public:
	MilkArm(string name, double prise, string nameArm) :Milk(name, prise) {
		this->nameArm = nameArm;
		cout << "�������� ����������� � ����������� MilkArm" << endl;
	}

	MilkArm() :Milk() {
		this->nameArm = "��� �����";
		cout << "�������� ����������� ��� ����������� MilkArm" << endl;
	}
	void setNameArm(double salary) {
		this->nameArm = nameArm;
		this->nameArm.shrink_to_fit();
	}

	string getNameArm() {
		return this->nameArm;
	}
	void infoMilkArm() {
		cout << "��������: " << this->getName() << ", ����: " << this->getPrice() << ", �����: " << this->nameArm << endl;
	}

	~MilkArm() {
		cout << "�������� ���������� MilkArm" << endl;
	}
};

/*int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Item* i1 = new Item("������");
	i1->infoItem();
	delete i1; i1 = NULL;

	cout << "-----------------------------" << endl;

	Milk* m1 = new Milk("������", 2.5);
	m1->infoMilk();
	delete m1; m1 = NULL;

	cout << "-----------------------------" << endl;

	MilkArm* ma1 = new MilkArm("������", 2.5, "��������");
	ma1->infoMilkArm();
	delete ma1; ma1 = NULL;

	cout << "-----------------------------" << endl;

	Yogurt* y1 = new Yogurt("������", 2);
	y1->infoYogurt();
	delete y1; y1 = NULL;

	
	system("pause");
	return 0;
}*/

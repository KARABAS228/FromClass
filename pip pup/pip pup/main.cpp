#include<iostream>
#include<math.h>
#include<cstring>
#include<string.h>
#include<windows.h>
#include<vector>
#include<random>
#include<cmath>


/*class Integer {
public:
//доступно всем пользователям класа



	Integer() :Integer(0) {}

	Integer(int val):value_(val)
	{}//конструктор по умолчанию
	
	Integer(double val) 
	{
		//алгоритм кот сохраняет число по правилам математики
		//сохраненное число
	}

	
	void value(int newValue) {
		value_ = newValue;
	}

	int value() {
		return value_;
	}
	bool isNegative() {
		return !isPositive();
	}

	bool isPositive() {
		return value_ > 0;
	}

	bool isEasy() {
		int a = 0;
		for (int i = 2; i < value_/2; i++)
		{
			if (value_/i==0)
			{
				a++;
			}
		}
		if (a==0||value_==1||value_==2)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool isEven() {
		if (value_ %2 ==0||value_==0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	Integer Summ(Integer obj) {
		Integer result;
		result.value_ = this->value_ + obj.value_;
		return result;
	}

protected:
//
	

private:
//
	int value_;
};
class Example
{
public:
	Example(int val, int* p, int& ref):
		value(val),
		pRefValue(p),
		RefValue(ref)
	{}

private:
	int value;
	int* pRefValue;
	int& RefValue;
};
class Str
{
public:
	
	/*char InputString() {
		int a = 0;
		std::cout << "введите строку: " << std::endl;
		std::cin.getline(sstring, 22228);
		for (int i = 0; i < 22228; i++)
		{
			if (sstring[i]!='\0')
			{
				a++;
			}
			else
			{
				break;
			}
		}
		char* arr = new char[a];
		for (int j = 0; j < a; j++)
		{
			arr[j] = sstring[j];
		}
		delete sstring;
		return arr[a];

	}

	Str() {
		size_ = 0;
		data_ = nullptr;
	}

	Str(const char* str) {
		size_ = ::strlen(str) + 1;
		data_ = new char[size_] {

		};
		::memcpy(data_, str, size_);
	}

	Str(int size):size_(size) {
		data_ = new char[size] {

		};
	}

	~Str() {
		if (data_) {delete[] data_;}
		if (sstring) {delete[] sstring;}
	}


	void concatination(const Str &other) {
		size_ = ::strlen(other.dataOther) + 1;
	}


private:
	char* sstring = new char[6666];
	int size = 9999999;
	int size_;
	char* data_;
	char* str2 = new char[999999];
	char* dataOther;
};



class A
{
public:
	//default cunstructor
	//copy constructor
	//copy assignment
	//default destructor

	A():val1_(5), val2_(6){
		std::cout << this;
		std::cout << "def construct"<<std::endl;
		
	}

	explicit A(int a, int b) :val2_(b), val1_(a) {
		std::cout << "a user conctr" << std::endl;
	}

	~A() {
		std::cout << this<<"a destruction"<<std::endl;
	}

private:
	int val1_;
	const int val2_;
};

class stExample {
public:

	static float Pi() {
		return pi;
	}


//private:
	static const float pi;

};
const float stExample::pi{3.14f};*/


/*class Base
{
public:
	Base() 
	{ 
		std::cout << this << "Base constr" <<std::endl;
	}

	virtual void Print()const
	{
		std::cout << "sisecHki pisechki"<<std::endl;
	};

	virtual ~Base()
	{ 
		std::cout << this << "Base destr" <<std::endl; 
	}

private:

};
class Derived :public Base
{
public:
	Derived()
	{
		std::cout << this << "Derived constr"<<std::endl;
	}

	void Print()const override
	{
		std::cout << "говняха" << std::endl;
	}

	~Derived()
	{
		std::cout << this << "Derived destr" <<std::endl;
	}
	
};



class Animal
{
public:
	Animal() 
	{
		std::cout << this << " Animal constr" << std::endl;
	};

	virtual void Voice()const {
		std::cout << "none";
	}
	void ChangeName(std::string a) {
		name = a;
	}
	void PrintName() {
		std::cout << name<<std::endl;
	}

	~Animal() 
	{
		std::cout << this << " Animal destr" << std::endl;
	};

private:
	std::string name;
	
};
class Fox:public Animal
{
public:
	Fox() {
		std::cout << this << " Fox constr" << std::endl;
	};

	void Voice()const override {
		std::cout << "БРРРЮАААА(что то среднее между мяуканьем, мурлыканьем и кряканьем)"<<std::endl;
	}


	~Fox() {
		std::cout << this << " Fox destr" << std::endl;
	};

private:

};
class Cat :public Animal
{
public:
	Cat() {
		std::cout << this << " Cat constr" << std::endl;
	};

	void Voice()const override {
		std::cout << "МЯЯЯЯЯУ" << std::endl;
	}


	~Cat() {
		std::cout << this << " Cat destr" << std::endl;
	};

private:

};






class Beast {
public:

	virtual void Feed(std::string a) = 0;
	virtual void Move() = 0;
	virtual void Sound() = 0;


	std::string GetName() { 
		return name; 
	}
	void SetName(std::string a) {
		name = a;
	}

	int GetAge() {
		return age;
	}
	void SetAge(int a) {
		age = a;
	}


	virtual ~Beast(){}
private:
	std::string name="none";
	int age=0;
};

class Bobr :public Beast {
public:
	Bobr() {}

	void Feed(std::string food) override {
		std::cout << "ам ням ням. "<<food<<" очень даже ничего!!" << std::endl;
	}
	void Move()override {
		std::cout << "медленно, медленными шажками, может немного бегать и прыгать, но делает это редко любит плавать" << std::endl;
	}
	void Sound()override {
		std::cout << "БУУУУУУУУУАААААА, звук похожий на стоны и крик" << std::endl;
	}

	~Bobr(){}
};
class OpiumBird :public Beast {
public:
	OpiumBird() {}

	void Feed(std::string food) override {
		std::cout << "пырыффрф. " << food << " бибибуррра!!" << std::endl;
	}
	void Move()override {
		std::cout << "очень маленькие, лилипутские шажки и подпрыгивания, трррр" << std::endl;
	}
	void Sound()override {
		std::cout << "тррруутттттб звук напоминающий тресканье дерева" << std::endl;
	}

	~OpiumBird() {}
};
class ClownFish :public Beast {
public:
	ClownFish() {}

	void Feed(std::string food) override {
		std::cout << "пупупу. " << food << " пуппупуп" << std::endl;
	}
	void Move()override {
		std::cout << "гребет всеми плавниками, плавает" << std::endl;
	}
	void Sound()override {
		std::cout << "пуппупуп" << std::endl;
	}

	~ClownFish() {}
};*/


//-----------------
class A {
public:
	A() = default;
	A(int newId, std::string newName):
	id(newId),
	name(newName){}
	int id;
	std::string name;
	virtual ~A(){}
};
class B:virtual public A{
public:
	B() = default;
	std::string model;
};
class C:virtual public A{
public:
	C() = default;
	C(int newId, std::string newName, int psc):
	A(newId, newName),
	passcode(psc){}

	int passcode;
};
class E:public B, public C{
	E() = default;
	E(int id, int passcode, std::string name, std::string model):
	A(id, name),C(),B(){
		this->model = model;
		this->passcode = passcode;
	}
};
//-----------------



//=====================================
class Transport {
public:
	Transport() {};


	void SetName(std::string NewName) {
		name = NewName;
	}
	std::string GetName() {
		return name;
	}

	virtual ~Transport() {};
private:
	std::string name;
};

class HumanPower :public Transport {
public:

	HumanPower() = default;
	void HumanPowerSound()const {
		std::cout << "бззззззззззз" << std::endl;
	}
	virtual void HumanPowerMove()const {
		std::cout << "топ топ топ, очень тяжело" << std::endl;
	}
};
class Electro :public Transport {
public:
	Electro() = default;
	void ElectroSound()const {
		std::cout << "бззззззззззз" << std::endl;
	}
	virtual void ElectroMove() {

	}

private:
};
class GasEngine {
public:
	GasEngine() = default;
	void GasEngineSound()const {
		std::cout << "бжжжжжжжжжжжжжж" << std::endl;
	}
	virtual void GasEngineMove()const{}
};


class ElectroBike :virtual public Transport, public Electro, public HumanPower {
public:
	void ElectroMove() override {
		while (MoveChoice!=1 || MoveChoice!=2)
		{
			std::cout << "ехать на электродвигателе: 1\nкрутить педали: 2" << std::endl;
			//std::cin >> MoveChoice;
			if (MoveChoice==1)
			{
				ElectroSound();
			}
			else if (MoveChoice == 2)
			{
				HumanPowerSound();
			}
			else
			{
				std::cerr << "ошибка! выберите снова!" << std::endl;
			}
		}
	}
private:
	int MoveChoice=1;
};
class ElectroCar :virtual public Transport, public Electro {
public:
	void ElectroMove() override {
		std::cout << "машинка экологично на электричестве "<<std::endl;
		ElectroSound();
	}
private:
};
class ElectroScooter :virtual public Transport, public Electro, public HumanPower {
public:
	
	void ElectroMove()override {
		while (MoveChoice != 1 || MoveChoice != 2)
		{
			std::cout << "ехать на электродвигателе: 1\nкрутить педали: 2" << std::endl;
			//std::cin >> MoveChoice;
			if (MoveChoice == 1)
			{
				ElectroSound();
			}
			else if (MoveChoice == 2)
			{
				HumanPowerSound();
			}
			else
			{
				std::cerr << "ошибка! выберите снова!" << std::endl;
			}
		}
	}


private:
	int MoveChoice=1;
};

class OrdinaryBike :virtual public Transport, public HumanPower {
public:
	void HumanPowerMove()const override {
		std::cout << "педальки крутятся";
		HumanPowerSound();
	}
};
class OrdinaryCar :virtual public Transport, public HumanPower {
public:
	void HumanPowerMove()const override {
		std::cout << "бедолага тяне рикшу ";
		HumanPowerSound();
	}
};
class OrdinaryScooter :virtual public Transport, public HumanPower {
	void HumanPowerMove()const override {
		std::cout << "на самокате ";
		HumanPowerSound();
	}
};

class GasEngineBike :virtual public Transport, public GasEngine {
	void GasEngineMove()const override {
		std::cout << "злой не экологичный мотоцикл делает ";
		GasEngineSound();
	}
};
class GasEngineCar :virtual public Transport, public GasEngine {
	void GasEngineMove()const override {
		std::cout << "злая бензиновая машинка делает ";
		GasEngineSound();
	}
};
class GasEngineScooter :virtual public Transport, public GasEngine {
	void GasEngineMove()const override {
		std::cout << "очень сомнительный и не понятный бензиновый самокат делает ";
		GasEngineSound();
	}
};
//===================================



//===================================
class Soldier {
public:
	Soldier() {
		hp = 100;
	}

	void ApplyDmg(int dmg) {
		hp -= dmg;
	}
	int GetHp() {
		return hp;
	}

	~Soldier(){}
private:
	int hp;
	int damage;
};
class Cart {
public:
	Cart() {
		hp = 500;
		CartCount = 5;
	}
	
	void ApplyDmg(int dmg) {
		hp -= dmg;
		CartCount = 5;
	}
	int GetHp() {
		return hp;
	}
	void AddSoldier(Soldier &sol) {
		if (CartCount>0)
		{
			cart.push_back(&sol);
			CartCount--;
		}
		else
		{
			std::cerr << "Телега уже полная!";
		}
	}
	
	~Cart(){}
private:
	int hp;
	std::vector<Soldier*> cart;
	int CartCount;
};
//===========================================






 
int main() {

	setlocale(LC_ALL, "ru");
	//ЗООПАРК
	/*Animal* objBase = new Animal{};
	Fox* objDer = new Fox{};
	Cat* kisa = new Cat{};

	std::vector<Animal*>collection;
	collection.push_back(new Animal);
	collection.push_back(new Fox);
	collection.push_back(new Cat);
	
	for (auto &el:collection)
	{
		el->PrintName();
		el->Voice();
	}
	for (auto& el : collection)
	{
		delete el;
	}


	kisa->ChangeName("кот");
	kisa->PrintName();
	kisa->Voice();

	objDer->ChangeName("лиса");
	objDer->PrintName();
	objDer->Voice();

	

	delete objBase;
	delete objDer;
	delete kisa;

	Bobr* bob = new Bobr();
	OpiumBird* fashion = new OpiumBird();
	ClownFish* stupid = new ClownFish();
	bob->SetName("Бобр");
	fashion->SetName("ОпиумБёрд");
	stupid->SetName("РыбаКлоун");

	bob->SetAge(5);
	fashion->SetAge(152);
	stupid->SetAge(1);



	std::vector <Beast*> zoo;
	zoo.push_back(bob);
	zoo.push_back(fashion);
	zoo.push_back(stupid);

	for (auto &el:zoo )
	{
		std::cout<<el->GetName()<<std::endl;
		std::cout<<el->GetAge()<<"лет" << std::endl;
		el->Feed("baraban");
		el->Move();
		el->Sound();
		std::cout << "-----------------------"<<std::endl;
	}
	for (auto& el : zoo)
	{
		delete el;
	}*/

	//ТРАНСПОРТ
	/*
	ElectroBike* elBike = new ElectroBike();
	ElectroCar* elCar = new ElectroCar();
	ElectroScooter* elScooter = new ElectroScooter();

	OrdinaryBike* OrdBike = new OrdinaryBike();
	OrdinaryCar* OrdCar = new OrdinaryCar();
	OrdinaryScooter* OrdScooter = new OrdinaryScooter();

	GasEngineBike* GEBike = new GasEngineBike();
	GasEngineCar* GECar = new GasEngineCar();
	GasEngineScooter* GEScooter = new GasEngineScooter();

	std::vector <Transport*> trt;
	trt.push_back(elBike);
	trt.push_back(elCar);
	trt.push_back(elScooter);

	trt.push_back(OrdBike);
	trt.push_back(OrdCar);
	trt.push_back(OrdScooter);

	trt.push_back(GEBike);
	trt.push_back(GECar);
	trt.push_back(GEScooter);*/

	


	return 0;
}

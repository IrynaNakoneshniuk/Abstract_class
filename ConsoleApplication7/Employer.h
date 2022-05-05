#pragma once
#include <iostream>
using namespace std;
class Employer
{
 protected:
	 string Name;
	 uint32_t rang;
	 double salary;
	 Employer() {
		 this->Name = '0';
		 this->rang = 0;
		 this->salary = 0;
	 }
	 virtual ~Employer() {
		 this->Name.clear();
	 }
   public:
	 virtual string getName() { return this->Name; }
	 virtual uint32_t getRang(){ return this->rang; }
	 virtual double getSalary() { return this->salary; }
	 virtual void setName(string NameP) { this->Name = NameP; }
	 virtual void setRang(uint32_t rangP) { this->rang = rangP; }
	 virtual void setSalary(double salaryP) { this->salary = salaryP; }
	 virtual void Print() = 0;
};

class President : virtual public Employer
{
public:
	string  PrevExp;
	President() {
		this->PrevExp = '0';
		this->Name = '0';
		this->rang = 0;
		this->salary = 0;
	}
	~ President() {
		this->Name.clear();
		this->PrevExp.clear();
	}
	void setPrevExp(string  PrevExpP) { this->PrevExp = PrevExp; }
	string getPrevExp() { return this->PrevExp; }
	void Ini(string NameP, uint32_t rangP, double salaryP, string  PrevExpP) {
		this->setName(NameP);
		this->setRang(rangP);
		this->setSalary(salaryP);
		this->setPrevExp(PrevExpP);
	}
	void Print()override {
		cout <<"\nName: " << " " << this->getName() << endl;
		cout <<"\nRang: " << " " << this->getRang() << endl;
		cout<<"\nSalary: " << " " << this->getSalary() << endl;
		cout <<"\nPrevios experience: " << " " << this->getPrevExp() << endl;
	};
};
class Worker : virtual public Employer
{
public:
	uint32_t WorkExp;
	Worker() {
		this->WorkExp = 0;
		this->Name = '0';
		this->rang = 0;
		this->salary = 0;
	}
	~Worker() {
		this->Name.clear();
		this->Name.clear();
	}
	void setWorkExp(uint32_t WorkExpP) { this->WorkExp = WorkExp; }
	uint32_t getWorkExp() { return this->WorkExp;}
	void Ini(string NameP, uint32_t rangP, double salaryP, uint32_t WorkExpP) {
		this->setName(NameP);
		this->setRang(rangP);
		this->setSalary(salaryP);
		this->setWorkExp(WorkExpP);
	}
	void Print()override {
		cout <<"\nName: " << " " << this->getName() << endl;
		cout <<"\nRang: " << " " << this->getRang() << endl;
		cout<<"\nSalary: " << " " << this->getSalary() << endl;
		cout <<"\nWork experience: " << " " << this->getWorkExp() << endl;
	};
};
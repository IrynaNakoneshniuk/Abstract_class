#pragma once
#include <iostream>
using namespace std;

class Figure
{
protected:
	uint32_t sideA;
	uint32_t sideB;
	double s;
	Figure() {
		this->sideA = 0;
		this->sideB = 0;
	}
	virtual ~Figure() = default;
public:
	virtual  double getS() = 0;
	virtual void Print() = 0;
};

class Rectangle: virtual public Figure
{
     public:
	Rectangle(uint32_t sideAP, uint32_t sideBP) {
		this->sideA = sideAP;
		this->sideB = sideBP;
	}
	 ~Rectangle() = default;
	uint32_t getSiseA() { return this->sideA; }
	uint32_t getSiseB() { return this->sideB; }
	double getS()override { return (sideA * sideB); };
	void Print() override {
		cout << "\nRectangle: " << " " << "S: " << this->getS();
	}
};
class Triangle : virtual public Figure
{
    public:
	Triangle(uint32_t sideAP, uint32_t sideBP) {
		this->sideA = sideAP;
		this->sideB = sideBP;
	}
   ~Triangle() = default;
	uint32_t getSiseA() { return this->sideA; }
	uint32_t getSiseB(){ return this->sideB; }
	double getS()override { return ((sideA * sideB))*0,5; };
	void Print()override {
		cout << "\nTriangle: " << " " << "S: " << this->getS();
	}
};
class Trapeze : virtual public Figure
{
    public:
	uint32_t l;
	Trapeze(uint32_t sideAP, uint32_t sideBP, uint32_t lP) {
		this->sideA = sideAP;
		this->sideB = sideBP;
		this->l = lP;
	}
	~Trapeze() = default;
	uint32_t getSiseA(){ return this->sideA; }
	uint32_t getSiseB() { return this->sideB; }
	uint32_t getL(){ return this->l; }
	double getS()override { return (((sideA + sideA)) *0,5)*l ; };
	void Print()override {
		cout << "\nTrapeze: " << " " << "S: " << this->getS();
	}
};
class Circle : virtual public Figure
{
   public:
	const uint32_t P = 3.14;
	uint32_t l;
	Circle(uint32_t sideAP) {
		this->sideA = sideAP;
	}
	~Circle() = default;
	uint32_t getSiseA(){ return this->sideA; }
	double getS()override { return ((this->sideA * this->sideA) * P); };
	void Print() override {
		cout << "\nCircle: " << " " << "S: " << this->getS();
	}
};

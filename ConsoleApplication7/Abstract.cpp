#include <iostream>
#include "Employer.h"
#include "Figure.h"

int main()
{
	const size_t N = 4;
	Employer* e = new President();
	e->setName("Volodymyr");
	e->setRang(5);
	e->setSalary(500);
	e->Print();
	Figure* f[N]{
		new Triangle(5,5),
		new Circle(8),
		new Trapeze(6,3,3),
		new Rectangle(5,5),
	};

	for (size_t i = 0; i < N; i++) {
		f[i]->Print();
	}
}


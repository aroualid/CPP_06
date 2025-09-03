
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <iostream>

Base::~Base(){
};

int rand_3()
{
	return (std::rand() % 3);
}

Base * generate(void)
{
	int form_choice = rand_3();
	switch	(form_choice)
	{
		case 1:  {
			return (new A);}
		case 2:  {
			return (new B);}
		case 3:  {
			return (new C);}
	}
	return (NULL);
}

void identify(Base *p)
{
	std::cout << "identify * \n";
	if (dynamic_cast<A*>(p))
		std::cout << "Type is A\n";
	else if (dynamic_cast<B*>(p))
		std::cout << "Type is B\n";
	else if (dynamic_cast<C*>(p))
		std::cout << "Type is C\n";
}

void identify(Base &p)
{
	try
	{
		A a = dynamic_cast<A&>(p);
		std::cout << "Type is A\n";
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		B b = dynamic_cast<B&>(p);
		std::cout << "Type is B\n";
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		C c = dynamic_cast<C&>(p);
		std::cout << "Type is C\n";
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

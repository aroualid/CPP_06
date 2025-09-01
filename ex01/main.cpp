#include "Serializer.hpp"

int main (void)
{
	Data ptr;
	ptr.data = "Salut";

	std::cout << "Ptr adress = " << &ptr << std::endl;

	uintptr_t adress = Serializer::serialize(&ptr);
	std::cout << "value of uintptr is : " << adress << std::endl;
	Data *newptr = Serializer::deserialize(adress);
	std::cout << "value of newptr is : " << newptr;
	std::cout << "\n------------------------------------------------\n";
	std::cout << "                " << newptr->data << "              ";
	std::cout << "\n------------------------------------------------\n";

}


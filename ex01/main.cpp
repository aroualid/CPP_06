#include "Serializer.hpp"

int main (void)
{
	Data ptr;
	ptr.data = "Salut";

	std::cout << "Ptr adress = " << &ptr << std::endl;
	std::cout << "Ptr data = " << ptr.data << std::endl;

	uintptr_t adress = Serializer::serialize(&ptr);
	std::cout << "------------------------------------------------\n";
	std::cout << "value of uintptr is : " << adress << std::endl;
	std::cout << "------------------------------------------------\n";
	Data *newptr = Serializer::deserialize(adress);
	std::cout << "value of newptr is : " << newptr << std::endl;
	std::cout << "data of newptr is : " << newptr->data << std::endl;
}

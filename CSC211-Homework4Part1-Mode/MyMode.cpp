#include "MyMode.h"


MyMode::MyMode()
{
	//CONSTRUCTOR

	//FUNCTION CALL TO POPULATE THE ELEMENTS
	//IN THE ARRAY
	initArray();
	
}

MyMode::~MyMode()
{
	//DESTRUCTOR
}

void MyMode::initArray()
{
	//GENERATES RANDOM NUMBERS TO BE ASSIGNED
	//TO EACH ELEMENT IN THE ARRAY
	srand(time(NULL));

	for (size_t i = 0; i < SIZE; i++)
	{
		*(arr + i) = rand() % (0 + 11);
	}
}

int MyMode::printArray()
{

}
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
		*(arr + i) = rand() % 10 + 1;
	}
}

void MyMode::printArray() const
{
	cout << "[ ";
	//PRINTS ALL VALUES IN THE ARRAY
	for (int i = 0; i < SIZE; i++)
	{	
		cout << *(arr + i);

		if (i < SIZE && i != SIZE-1)
		{			
			cout << ", ";
		}	
	}
	cout << " ]";
	cout << endl << endl;
}

const void MyMode::lookForMode()
{
	int tempArr[10] = { 0 };
	int counter = 0;

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (*(arr+i) == *(arr+j))
			{
				counter++;
			}			
		}
		if (!ifExists(tempArr, arr[i] - 1))
		{
			*(tempArr + (*(arr + i) - 1)) = counter;
		}
		counter = 0;
	}


	//////////////////////////////////////////////////////////////
	//DISPLAY THE OCCURENCE OF EACH GENERATED VALUE IN THE ARRAY
	/*for (size_t i = 0; i < 10; i++)
	{
		if (*(tempArr+i) > 0)
		{
			cout << i + 1 << " occured " << tempArr[i];

			if (*(tempArr+i) > 1)
			{
				cout << " times" << endl;
			}
			else
			{
				cout << " time " << endl;
			}
		}
	}*/
	//////////////////////////////////////////////////////////////


	for (size_t i = 0; i < 10; i++)
	{
		cout << tempArr[i] << " ";
	}
}

bool MyMode::ifExists(const int *tempArr , int val)
{
	bool result = false;

		if (*(tempArr+val) <= 0)
		{
			result = false;
		}
		else
		{
			result = true;
		}
	return result;
}
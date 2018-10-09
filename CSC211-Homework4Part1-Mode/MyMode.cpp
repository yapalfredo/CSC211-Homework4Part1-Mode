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
		*(arr + i) = rand() % RANGE + 1;
	}
}

void MyMode::printArray() const
{
	//THIS FUNCTION PRINTS ALL VALUES IN THE ARRAY
	cout << "The randomly generated array of integers are: " << endl << endl;
	cout << "[ ";
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
	//THIS FUNCTION WILL LOOK FOR MODE IN THE ARRAY

	int tempArr[RANGE] = { 0 };	//THIS WILL SERVE AS A CONTAINER 
								//FOR THE COUNTER
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
		if (!ifExists(tempArr, *(arr+i) - 1))
		{
			*(tempArr + (*(arr + i) - 1)) = counter;
		}
		counter = 0;
	}
	//////////////////////////////////////////////////////////////
	//DISPLAY THE OCCURENCE OF EACH GENERATED VALUE IN THE ARRAY
	for (int i = 0; i < RANGE; i++)
	{
		if (*(tempArr+i) > 0)
		{
			cout << i + 1 << " occured " << *(tempArr + i);

			if (*(tempArr+i) > 1)
			{
				cout << " times" << endl;
			}
			else
			{
				cout << " time " << endl;
			}
		}
	}
	//////////////////////////////////////////////////////////////

	/////////////////////////////////////////////////////////////
	//SET MODE(S)
	int modeTemp;

	for (int i = 0; i < RANGE; i++)
	{
		if (i < RANGE)
		{
		
		}
	}
}

bool MyMode::ifExists(const int *tempArr , int val)
{
	//THIS FUNCTION WILL RETURN TRUE IF THE NUMBER HAS ALREADY BEEN COUNTED
	//OR FALSE OTHERWISE
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
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

void MyMode::setMode(int val)
{
	//SET THE MODE VALUE
	mode = val;
}

const void MyMode::lookForMode()
{
	int currentCounter;
	int previousCounter = 0;
	

	int previousMode = 0;
	int currentMode = 0;


	for (int i = 0; i < SIZE; i++)
	{
		
		if (*(arr+i) != getMode())
		{
			// TEST USED FOR ARRAY
			currentCounter = 0;

			for (int j = 0; j < SIZE; j++)
			{
				if ((*(arr + i) == *(arr + j)) && i <= j)
				{
					currentCounter++;
					if (currentCounter > previousCounter)
					{
						setMode(*(arr + i));
					}
				}

				previousCounter = currentCounter;

			}

			cout << getMode() << " appeard " << currentCounter << " times" << endl;
		}
			
		
	}
	
	
}

int MyMode::getMode() const
{
	return mode;
}
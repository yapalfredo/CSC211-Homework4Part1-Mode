#pragma once
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

//SIZE OF THE ARRAY
const int SIZE = 20;

class MyMode
{
private:
	//ARRAY VARIABLE
	int arr[SIZE];

	//GETS CALLED TO INITIALIZE THE ELEMENTS IN THE ARRAY
	void initArray();

public:
	//CONSTRUCTOR
	MyMode();

	//DESTRUCTOR
	~MyMode();


	int printArray();


};
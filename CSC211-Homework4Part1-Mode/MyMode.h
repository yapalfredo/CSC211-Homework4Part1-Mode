#pragma once
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

using namespace std;

//SIZE OF THE ARRAY
const int SIZE = 20;

class MyMode
{
private:
	//VARIABLE DECLARATIONS
	int arr[SIZE], mode;

	//GETS CALLED TO INITIALIZE THE ELEMENTS IN THE ARRAY
	void initArray();

	//SET THE MODAL VALUE
	void setMode(int);

public:
	//CONSTRUCTOR
	MyMode();

	//DESTRUCTOR
	~MyMode();

	//DISPLAY THE VALUES IN THE ARRAY
	void printArray() const;

	//LOOK FOR THE MODAL VALUE IN THE ARRAY
	const void lookForMode();

	//GET THE MODAL VALUE;
	int getMode() const;


};
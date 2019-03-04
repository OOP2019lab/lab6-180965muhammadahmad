#include <iostream>
#include <string>
using namespace std;

class student
{
private:
	static int counter;
	int id;
	float *quizscore;
	int quizCapacity;
	int quiztaken;
	float Gpa;

public:
	// This is default constructor 
	student();
	//This is paramitirized constructor
	student(int capacity, float gpa);
	//copy constructor
	student(const student & arr);
	//Destructor
	~student();
	//function to add quiz score
	void addQuizscore(float num);
	//function to set gpa 
	void setGpa(float temp);
	// getter for gpa
	float getgpa()const;
	// This function will print 
	void print()const;

	//comparing function
	bool compare(student mi);
	//this function updates the number
	void updatescore(int num, float temp);
};



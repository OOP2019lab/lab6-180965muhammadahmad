#include "student.h"

int student::counter = 0;

//default constructor
student::student()
{
	id = ++counter;
	quizCapacity = 3;
	quiztaken = 0;
	Gpa = -1;
	quizscore = new float[quizCapacity];

}

//parameterized default constructor
student::student(int capacity, float gpa)
{
	id = ++counter;
	quizCapacity = capacity;
	quiztaken = 0;
	Gpa = gpa;
	quizscore = new float[quizCapacity];

}
// copy constructor
student::student(const student & arr)
{
	id = arr.id;
	quizCapacity = arr.quizCapacity;
	quiztaken = arr.quiztaken;
	if (arr.quizscore != nullptr)
	{
		quizscore = new float[quizCapacity];
		for (int i = 0; i<quiztaken; i++)
		{
			quizscore[i] = arr.quizscore[i];

		}
	}
	Gpa = arr.Gpa;


}

// default destructor
student::~student()
{
	delete[]quizscore;
	quizscore = nullptr;
}

//function to add quiz score
void student::addQuizscore(float num)
{
	if (quiztaken<quizCapacity)
	{
		quizscore[quiztaken] = num;
		quiztaken++;

	}
	else
		cout << "Error" << endl;



}
// getter and setter for gpa
void student::setGpa(float temp)
{
	Gpa = temp;

}

float student::getgpa() const
{
	return Gpa;

}
//function for printing students data
void student::print()const
{
	cout << "ID of student is " << id << endl;
	cout << "GPA = " << Gpa << endl;
	cout << "QUIZ TAKEN=  " << quiztaken << endl;
	for (int i = 0; i<quiztaken; i++)
	{
		cout << "quiz " << i + 1 << " score = " << quizscore[i] << endl;
	}


}
//comparing function
bool student::compare(student mi)
{
	if (mi.Gpa<Gpa)
	{
		return true;


	}
	else
		return true;

}

void student::updatescore(int num, float temp)
{

	if (num <= quiztaken)
	{
		quizscore[num - 1] = temp;

	}
	else
		cout << "quiz is not taken" << endl;
}
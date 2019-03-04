#include "student.h"

void printarr(student* arr, int size)
{
	for (int i = 0; i<size; i++)
	{
		arr[i].print();

	}
}

student* GPALESS2(student* arr, int &size)
{
	student * temp = new student[size];
	int x = 0;
	for (int i = 0; i<size; i++)
	{
		if (arr[i].getgpa()>2)
		{
			temp[x] = arr[i];
			x++;

		}
		
	}
	size = x;
	return temp;
}
int main()
{
	student fast[3] = { student(3,2),student(3,3),student(4,2.33) };
	fast[0].addQuizscore(1);
	fast[0].addQuizscore(4);
	fast[0].addQuizscore(10);
	fast[1].addQuizscore(10);
	fast[1].addQuizscore(4);
	fast[1].addQuizscore(9);
	fast[2].addQuizscore(9);
	fast[2].addQuizscore(8);
	fast[2].addQuizscore(7);
	int sizetemp = 3;
	printarr(fast, 3);
	student *xyz = GPALESS2(fast, sizetemp);
	printarr(xyz, sizetemp);

	return 0;
}


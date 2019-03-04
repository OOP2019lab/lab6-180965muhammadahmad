// student.cpp : Defines the entry point for the console application.
//
#include "student.h"
#include <iostream>
using namespace std;



int main()
{
	student s1;
	s1.addQuizscore(10);
	s1.addQuizscore(3);
	s1.addQuizscore(7);
	s1.addQuizscore(11);
	s1.print();
	cout << endl;
	student s2(4, 2);
	s2.addQuizscore(9);
	s2.addQuizscore(4);
	s2.addQuizscore(6);
	s2.print();
	cout << endl;

	student s3 = s1;
	s3.updatescore(1, 3);
	s3.updatescore(10, 3);
	cout << endl;
	cout << " xyz xyz= " << s1.compare(s2) << endl;

	s3.setGpa(3.0);
	cout << "Printing student 1" << endl;
	s1.print();

	cout << "Printing student 3" << endl;
	s3.print();



	return 0;
}


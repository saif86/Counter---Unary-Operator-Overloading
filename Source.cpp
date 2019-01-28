/**
* @file Source.cpp
*
* @brief This code creates Counter objects and execute some
* Date members for testing prupose.
*
* @author Saif Ullah Ijaz
*
*/
#include<iostream>
#include "Counter.h"

using namespace std;

// function main begins program execution
void main() {
	Counter c1, c2;
	++c1;

	c1 = -c1;

	c2 = -c1;

	Counter c3;

	cout << "Object 1:" << endl;
	cout << "Serial: " << c1.GetSerialNo() << endl;
	cout << "Count: " << c1.GetCount() << endl << endl;


	cout << "Object 2:" << endl;
	cout << "Serial: " << c2.GetSerialNo() << endl;
	cout << "Count: " << c2.GetCount() << endl << endl;

	cout << "Object 3:" << endl;
	cout << "Serial: " << c3.GetSerialNo() << endl;
	cout << "Count: " << c3.GetCount() << endl << endl;


	system("pause");
}
// end main
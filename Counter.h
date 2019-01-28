/**  Counter class to handle counting in a C++ code.
*
* #include "Counter.h" <BR>
* -llib
*
*/
#ifndef COUNTER_H
#define COUNTER_H

// SYSTEM INCLUDES
#include<iostream>


// Counter class definition
class Counter {
public:
	// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	Counter(int = 0);

	// Use compiler-generated copy constructor, assignment, and destructor.
	// Counter(const Counter&);
	// Counter& operator=(const Counter&);
	// ~Counter();

// OPERATORS
	/** Increment operator.
	*
	* @param void.
	*
	* @return A reference to the current(updated) object.
	*/
	Counter& operator ++();

	/** Negation operator.
	*
	* @param void.
	*
	* @return Negative of Counter.
	*/
	int operator -();

	/** Assignment operator.
	*
	* @param int A count value to be assigned.
	*
	* @return A reference to the current(updated) object.
	*/
	Counter& operator =(int);

	/** Overloaded Assignment operator.
	*
	* @param rhs reference to right hand object.
	*
	* @return A reference to the current(updated) object.
	*/
	Counter& operator=(const Counter& rhs);


// ACCESS
	// setters
	void SetCount(int = 0);
	void SetCounter(int = 0);
	/**
	# @overload void SetCounter(const Counter&);
	*/
	void SetCounter(const Counter&);
	
	// getters
	int GetSerialNo()const;
	int GetCount()const;
	const Counter& GetCounter()const;
	static int sGetTotalCounters();

private:

	// DATA MEMBERS
	int mSerialNo;
	int mCount;
	
	// class variable shared by all objects of date class
	static int msNoOfCounters;
};
// end class Counter
#endif  
// _COUNTER_H_
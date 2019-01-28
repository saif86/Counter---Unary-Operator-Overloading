#include "Counter.h"  // class implemented
using namespace std;

// File scope starts here 

/////////////////////////////// PUBLIC ///////////////////////////////////////

//============================= LIFECYCLE ====================================

// Counter Default + Overloaded Constructor
Counter::Counter(int aCount) : mSerialNo(Counter::sGetTotalCounters()), mCount(aCount) {
	this->SetCounter(aCount);
	Counter::msNoOfCounters++;
}
// end Counter constructor


//============================= OPERATORS ====================================

// Increment operator
Counter& Counter::operator ++() {
	this->SetCount(this->GetCount() + 1);
	return *this;
}
// end increment operator

// Negation operator
int Counter::operator -() {

	return -(this->GetCount());
}
// end negation operator

// Assignment operator
Counter& Counter::operator =(int aCount) {
	this->SetCount(aCount);
	return *this;
}
// end assignment operator

// Overloaded Assignment operator
Counter& Counter::operator =(const Counter& rhs) {
	this->SetCount(rhs.GetCount());
	return *this;
}
// end assignment operator


//============================= ACESS      ===================================

// function that sets count value of Counter
void Counter::SetCount(int aCount) {
	this->mCount = aCount;
}
// end function SetCount

// function that sets the Counter
void Counter::SetCounter(int aCount) {
	this->SetCount(aCount);
}
// end function SetCounter

// overloaded function that sets the Counter
void Counter::SetCounter(const Counter& obj) {
	this->SetCounter(obj.GetCount());
}
// end function SetCounter

// function that gets serial no. of the Counter
int Counter::GetSerialNo()const {
	return this->mSerialNo;
}
// end function GetSerialNo

// function that gets count value of the Counter
int Counter::GetCount()const {
	return this->mCount;
}
// end function GetCount

// function that gets the Counter
const Counter& Counter::GetCounter()const {
	return *this;
}
// end function GetCounter

// static function that gets the total no. of Counters
int Counter::sGetTotalCounters() {
	return Counter::msNoOfCounters;
}
// end function sGetTotalCounters


/////////////////////////////// PRIVATE    ///////////////////////////////////

/* private static member cannot be accessed outside the class except for initialization */
int Counter::msNoOfCounters = 0;	// intitalize class variable
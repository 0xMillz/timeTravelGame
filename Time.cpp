//******************************************************************
// Author: Mills McIlroy
// Date: December 8, 2015
// Description: This is the Time class function implementation file.
//******************************************************************
#include "Time.hpp"

//This function initializes the pointer member variables to other Times
void Time::setPtrs(Time *one, Time *two, Time *three, Time *four, Time *five)
{
    ptr1 = one;
    ptr2 = two;
    ptr3 = three;
    ptr4 = four;
    ptr5 = five;
}

//This function halts the program until the users presses enter   
void Time::EnterToContinue()
{
  cout << "Press ENTER to continue... " << endl;
  cin.ignore(std::numeric_limits <std::streamsize> ::max(), '\n' );  
}

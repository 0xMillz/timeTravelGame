//*************************************************************
// Author: Mills McIlroy
// Date: December 8, 2015
// Description: This is the Time class specification file.
//*************************************************************
#ifndef TIME_HPP
#define TIME_HPP
#include "Player.cpp"
#include <string>
#include <iostream>
#include <limits>
using std::string;
using std::cout;
using std::cin;
using std::endl;

class Player;//Forward declaration

class Time
{
protected:
   Time *ptr1;
   Time *ptr2;
   Time *ptr3;
   Time *ptr4;
   Time *ptr5;
   string item;
public:
   Time(string item) { this->item = item; }
   void setPtrs(Time *one, Time *two, Time *three, Time *four, Time *five); 
   virtual void special(Player *player1) = 0;
   void EnterToContinue();
};
#endif

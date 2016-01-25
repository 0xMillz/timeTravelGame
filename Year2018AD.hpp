//*************************************************************
// Author: Mills McIlroy
// Date: December 8, 2015
// Description: This is the Year2018AD class specification file.
//*************************************************************
#ifndef YEAR2018AD_HPP
#define YEAR2018AD_HPP
#include "Player.cpp" 
#include "Time.hpp"
#include <iostream>
#include <string>
using std::endl;
using std::cout;
using std::cin;
using std::string;

class Year2018AD : public Time
{
public:
   Year2018AD(string item) : Time(item) {}//This constructor does nothing 
   virtual void special(Player *player1);
};
#endif

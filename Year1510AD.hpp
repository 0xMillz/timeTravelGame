//*************************************************************
// Author: Mills McIlroy
// Date: December 8, 2015
// Description: This is the Year1510AD class specification file.
//*************************************************************
#ifndef YEAR1510AD_HPP
#define YEAR1510AD_HPP
#include "Player.cpp" 
#include "Time.hpp"
#include <iostream>
#include <string>
using std::endl;
using std::cout;
using std::cin;
using std::string;

class Year1510AD : public Time
{
public:
   Year1510AD(string item) : Time(item) {}//This constructor does nothing 
   virtual void special(Player *player1);
};
#endif

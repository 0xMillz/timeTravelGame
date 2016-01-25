//*************************************************************
// Author: Mills McIlroy
// Date: December 8, 2015
// Description: This is the Year30AD class specification file.
//*************************************************************
#ifndef YEAR30AD_HPP
#define YEAR30AD_HPP
#include "Player.cpp" 
#include "Time.hpp"
#include <iostream>
#include <string>
using std::endl;
using std::cout;
using std::cin;
using std::string;

class Year30AD : public Time
{
public:
   Year30AD(string item) : Time(item) {}//This constructor does nothing 
   virtual void special(Player *player1);
};
#endif

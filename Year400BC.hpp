//*************************************************************
// Author: Mills McIlroy
// Date: December 8, 2015
// Description: This is the Year400BC class specification file.
//*************************************************************
#ifndef YEAR400BC_HPP
#define YEAR400BC_HPP
#include "Player.cpp" 
#include "Time.hpp"
#include <iostream>
#include <string>
using std::endl;
using std::cout;
using std::cin;
using std::string;

class Year400BC : public Time
{
public:
   Year400BC(string item) : Time(item) {}//This constructor does nothing 
   virtual void special(Player *player1);
};
#endif

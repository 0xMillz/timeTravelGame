//*************************************************************
// Author: Mills McIlroy
// Date: December 8, 2015
// Description: This is the Present class specification file.
//*************************************************************
#ifndef PRESENT_HPP
#define PRESENT_HPP
#include "Player.cpp" 
#include "Time.hpp"
#include <iostream>
#include <string>
using std::endl;
using std::cout;
using std::cin;
using std::string;

class Present : public Time
{
public:
   Present(string item) : Time(item) {}//Present constructor does nothing 
   virtual void special(Player *player1);
};
#endif

//*************************************************************
// Author: Mills McIlroy
// Date: December 8, 2015
// Description: This is the Player class specification file.
//*************************************************************
#ifndef PLAYER_HPP
#define PLAYER_HPP
#include <string>
#include "Time.hpp"
using std::string;

class Time;//Forward declaration

class Player
{
private:
    string name;
    Time *location; //Pointer to current location
    string backpack[4]; //A backpack that has a limit of four items (strings)
public:
   Player() { name = ""; location = NULL; }
   void setName(string name) { this->name = name; }
   string getName() { return name; }
   void setLocation(Time *location) { this->location = location; }
   Time *getLocation() { return location; }
   void addToBackpack(string item, int pos) { backpack[pos] = item; }  
   string getBackpack(int i) { return backpack[i]; }
};
#endif

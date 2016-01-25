//*************************************************************
// Author: Mills McIlroy
// Date: December 8, 2015
// Description: This is the Year30AD function implementation file.
//**************************************************************
#include "Year30AD.hpp"

void Year30AD::special(Player *player1)
{
    cout << "Another BOOM! and you open your eyes......" << endl;
    cout << "You see what looks like three crosses standing on a hill in the distance." << endl;
    cout << "It feels early in the morning, just before sunrise." << endl;
    cout << "You squint a little, and it appears there is a person on each one!" << endl;
    cout << "Doc's voice blares out of the stereo again: " << endl;
    cout << "\"Welcome to the year 30AD, " << player1->getName() << "!" <<  endl;
    cout << "I'm conducting a little DNA sequencing project and I need you to get a blood sample for me please." << endl;
    cout << "If you could go up and get that thorny crown down from the guy in the middle, I would really appreciate it!" << endl;
    cout << "But hurry, the sun will come up soon and someone might see you!" << endl;
    EnterToContinue();
    cout << "You drive up to the hill, get out, walk up to the base of the middle cross, and start climbing." << endl;
    cout << "You try to look away, but you can tell this poor guy has been through a lot." << endl;
    cout << "You reach the top, rip the thorny crown off his head, and climb back down to the ground." << endl;
    cout << "As you are walking back down to the car you see a woman silently weeping on the other side of the hill." << endl;
    cout << "You say a quick prayer and then get out of there." << endl;
    cout << "You're worried about the fuel level, and you still have one more destination to go!" << endl;
    cout << "You rev the engine, put it into gear, get up to speed, and BOOM!, you're outta there!" << endl;
    player1->addToBackpack(item, 2); 
    player1->setLocation(ptr5);
}    

//*************************************************************
// Author: Mills McIlroy
// Date: December 8, 2015
// Description: This is the Year1510AD function implementation file.
//**************************************************************
#include "Year1510AD.hpp"

void Year1510AD::special(Player *player1)
{
	cout << "The dense green thicket of a jungle appears out of nowhere!" << endl;
	cout << "You slam on your brakes as vines and tree branches slap against the sides of the car." << endl;
    cout << "\"Where in great tarnation am I??\" you wonder outloud." << endl; 
	cout << "Doc Brown's voice crackles to life over the stereo again:" << endl;
	cout << "\"Welcome to Tenochtitlan, or what you may know as present-day Mexico City!\"" << endl;
	cout << "\"You are outside the palace of the greatest ruler and warrior in Aztec history,\"" << endl;
	cout << "the one and only Montezuma, and I want his crown!\"" << endl;
	cout << "\"Don't forget to make haste, " << player1->getName() << ", or you may run out of fuel!\"" << endl;
	cout << "\"But wait,\" you yell, \"How the hell am I supposed to get that!!\"" << endl;
    cout << "Silence. Apparently these recordings aren't interactive...." << endl;
	EnterToContinue();
	cout << "After a minute of pondering, you put the car back into drive and slowly roll through the jungle" << endl;
    cout <<	"towards what looks like a clearing in the distance." << endl;
	cout << "You start to hear the sound of chanting, and it is growing louder and louder." << endl;
	cout << "You stop the car and get out to see if you can get a closer look." << endl;
	cout << "Peering through a gap in the leaves, you see a some sort of ritual being performed." << endl;
	cout << "There are around 100 natives, all circled around a young girl tied down onto a stone platform." << endl;
	cout << "An extremely fat and extravagently dressed man approaches her with" << endl;
    cout <<	"some sort of shiny metal blade held high above his head." << endl;
	cout << "You see he is wearing an elaborately decorated feather headdress, this must be Montezuma!" << endl;
	EnterToContinue();
	cout << "Suddenly the chanting stops and everything is silent." << endl;
	cout << "Montezuma slowly touches the blade to the back of the girl's neck and holds it there." << endl;
	cout << "In a sudden motion, he swings his arm back up above the girl's head" << endl;
	cout << "and in surprise you inadvertently let out a yelp!" << endl;
	cout << "Everyone turns towards your direction, you hear someone start to shout," << endl;
        cout << "and then they all start running right for you!" << endl;
	EnterToContinue();
	cout << "You book it back to the car, slam it into gear, and drive straight back into the clearing!" << endl;
	cout << "As you break past the last few bushes in your way," << endl;
	cout << "the car bursts into the clearing and plows directly into Montezuma, knocking him off his feet!" << endl;
	cout << "Everyone stops in their tracks, takes one look at the car, and immediately runs away in the other direction!" << endl;
	cout << "Even Montezuma scrambles back onto his feet and is gone in an instant, leaving his headdress behind in the grass." << endl;
	cout << "\"That was easy,\" you say to yourself, scoffing, \"so much for being the greatest Aztec warrior of all time!\"" << endl;
	cout << "You hop out of the car, grab the headress and stuff it into your backpack." << endl;
	player1->addToBackpack(item, 0);
	cout << "As you walk back to the car, you notice the young girl is still tied down, wimpering." << endl;
	cout << "You quickly untie her, get back in the car and speed off towards your next destination." << endl;
	cout << "The car hits 88mph and BOOM!, everything goes black again." << endl;	
	cout << "\"Maybe I shouldn't have saved her\" you wonder to yourself," << endl;
    cout << "\"I hope this doesn't have some sort of butterfly effect on the future....\"" << endl;
	player1->setLocation(ptr3);
}    

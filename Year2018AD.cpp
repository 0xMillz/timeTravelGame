//*************************************************************
// Author: Mills McIlroy
// Date: December 8, 2015
// Description: This is the Year2018AD function implementation file.
//**************************************************************
#include "Year2018AD.hpp"

void Year2018AD::special(Player *player1)
{
    cout << "Another BOOM! and you open your eyes....." << endl;
	cout << "You're cruising down a busy wide avenue in what looks like a modern day American city." << endl;
	cout << "You catch a a glmipse of a street sign, it reads \"Pennsylvania Ave\"" << endl;
    cout <<	"As you pass by a few more buildings, you see what looks like the White House come into view." << endl;
	cout << "But wait, its iconic neoclassical columns are painted gold!" << endl;
	cout << "And are those machine gun turrets positioned at every corner of the roof?" << endl;
    cout << "Doc Brown's voice crackles to life again over the stereo:" << endl;
        EnterToContinue();
    cout << "Welcome to the year 2018, " << player1->getName() << "!\"" << endl;
    cout << "As you might have guessed, Donald Trump is now president." << endl;
    cout << "Unfortunately, his presidency sets off a series of events that ultimately lead to WWIII and" << endl;
	cout << "the eventual descruction of the free world as we know it." << endl;
	cout << "I've traced back this series of events to this one key speech he is giving today at the Lincoln Memorial" << endl;
    cout << "where he declares war with Canada. There is a sniper rifle in the trunk- I will need you to assassinate him." << endl;
	cout << "Bring back the shell casing as proof, and good luck, the fate of the entire world depends on you!\"" << endl;
	cout << "\"But wait-\" you stutter, but the stereo cuts off." << endl;
	EnterToContinue();
	cout << "You make your way to what looks like a good spot with range of the Lincoln Memorial." << endl;
	cout << "You can see the President standing at the podium. His secret service agents look heavily armed." << endl;
	cout << "\"Gulp\" you gulp." << endl;
	cout << "You grab the rifle from the back, take aim and pull the trigger." << endl;
	cout << "Before the bullet even hits its mark you are back in the car and flooring it out of there!" << endl;
	cout << "You shove the bullet casing into your bag, angrily." << endl; 
	player1->addToBackpack(item, 1);
	cout << "You can't believe what you've just done, and as you get up to speed, Doc's voice suddenly comes back over the stereo:" << endl;
	EnterToContinue();
        cout << "\"It worked, " << player1->getName() << "! I've just checked my news feed from the future and Trump has resigned from the Presidency!" << endl;
	cout << "Those were only rubber bullets, but I knew that as soon as Trump felt even" << endl;
        cout << "the slightest sense of REAL danger his confidence would crumble!" << endl;
	cout << "Hold up Doc,\" you yell, \"Do you know what you just put me through?? And I thought these messages from you were prerecorded--\"" << endl;
	cout << "Uh sorry, " << player1->getName() << ", you're breaking up, I got to go now, bye!\"" << endl;
	cout << "You make a mental note to have a talk with Doc when you get back about improving your work/stress balance." << endl;
	cout << "BOOM! and you're off to your next destination!" << endl;

	player1->setLocation(ptr5);
}    

//*************************************************************
// Author: Mills McIlroy
// Date: December 8, 2015
// Description: This is the Year400BC function implementation file.
//**************************************************************
#include "Year400BC.hpp"

void Year400BC::special(Player *player1)
{
cout << "Another BOOM! and you open your eyes....." << endl;
cout << "You find yourself cruising down a bumpy, dirt country road, surrounded by lush rolling hills." << endl;
cout << "You roll down the windows and warm, humid air flows in." << endl;
cout << "You can see the sun glinting off a vast sea in your review mirror" << endl;
cout << "The outline of a city wall begins to appear in the horizon as you grow closer." <<endl;
cout << "The car stereo crackles to life with the voice of Dr. Brown:" << endl;
cout << "\"Welcome to ancient Greece, " << player1->getName() << "! The year is 400 BC!\"" << endl;
cout << "\"I need a silver stater for my coin collection. You should be able to find one in the city of Thebes," << endl; 
cout << "just offer to trade some of the headdress feathers, but get me a good deal, I still need that to look good in my display case!\"" << endl;
cout << "The city walls are coming up fast and the gate looks closed, how will you get inside?" << endl;
cout << "You pull off the road and park the car behind some bushes, hopefully no one will find it there." << endl;
cout << "You step out of the car and up to the towering gate. Suddenly, a great creature pounces in front of you!!" << endl;
EnterToContinue();
int choice = 0;		
cout << "                               .sSSSSSSSs     " << endl;
cout << "                             sSS=\\\"\\\"^^^\\\"s  " << endl;
cout << "                   /\\       , /  \\_\\_\\|_/_)" << endl;
cout << "                  /';;     /| \\\\\\/.-. .-./" << endl;
cout << "                 / \\;|    /. \\,S'  >   < |" << endl;
cout << "                / -.;|    | '.SS     _|  ;" << endl;
cout << "               ; '-.;\\,   |'-.SS\\   __  /S" << endl;
cout << "               | _  ';\\\\.  \\' SSS\\\\_____/SS" << endl;
cout << "               |  '- ';\\\\.  \\_SSS[_____]SS" << endl;
cout << "               \\ '--.-';;-. __SSS/\\    SSS" << endl;
cout << "                \\  .--' ';;'.=SSS`\\\\_\\_SSS" << endl;
cout << "                 `._ .-'` _';;..=.=.=.\\.=\\ " << endl;
cout << "                    ;-._-'  _.;\\.=.=.=.|.=| " << endl;
cout << "          ,     _.-'    `\\\"=._  ;\\=.=__/__/ " << endl;
cout << "          )\\ .'`   __        \\\".;|.=.=.=./ " << endl;
cout << "          (_\\   .-`  '.   |    \\/=.=.=/` " << endl;
cout << "           /\\\\         \\-,|     |.--'| " << endl;
cout << "          /  \\`,       //  \\    | |  | " << endl;
cout << "         ( (__) )  _.-'--,  \\   | |  '--, " << endl;
cout << "          ;----' -'--,__}}}  \\  '--, __}}} " << endl;
cout << "          \\_________}}}       \\___}}} " << endl;
cout << endl;
cout << "The Sphinx stands before you, a terrible sight." << endl;
cout << "She has the head of a human, the haunches of a lion, and wings of a great bird." << endl;
cout << "The Sphinx speaks thus: \"Who dares try to enter the city of Thebes at my gate?\"" << endl;
cout << "\"It is I, " << player1->getName() << ", and I mean no harm\" you stammer. \"I come here to trade in the city market.\"" << endl;
cout << "\"Well unfortunately for you, " << player1->getName() << " you have arrived at the wrong gate.\"" << endl;
cout << "The only way to pass through here is to answer my riddle, and for 1000 years no one has ever answered correctly!" << endl;
cout << "\"What happens if I have the wrong answer?,\" you ask innocently." << endl;
cout << "\"I will devour you, limb by limb!,\" the Sphinx roars." << endl;
cout << "\"Now here it goes, which creature in the morning goes on four legs, at mid-day on two, " << endl;
cout << "and in the evening upon three, and the more legs it has, the weaker it be?\"" << endl;
cout << "Make a choice: " << endl;
cout << "1. Frog" << endl;
cout << "2. Sphinx" << endl;
cout << "3. Man" << endl;
cin >> choice;
while (choice != 3)
{
	cout << "Please try again, this game is for all ages! We wouldn't want " << player1->getName() << " to die a gruesome death, right?" << endl;
    cin >> choice;
}
cout << "You answer, \"It is Man - who crawls on all fours as a baby, then walks on two feet as an adult, and then hobbles with a cane in old age.\"" << endl;
cout << "\"The Sphinx's eyes turn red with rage, but a deal is a deal and she steps away from the gate.\"" << endl;
cout << "\"Whooh, that was a close one,\" you think to yourself, \"I'm glad I'm up to date on my ancient Greek mythology!\"" << endl;
cout << "As you walk past the Sphinx, you remember, \"Oh yeah, I forgot, Dr. Brown told me to tell you that he says hi!\"" << endl;
cout << "The anger in the Sphinx's face immediately washes away and is replaced by a great big smile!" << endl;
cout << "\"You know Doc Brown!?,\" she asks, \"You should have told me from the beginning, all friends of Doc can pass for free!\"" << endl;
cout << "\"It's just like Doc to leave out a crucial detail like that\" you grumble to yourself." << endl;
cout << "\"What are you looking to trade?\" the Sphinx asks." << endl;
cout << "\"I'm looking for a silver stater\" you reply." << endl;
cout << "\"Oh, I might actually be able to help you out with that, I have a bag of them from the opium merchant who attemted" << endl;
cout << "to pass here just before you. He won't be needing them anymore, and I have no use for wordly possessions either!" << endl;
cout << "The Sphinx flings a sack of silver at you and you catch it. It's just small enough to fit in what space is left in your backpack." << endl;
player1->addToBackpack(item, 3);
cout << "\"Thanks!\" you shout as you hurry back to the Delorean" << endl;
cout << "You can hear a stater rattle loose in your bag, but there's no time to fix it," << endl;
cout << "if you don't move quickly, you will run out of fuel and be stranded in 400BC forever!!" << endl;
cout << "You hop back into the Delorean and are off!" << endl;
player1->setLocation(ptr1);//Set location back to the present
}  

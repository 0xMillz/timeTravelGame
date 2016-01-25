//*********************************************************************
// Author: Mills McIlroy
// Date: December 8, 2015
// Description: This is the Present class function implementation file.
//*********************************************************************
#include "Present.hpp"

void Present::special(Player *player1)
{
   cout << "You flip the bag over and shake it as each item begins to fall out one by one." << endl;
   
   for (int i = 0; i < 4; i++)
   {
     if (i == 0)
        cout << "First the " << player1->getBackpack(i) << " tumbles out." << endl;   
     else if (i == 1)
        cout << "   Then the " <<  player1->getBackpack(i) << " clatters to the ground." << endl;	
     else if (i == 2)
        cout << "     Then the " <<  player1->getBackpack(i) << " falls out." << endl;	 
     else if (i == 3)
     {
         cout << "       Then a single " << player1->getBackpack(i) << " flys out with a clink. Doc eyes light up and he grins so wide you can see his false teeth. Gross." << endl;
         cout << "You don't mention the others hidden in your backpack's secret pouch." << endl; 
		 cout << "With what little Doc has been paying you this school year, you definitely deserve it!" << endl;
     }
     player1->addToBackpack("", i); //Empty each item from the backpack  
   }
   cout << "\"Great job, " << player1->getName() << ",\" Doc says, as he hands you your well-deserved paycheck. " << endl;
   cout << "You stuff the paycheck in your backpack." << endl;
   player1->addToBackpack(item, 0);
   cout << "But one more thing,\" Doc continues, \"you forgot to get the car washed.\"" << endl;
   cout << "With summer on it's way, you could really use one last break from it all before leaving for college in the fall." << endl;
   cout << "\"Sorry Doc,\" you say, \"but I quit!,\" as you grab your skateboard off the lawn, hop on, and roll away...." << endl;
   EnterToContinue();
   cout << "           _                       " << endl;
   cout << "         //\\\\\\  " << endl;
   cout << "        //> <\\\\  " << endl;
   cout << "         ( _ )   " << endl;
   cout << ".;;.     ,'-`,_  " << endl;
   cout << " \\/`\\   ,|     ```--._  " << endl;
   cout << "  \\  `-' |     ___    |=;  " << endl;
   cout << "   `-. _,'----|   ``--'-'  " << endl;
   cout << "    ,-',-'    |  " << endl;
   cout << "    \\-'      _/  " << endl;
   cout << "   (     _.-'  " << endl;
   cout << "    \\    \\ \\    " << endl;
   cout << "     \\____\\_\\  " << endl;
   cout << "    ,--````)`)  " << endl;
   cout << "   zzzzzzzzzzz  " << endl;
   cout << "      /\\_/\\  " << endl;
   cout << "   [HH]\\_/[HH]   	" << endl;
}

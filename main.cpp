//***********************************************************************************
//Author: Mills McIlroy
//Date: December 8, 2015
//Description: This is the client program that uses Time class and it's subclasses 
//and Player class to simulate a journey through time.
//Image credits:
//Scientist at lab table: http://www.retrojunkie.com/asciiart/science/chemstry.htm
//Car: http://www.chris.com/ascii/index.php?art=transportation/cars
//Sphinx: http://ascii.co.uk/art/sphinx
//Skater: http://ascii.co.uk/art/skateboard
//****************************************************************
#include <iostream>
#include <string>
#include <limits>
#include <thread>
#include <chrono>
#include "Time.hpp"
#include "Year400BC.hpp"
#include "Present.hpp"
#include "Year1510AD.hpp"
#include "Year2018AD.hpp"
#include "Year30AD.hpp"
using std::cin;
using std::cout;
using std::endl;

//Function prototype
void EnterToContinue(int seconds);

int main() {
	
    string userName;//Name of user
    int choice = 0;

    do {
        cout << "******Menu******" << endl;
        cout << "1. Play" << endl;
        cout << "2. Goal (spoilers!)" << endl;
        cout << "3. Exit" << endl;
        cin >> choice;
        cin.ignore();//Skip newline character

        if (choice == 1) {

           //Create each time
           Time *ptr1 = new Present("Paycheck");
           Time *ptr2 = new Year1510AD("Headdress");
           Time *ptr3 = new Year2018AD("Bullet Casing");
           Time *ptr4 = new Year30AD("Crown of Thorns");
           Time *ptr5 = new Year400BC("Silver Stater");

           //Initialize each pointer member variable
           ptr1->setPtrs(ptr1, ptr2, ptr3, ptr4, ptr5);
           ptr2->setPtrs(ptr1, ptr2, ptr3, ptr4, ptr5);
           ptr3->setPtrs(ptr1, ptr2, ptr3, ptr4, ptr5);
           ptr4->setPtrs(ptr1, ptr2, ptr3, ptr4, ptr5);
           ptr5->setPtrs(ptr1, ptr2, ptr3, ptr4, ptr5);

           Player *player1 = new Player();
           player1->setLocation(ptr1);//Set location to present

           cout << "Welcome to Outta Time, the time travel game!" << endl;
           cout << "Please enter your name:" << endl;
           getline(cin, userName);

           player1->setName(userName);
           cout << endl;
           cout << "Hi " + player1->getName() + "!"<< endl;

           EnterToContinue(1);

           cout << "BACK STORY:" << endl;
           cout << endl;
           cout << "You work after school as an assistant for a wealthy but eccentric inventor, Dr. Brown." << endl;
           cout << "                    _..._                  " << endl;
           cout << "                   //''\\\\\\                 " << endl;
           cout << "                   ||. .||                 " << endl;
           cout << "                   |\\ _ /|      (          " << endl;
           cout << "                  .-/\\ /\\-.     )   |      " << endl;
           cout << "                 |  ` \\ '  |    _   |      " << endl;
           cout << "           (     | |  |  | |    H=--+-     " << endl;
           cout << "           ))    | |__|[ | |    U   |      " << endl;
           cout << "           __    \\___(_3/ /     )   |      " << endl;
           cout << "-|_H_H_|---||---------|!|/------|---|---.  " << endl;
           cout << " |_U_U_|  /__\\        |_|      _[_ _|__  \\ " << endl;
           cout << "------------------------------------------` " << endl;
           cout << endl;
           cout << "Your duties are usually limited to routine lab work and errands," << endl;
           cout << "but one day you find a note from the Doc asking you to take his car out for a wash" << endl;
           cout << "and an \"Italian\" tune up." << endl;
           cout << "\"Cool!\" you think, \"These lab fumes are giving me a headache and" << endl;
           cout << "Dr. Brown sure does drive a badass car!\"" << endl;
           cout << "You grab the keys off the counter and head out to the car." << endl;
           EnterToContinue(5);
           cout << "You hop in the car and put on your seat belt, safety first!" << endl;
           cout << "          __---~~~~--__                      __--~~~~---__	" << endl;
           cout << "         `\\---~~~~~~~~\\\\                    //~~~~~~~~---/'  " << endl;
           cout << "           \\/~~~~~~~~~\\||                  ||/~~~~~~~~~\\/ " << endl;
           cout << "                       `\\\\                //'   " << endl;
           cout << "                         `\\\\            //'     " << endl;
           cout << "                           ||          ||      " << endl;
           cout << "                 ______--~~~~~~~~~~~~~~~~~~--______      " << endl;
           cout << "            ___ // _-~                        ~-_ \\\\ ___  " << endl;
           cout << "           `\\__)\\/~                              ~\\/(__/'    " << endl;
           cout << "            _--`-___                            ___-'--_      " << endl;
           cout << "          /~     `\\ ~~~~~~~~------------~~~~~~~~ /'     ~\\    " << endl;
           cout << "         /|        `\\         ________         /'        |\\     " << endl;
           cout << "        | `\\   ______`\\_      \\------/      _/'______   /' |   " << endl;
           cout << "        |   `\\_~-_____\\ ~-________________-~ /_____-~_/'   |  " << endl;
           cout << "        `.     ~-_______________DMC_________________-~    .'     " << endl;
           cout << "         `.      [_______/------|~~|------\\_______]      .' " << endl;
           cout << "          `\\--___((____)(________\\/________)(____))___--/'       " << endl;
           cout << "           |>>>>>>||                            ||<<<<<<|  " << endl;
           cout << "           `\\<<<<</'                            `\\>>>>>/'  " << endl;
           cout << endl;
           cout << "\"The car wash can wait!\" you exclaim, \"Let's do this tune up, Italian style!\"" << endl;
           EnterToContinue(2);
           cout << "You back out of the driveway, put the car into gear, and peel out down the street." << endl;
           cout << "With the pedal to the floor, you shift into second, then third, then fourth, then finally fifth." << endl;
           cout << "\"Hey, it's good for the car,\" you say, \"but that doesn't mean it can't be fun too!!\"" << endl;
           cout << "As the car approaches 88 mph, you reach for a dial on the center console, hoping to find the radio." << endl;
           cout << "And then all of a sudden, BOOM!, a sonic boom explodes in your ears and everything goes black...." << endl;
           EnterToContinue(5);
           for (int i=5; i>0; --i) {
               cout << endl;
               std::this_thread::sleep_for (std::chrono::seconds(1));
           }

           cout << "You find yourself still sitting in the dimly lit interior of the car," << endl;
           cout << "but everything is black outside." << endl;
           cout << "It feels like you're moving, but the speedometer went all the way around and is back at zero." << endl;
           cout << "\"That can't be right,\" you think." << endl;
           cout << "You try to turn on the headlights, nothing. Your turn the handle of the door, it's locked." << endl;
           cout << "Suddenly, Dr. Brown's voice comes on over the car speakers:" << endl;
           cout << "\"Hello " << userName << ", I hope you're enjoying the tune up!\"" << endl;
           cout << "\"Sorry to interrupt, but I have a few errands that I need you to run for me across space and time.\"" << endl;
           cout << "\"You did not think this was just an ordinary car, did you??\"" << endl;
           cout << "\"I have preprogrammed four destinations into the time machine and you must visit each before you can come back.\"" << endl;
           cout << "\"Follow my instructions at each destination, but make haste," << endl;
           cout << "the car will run out of its plutonium fuel in 1 hour!\"" << endl;
           cout << "\"If you're not back by then, you will be stranded forever!\"" << endl;
           cout << "\"Have a fun trip, and if you run into the Sphinx, tell her I said hi!\"" << endl;
           cout << endl;
           cout << "Suddenly, a dim light appears far off in the distance and it grows" << endl;
           cout << "brighter and brighter as you hurtle closer so it." << endl;
           cout << "It becomes so bright that you have to close your eyes!" << endl;
           cout << "Another BOOM! and you open your eyes....." << endl;
           EnterToContinue(8);
           player1->setLocation(ptr2);//Set location to Year1510AD

           ptr2->special(player1);//Go to the year 1510AD
           EnterToContinue(10);
           ptr3->special(player1);//Go to year 2018AD
           EnterToContinue(10);
           ptr4->special(player1);//Go to the year 30AD
           EnterToContinue(10);
           ptr5->special(player1);//Year 400BC
          //Back to the present
          cin.ignore();//Skip newline character
          EnterToContinue(10);
          cout << "You hear the familiar BOOM! as you drop you back onto what looks like the familiar smooth, paved roads of 2015." << endl;
          cout << "You slam on the brakes and exclaim, \"Never again, Doc, never again!\"" << endl;
          cout << "\"You turn the corner and pull into the driveway of Doc's house/lab, and sure enough," << endl;
          cout << "Doc is standing there waiting for you with a big grin on his face." << endl;
          cout << "\"Let's see what you got for me, " << userName << "\" he says." << endl;
          cout << "\"It's all yours,\" you sigh as you exhaustedly heave the backpack off of your shoulder and onto the hood of the car." << endl;
          EnterToContinue(10);
          ptr1->special(player1);

          cout << endl;
          cout << "GAME OVER, THE END!" << endl;
          cout << endl;

          //Deallocate memory
          delete ptr1;
          delete ptr2;
          delete ptr3;
          delete ptr4;
          delete ptr5;
          delete player1;
        }
        else if (choice == 2)
        {
            cout << "The objective is easy, just follow Doc's orders!" << endl;
        }

    } while (choice != 3);

    cout << "Thanks for playing Outta Time....see you next time!"  << endl;

    return 0;
	
}
   
//This function halts the program until the user presses enter
void EnterToContinue(int seconds) {
    for (; seconds>0; --seconds) {
        std::this_thread::sleep_for (std::chrono::seconds(seconds));
    }
    cout << "Press ENTER to continue... " << endl;
    cin.ignore(std::numeric_limits <std::streamsize> ::max(), '\n' );
}



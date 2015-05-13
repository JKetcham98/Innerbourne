//Title: final.cpp
//Author: Joshua Ketcham & Vageesha Dharmadasa
//Description: A text based adventure game
//may 12 2015
#include <iostream>
#include <math.h> //for more math functions
#include <stdlib.h> // for waiting
#include <cstdlib> // for RNG
#include <string> // for string
using namespace std;


int main() 
{ 	//player stats
	int health = 100;
	
	
	
	//interaction
	string i1 = "0";//first interaction



	//enemy stats
	int e1 = rand() % 100 + 1;//Goblin
	
		


	






cout << "This is a game made by Joshua Ketcham and Vageesha Dharmadasa." << endl;
sleep(3);
cout << "\nYou wake up in a cold damp dungeon." << endl;
sleep(2);
cout << "You find a steel dagger on the ground along with a tattered scrap of paper..." << endl;
sleep(2);
cout << "It seems to be a note." << endl;
sleep(2);



cout << "Pick it up(y/n)?" << endl;
cin >> i1;
	if (i1 == "y" || i1 == "yes" || i1 == "Yes" || i1 == "Y" ) {
	cout << "You read the note." << endl;
	sleep(2);
	cout << "It says one thing..." << endl;
	sleep(2);
	cout << "\nSurvive." << endl;
    }
	else {
	cout << "\"Must be nothing.\"" << endl;    
    }
  
  
  
  
  
  
  
  
        
return 0;            
}
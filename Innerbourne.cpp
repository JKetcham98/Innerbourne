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
	int health = 100;//player health
	int steeld = rand() % 5 + 1;//steel dagger
	
	
	//interaction
	string i1 = "0";//first interaction
	string choice = "0";//variable for choices



	//enemy damage
	int d1 = rand() % 5 + 1;//Slime(1)
	
		

	//enemy health
	int h1 = 10;
	



cout << "This is a game made by Joshua Ketcham and Vageesha Dharmadasa." << endl;
sleep(3);
cout << "\nYou wake up in a cold, damp crypt." << endl;
sleep(2);
cout << "You find a steel dagger on the ground along with a tattered scrap of paper..." << endl;
sleep(2);
cout << "It seems to be a note." << endl;
sleep(2);

if (health >=1){//makes sure it ends when you die

cout << "Pick it up(y/n)?" << endl;//note interaction
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
sleep(2);

cout << "You get up and look around to find a path illuminated by torches." << endl;
sleep(2);
cout << "Hopefully this will lead me out." << endl;
sleep(2);
cout << "As you head down the path you come across a slimy beast!" << endl;
 
//Slime battle   
  while (h1 >= 1) {
  	cout << "What would you like to do?" << endl;
  	cout << "1.Attack!\n2.Defend!" << endl;
  	cin >> choice;
  		//start attack
  		if (choice == "1" || choice == "1." || choice == "attack" || choice == "Attack" || choice == "Attack!" || choice == "attack!" || choice == "1.Attack!") {
  		cout << "\nYou deal " h1 - steeld << " damage!" << endl;
  		cout << "You take " << d1 << " damage!" << endl;
  		}//end attack
  	
  		//start defend
  		
  		//end defend
  	}//end fight
  
  

}//ends life statement
else {//starts death statement
cout << "Game over, you suffered a horrific bloody end." << endl;
}//ends death statement
return 0;            
}
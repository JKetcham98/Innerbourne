//Title: final.cpp
//Author: Joshua Ketcham & Vageesha Dharmadasa
//Description: A text based adventure game
//may 12 2015
#include <iostream>
#include <math.h> //for more math functions
#include <stdlib.h> // for waiting
#include <cstdlib> // for RNG
#include <string> // for string
#include <unistd.h> //for sleep on mac
#include <time.h>  // for null
#include <stdio.h> //for time
using namespace std;


int main() 
{ 	//player stats
	int health = 100;//player health
	
	
	
	
	
	//interaction
	string i1 = "0";//first interaction
	string choice = "0";//variable for choices


	

	//enemy health
	int h1 = 10;
	


cout << "This is a game made by Joshua Ketcham and Vageesha Dharmadasa." << endl;
sleep(3);
cout << "\nYou wake up in a cold, damp crypt." << endl;
sleep(2);
cout << "You find a steel dagger on the ground along with a tattered scrap of paper..." << endl;
sleep(2);
cout << "You pick up the dagger and look over at the paper" << endl;
sleep(2);
cout << "It seems to be a note." << endl;
sleep(2);

if (health >=1){//makes sure it ends when you die

cout << "Read it up(y/n)?" << endl;//note interaction
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
cout << "\"Hopefully this will lead me out.\"" << endl;
sleep(2);
cout << "As you head down the path you come across a slimy beast!" << endl;
sleep(2);

//Slime battle   
  while (h1 >= 1) {
  	cout << "What would you like to do?" << endl;
  	cout << "You have " << health << " health, and " << mana << " mana." << endl;
  	cout << "It has " << h1 << " health." << endl;
  	cout << "1.Attack!\n2.Special attack(1 mana)!" << endl;

  	cin >> choice;
  	//character damage
	srand(time(NULL));//so RNG does not repeat the same number 
	int steeld = rand() %5 + 1;//first weapon
	//enemy damage
	srand(time(NULL));
	int d1 = rand() %5 + 3;//Slime(1)
	//RNG Special attack
	srand(time(NULL));
	int spec = rand() %5 + 1;
  	
  		//start attack
  		if (choice == "1" || choice == "1." || choice == "attack" || choice == "Attack" || choice == "Attack!" || choice == "attack!" || choice == "1.Attack!") {
  		sleep(1);
  		cout << "You chose attack!" << endl;
  		sleep(1);
  		cout << "\nYou deal " << steeld << " damage!" << endl;//damage dealt statement
  		h1 -= steeld;//subtract health from enemy
  		sleep(1);
  		}//end attack
  	
  		//start special attack
  		else {
  		sleep(1);
  		cout << "You use a special attack." << endl;
  		sleep(1);
  			//Hallowed blaze + 10 base damage
  			if (spec == 1) {
  			cout << "You used Hallowed Blaze!" << endl;
  			h1 -= 15;
  			sleep(1);
  			cout << "You dealt 15 damage!" << endl;
  			}
  			
  			//Critical slash x2
  			if (spec == 2) {
  			cout << "You used Critical Smite!" << endl;
  			h1 -= (steeld * 2);
  			sleep(1);
  			cout << "You dealt " << steeld * 2 << " damage!" << endl;
  			}
  			
  			//Divine infusion 4 + normal attack
  			if (spec == 3) {
  			cout << "You used Divine Infusion!" << endl;
  			h1 -= 7;
  			h1 -= steeld;
  			sleep(1);
  			cout << "You dealt " << steeld + 7 << " damage!" << endl;
  			}
  			
  			//Vitalic Drain saps 5 hp
  			if (spec == 4) {
  			cout << "You used Vitalic Drain!" << endl;
  			h1 -= 5;
  			health += 5;
  			sleep(1);
  			cout << "You sapped 5 health!" << endl;
  			}
  			sleep(1);
  		}//end special attack
  		
  		cout << "You take " << d1 << " damage!\n\n\n" << endl;//damage taken
  		health -= d1;
  		
  	sleep(2);
  	}//end fight
  
cout << "You managed to slay the beast!" << endl;
  

}//ends life statement
else {//starts death statement
cout << "Game over, you suffered a horrific bloody end." << endl;
}//ends death statement
return 0;            
}
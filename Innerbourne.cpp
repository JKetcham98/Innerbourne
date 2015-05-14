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
	int mana = 5;//player mana
	
	
	
	
	//interaction
	string i1 = "0";//first interaction
	string choice = "0";//variable for choices


	

	//enemy health
	int h1 = 10;//slime
	int h2 = 25;//goblin
	int h3 = 10;//skeleton

cout << "This is a game made by Joshua Ketcham and Vageesha Dharmadasa.(turn on your sound)\n" << endl;
sleep(3);
cout << "Innerbourne" << endl;
sleep(3);
cout << "\nYou enter a cold, damp crypt." << endl;
sleep(2);
cout << "You take out your steel dagger from its scabbard." << endl;
sleep(1);
cout << "You scan the dimly lit ground, there seems to be a piece of paper lying there." << endl;
sleep(2);
cout << "You look over at the paper" << endl;
sleep(2);
cout << "It seems to be a note." << endl;
sleep(2);

if (health >=1){//makes sure it ends when you die

cout << "Read it up(y/n)?" << endl;//note interaction
cin >> i1;
	if (i1 == "y" || i1 == "yes" || i1 == "Yes" || i1 == "Y" ) {
	cout << "You read the note." << endl;
	sleep(2);
	cout << "It's a story, a few parts are missing" << endl;
	sleep(2);
	cout << "\"Long ago, there was a place called Ro’calin, the biggest of the three great kingdoms.\"" << endl;
	sleep(1);
	cout << "\".... These once vast and majestic empires were locked in an eternal war with demon queen Liana\"" << endl;
	sleep(1);
	cout << "\" For years the battle raged on, neither side could overtake the other.\"" << endl;
	sleep(1);
	cout << "\"Tired of this, Liana summoned the three heirs to the realm of the dead;\"" << endl;
	sleep(1);
	cout << "\"Azazel, Abaddon, and Astaroth:\"" << endl;
	sleep(2);
	cout << "\"The Demonic Trinity.\"" << endl;
	cout << "\"Seeing this, the celestial trine; the defenders of the heavens; \nsent their newborn down from the clouds to slay the demonic trinity.\"" << endl;
	sleep(1);
	cout << "\" They were known as\"" << sleep(1) << "." << sleep(1) << "." << sleep (1) << "." << endl;
	cout << "\"Innerbourne.\"" << endl;
	cout << "The rest is illegible." << endl; 
    	}
	else {
	cout << "\"Must be nothing.\"" << endl;    
    	}
	sleep(2);

cout << "You get up and look around to find a path illuminated by torches." << endl;
sleep(2);
cout << "\"Hopefully this will lead me out.\"\n\n" << endl;
sleep(2);
cout << "As you head down the path you come across a slimy beast!" << endl;
sleep(2);

//Slime battle   
  while (h1 >= 1) {
    cout << "You have " << health << " health, and " << mana << " mana." << endl;
  	cout << "It has " << h1 << " health.\n" << endl;
  	
  	cout << "What would you like to do?" << endl;
  	cout << "1.Attack!\n2.Special attack(1 mana)!" << endl;

  	cin >> choice;
  	//character damage
	srand(time(NULL));//so RNG does not repeat the same number 
	int steeld = rand() %5 + 1;//first weapon
	//enemy damage
	srand(time(NULL));
	int d1 = rand() %2 + 1;//Slime(1)
	//RNG Special attack
	srand(time(NULL));
	int spec = rand() %4 + 1;
  	
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
  		mana -= 1;
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
  		
  		cout << "You take " << d1 << " damage!\n\n\n\n\n" << endl;//damage taken
  		health -= d1;
  		
  	sleep(2);
  	}//end fight
  
cout << "You managed to slay the slime!\n" << endl;
cout << "You rest for a moment and gain 1 mana back" <<endl;
mana += 1;
cout << "As you travel down the tunnel the path splits." << endl;
cout << "Would you like to go left or right(l/r)?" << endl;
cin >> choice;

//start tunnel split
//left
if (choice == "left" || choice == "l" || choice == "Left" || choice == "left." || choice == "Left."){
//Goblin battle   
  while (h1 >= 1) {
    cout << "You have " << health << " health, and " << mana << " mana." << endl;
  	cout << "It has " << h2 << " health.\n" << endl;
  	
  	cout << "What would you like to do?" << endl;
  	cout << "1.Attack!\n2.Special attack(1 mana)!" << endl;

  	cin >> choice;
  	//character damage
	srand(time(NULL));//so RNG does not repeat the same number 
	int steeld = rand() %5 + 1;//first weapon
	//enemy damage
	srand(time(NULL));
	int d2 = rand() %3 + 1;//goblin
	//RNG Special attack
	srand(time(NULL));
	int spec = rand() %4 + 1;
  	
  		//start attack
  		if (choice == "1" || choice == "1." || choice == "attack" || choice == "Attack" || choice == "Attack!" || choice == "attack!" || choice == "1.Attack!") {
  		sleep(1);
  		cout << "You chose attack!" << endl;
  		sleep(1);
  		cout << "\nYou deal " << steeld << " damage!" << endl;//damage dealt statement
  		h2 -= steeld;//subtract health from enemy
  		sleep(1);
  		}//end attack
  	
  		//start special attack
  		else {
  		sleep(1);
  		cout << "You use a special attack." << endl;
  		mana -= 1;
  		sleep(1);
  			//Hallowed blaze + 10 base damage
  			if (spec == 1) {
  			cout << "You used Hallowed Blaze!" << endl;
  			h2 -= 15;
  			sleep(1);
  			cout << "You dealt 15 damage!" << endl;
  			}
  			
  			//Critical slash x2
  			if (spec == 2) {
  			cout << "You used Critical Smite!" << endl;
  			h2 -= (steeld * 2);
  			sleep(1);
  			cout << "You dealt " << steeld * 2 << " damage!" << endl;
  			}
  			
  			//Divine infusion 4 + normal attack
  			if (spec == 3) {
  			cout << "You used Divine Infusion!" << endl;
  			h2 -= 7;
  			h2 -= steeld;
  			sleep(1);
  			cout << "You dealt " << steeld + 7 << " damage!" << endl;
  			}
  			
  			//Vitalic Drain saps 5 hp
  			if (spec == 4) {
  			cout << "You used Vitalic Drain!" << endl;
  			h2 -= 5;
  			health += 5;
  			sleep(1);
  			cout << "You sapped 5 health!" << endl;
  			}
  			sleep(1);
  		}//end special attack
  		
  		cout << "You take " << d2 << " damage!\n\n\n\n\n" << endl;//damage taken
  		health -= d2;
  		
  	sleep(2);
  	}//end fight


}//left tunnel ends  

//right tunnel starts
//Skeleton battle 
else {  
  while (h1 >= 1) {
    cout << "You have " << health << " health, and " << mana << " mana." << endl;
  	cout << "It has " << h3 << " health.\n" << endl;
  	
  	cout << "What would you like to do?" << endl;
  	cout << "1.Attack!\n2.Special attack(1 mana)!" << endl;

  	cin >> choice;
  	//character damage
	srand(time(NULL));//so RNG does not repeat the same number 
	int steeld = rand() %5 + 1;//first weapon
	//enemy damage
	srand(time(NULL));
	int d3 = rand() %5 + 2;//goblin
	//RNG Special attack
	srand(time(NULL));
	int spec = rand() %4 + 1;
  	
  		//start attack
  		if (choice == "1" || choice == "1." || choice == "attack" || choice == "Attack" || choice == "Attack!" || choice == "attack!" || choice == "1.Attack!") {
  		sleep(1);
  		cout << "You chose attack!" << endl;
  		sleep(1);
  		cout << "\nYou deal " << steeld << " damage!" << endl;//damage dealt statement
  		h3 -= steeld;//subtract health from enemy
  		sleep(1);
  		}//end attack
  	
  		//start special attack
  		else {
  		sleep(1);
  		cout << "You use a special attack." << endl;
  		mana -= 1;
  		sleep(1);
  			//Hallowed blaze + 10 base damage
  			if (spec == 1) {
  			cout << "You used Hallowed Blaze!" << endl;
  			h3 -= 15;
  			sleep(1);
  			cout << "You dealt 15 damage!" << endl;
  			}
  			
  			//Critical slash x2
  			if (spec == 2) {
  			cout << "You used Critical Smite!" << endl;
  			h3 -= (steeld * 2);
  			sleep(1);
  			cout << "You dealt " << steeld * 2 << " damage!" << endl;
  			}
  			
  			//Divine infusion 4 + normal attack
  			if (spec == 3) {
  			cout << "You used Divine Infusion!" << endl;
  			h3 -= 7;
  			h3 -= steeld;
  			sleep(1);
  			cout << "You dealt " << steeld + 7 << " damage!" << endl;
  			}
  			
  			//Vitalic Drain saps 5 hp
  			if (spec == 4) {
  			cout << "You used Vitalic Drain!" << endl;
  			h3 -= 5;
  			health += 5;
  			sleep(1);
  			cout << "You sapped 5 health!" << endl;
  			}
  			sleep(1);
  		}//end special attack
  		
  		cout << "You take " << d3 << " damage!\n\n\n\n\n" << endl;//damage taken
  		health -= d3;
  		
  	sleep(2);
  	}//end fight
}//ends right


}//ends life statement
else {//starts death statement
cout << "Game over, you suffered a horrific bloody end." << endl;
}//ends death statement
return 0;            
}
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
#include <time.h> // for null
#include <stdio.h> //for time
#include <fstream> //for art
using namespace std;


int main() 
{ 	//player stats
	int health = 100;//player health
	int mana = 5;//player mana
	string name = "0";//player name
	
	
	
	
	//interaction
	string choice = "0";//variable for choices
	string i1 = "0";//first interaction
	string i2 = "0";//second interaction
	string i3 = "0";//third interaction
	string i4 = "0";//fourth interaction


	//sword identifiers
	int s1 = 1;//dagger
	int s2 = 0;//long sword
	int s3 = 0;//claymore

	
	//enemy health
	int h1 = 10;//slime
	int h2 = 25;//goblin
	int h3 = 10;//skeleton
	int h4 = 30;//giant slime
	int h5 = 25;//goblin chief
	int h6 = 50;//troll
	int h7 = 65;//Minotaur
	int h8 = 150;//Hydra
	int h9 = 200;//Sentinel 
	int h10 = 200;//Inferno demon form
	int h11 = 400;//Snake form
	int h12 = 700;//final Satan form
	
cout << "Please enter your name(no spaces)." << endl;
cin >> name;
if (name == "hardmode" || name == "Hardmode" || name == "Hard Mode" || name == "hard mode") {//alt. mode
cout << "Hard Mode Activated." << endl;
sleep(1);
cout << "Enemies now have health regeneration" << endl;
sleep(2);
cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
cout << "This is a game made by Joshua Ketcham and Vageesha Dharmadasa.(Don't spam buttons)\n" << endl;
sleep(3);
cout << " ▄█  ███▄▄▄▄   ███▄▄▄▄      ▄████████    ▄████████      ▀█████████▄   ▄██████▄  ███    █▄     ▄████████ ███▄▄▄▄      ▄████████ " << endl;
cout << "███  ███▀▀▀██▄ ███▀▀▀██▄   ███    ███   ███    ███        ███    ███ ███    ███ ███    ███   ███    ███ ███▀▀▀██▄   ███    ███ " << endl;
cout << "███▌ ███   ███ ███   ███   ███    █▀    ███    ███        ███    ███ ███    ███ ███    ███   ███    ███ ███   ███   ███    █▀  " << endl;
cout << "███▌ ███   ███ ███   ███  ▄███▄▄▄      ▄███▄▄▄▄██▀       ▄███▄▄▄██▀  ███    ███ ███    ███  ▄███▄▄▄▄██▀ ███   ███  ▄███▄▄▄     " << endl;
cout << "███▌ ███   ███ ███   ███ ▀▀███▀▀▀     ▀▀███▀▀▀▀▀        ▀▀███▀▀▀██▄  ███    ███ ███    ███ ▀▀███▀▀▀▀▀   ███   ███ ▀▀███▀▀▀     " << endl;
cout << "███  ███   ███ ███   ███   ███    █▄  ▀███████████        ███    ██▄ ███    ███ ███    ███ ▀███████████ ███   ███   ███    █▄  " << endl;
cout << "███  ███   ███ ███   ███   ███    ███   ███    ███        ███    ███ ███    ███ ███    ███   ███    ███ ███   ███   ███    ███ " << endl;
cout << "█▀    ▀█   █▀   ▀█   █▀    ██████████   ███    ███      ▄█████████▀   ▀██████▀  ████████▀    ███    ███  ▀█   █▀    ██████████ " << endl;  
cout << "                                        ███    ███                                           ███    ███                        " << endl;
sleep(3);
}
if (name == "213374u") {//cheat codes
health += 1000;
mana += 550;
cout << "Activated." << endl;
sleep(2);
cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
cout << "This is a game made by Joshua Ketcham and Vageesha Dharmadasa.(Don't spam buttons)\n" << endl;
sleep(3);
cout << " ▄█  ███▄▄▄▄   ███▄▄▄▄      ▄████████    ▄████████      ▀█████████▄   ▄██████▄  ███    █▄     ▄████████ ███▄▄▄▄      ▄████████ " << endl;
cout << "███  ███▀▀▀██▄ ███▀▀▀██▄   ███    ███   ███    ███        ███    ███ ███    ███ ███    ███   ███    ███ ███▀▀▀██▄   ███    ███ " << endl;
cout << "███▌ ███   ███ ███   ███   ███    █▀    ███    ███        ███    ███ ███    ███ ███    ███   ███    ███ ███   ███   ███    █▀  " << endl;
cout << "███▌ ███   ███ ███   ███  ▄███▄▄▄      ▄███▄▄▄▄██▀       ▄███▄▄▄██▀  ███    ███ ███    ███  ▄███▄▄▄▄██▀ ███   ███  ▄███▄▄▄     " << endl;
cout << "███▌ ███   ███ ███   ███ ▀▀███▀▀▀     ▀▀███▀▀▀▀▀        ▀▀███▀▀▀██▄  ███    ███ ███    ███ ▀▀███▀▀▀▀▀   ███   ███ ▀▀███▀▀▀     " << endl;
cout << "███  ███   ███ ███   ███   ███    █▄  ▀███████████        ███    ██▄ ███    ███ ███    ███ ▀███████████ ███   ███   ███    █▄  " << endl;
cout << "███  ███   ███ ███   ███   ███    ███   ███    ███        ███    ███ ███    ███ ███    ███   ███    ███ ███   ███   ███    ███ " << endl;
cout << "█▀    ▀█   █▀   ▀█   █▀    ██████████   ███    ███      ▄█████████▀   ▀██████▀  ████████▀    ███    ███  ▀█   █▀    ██████████ " << endl;  
cout << "                                        ███    ███                                           ███    ███                        " << endl;
sleep(3);
}
if (name == "Innerborune" || name == "innerborune" ) {//easter egg
cout << "Activated." << endl;
sleep(2);
cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
cout << "This is a game made by Joshua Ketcham and Vageesha Dharmadasa.(Don't spam buttons)\n" << endl;
sleep(3);
cout << " ▄█  ███▄▄▄▄   ███▄▄▄▄      ▄████████    ▄████████      ▀█████████▄   ▄██████▄     ▄████████ ███    █▄  ███▄▄▄▄      ▄████████ " << endl;
cout << "███  ███▀▀▀██▄ ███▀▀▀██▄   ███    ███   ███    ███        ███    ███ ███    ███   ███    ███ ███    ███ ███▀▀▀██▄   ███    ███ " << endl;
cout << "███▌ ███   ███ ███   ███   ███    █▀    ███    ███        ███    ███ ███    ███   ███    ███ ███    ███ ███   ███   ███    █▀  " << endl;
cout << "███▌ ███   ███ ███   ███  ▄███▄▄▄      ▄███▄▄▄▄██▀       ▄███▄▄▄██▀  ███    ███  ▄███▄▄▄▄██▀ ███    ███ ███   ███  ▄███▄▄▄     " << endl;
cout << "███▌ ███   ███ ███   ███ ▀▀███▀▀▀     ▀▀███▀▀▀▀▀        ▀▀███▀▀▀██▄  ███    ███ ▀▀███▀▀▀▀▀   ███    ███ ███   ███ ▀▀███▀▀▀     " << endl;
cout << "███  ███   ███ ███   ███   ███    █▄  ▀███████████        ███    ██▄ ███    ███ ▀███████████ ███    ███ ███   ███   ███    █▄  " << endl;
cout << "███  ███   ███ ███   ███   ███    ███   ███    ███        ███    ███ ███    ███   ███    ███ ███    ███ ███   ███   ███    ███ " << endl;  
cout << "█▀    ▀█   █▀   ▀█   █▀    ██████████   ███    ███      ▄█████████▀   ▀██████▀    ███    ███ ████████▀   ▀█   █▀    ██████████ " << endl;
cout << "                                        ███    ███                                ███    ███                                   " << endl;
}
else {//regular game
sleep(2);
cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
cout << "This is a game made by Joshua Ketcham and Vageesha Dharmadasa.(Don't spam buttons)\n" << endl;
sleep(3);
cout << " ▄█  ███▄▄▄▄   ███▄▄▄▄      ▄████████    ▄████████      ▀█████████▄   ▄██████▄  ███    █▄     ▄████████ ███▄▄▄▄      ▄████████ " << endl;
cout << "███  ███▀▀▀██▄ ███▀▀▀██▄   ███    ███   ███    ███        ███    ███ ███    ███ ███    ███   ███    ███ ███▀▀▀██▄   ███    ███ " << endl;
cout << "███▌ ███   ███ ███   ███   ███    █▀    ███    ███        ███    ███ ███    ███ ███    ███   ███    ███ ███   ███   ███    █▀  " << endl;
cout << "███▌ ███   ███ ███   ███  ▄███▄▄▄      ▄███▄▄▄▄██▀       ▄███▄▄▄██▀  ███    ███ ███    ███  ▄███▄▄▄▄██▀ ███   ███  ▄███▄▄▄     " << endl;
cout << "███▌ ███   ███ ███   ███ ▀▀███▀▀▀     ▀▀███▀▀▀▀▀        ▀▀███▀▀▀██▄  ███    ███ ███    ███ ▀▀███▀▀▀▀▀   ███   ███ ▀▀███▀▀▀     " << endl;
cout << "███  ███   ███ ███   ███   ███    █▄  ▀███████████        ███    ██▄ ███    ███ ███    ███ ▀███████████ ███   ███   ███    █▄  " << endl;
cout << "███  ███   ███ ███   ███   ███    ███   ███    ███        ███    ███ ███    ███ ███    ███   ███    ███ ███   ███   ███    ███ " << endl;
cout << "█▀    ▀█   █▀   ▀█   █▀    ██████████   ███    ███      ▄█████████▀   ▀██████▀  ████████▀    ███    ███  ▀█   █▀    ██████████ " << endl;  
cout << "                                        ███    ███                                           ███    ███                        " << endl;
sleep(3);
}
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

if (health >= 1){//makes sure it ends when you die

cout << "Read it?(y/n)" << endl;
cin >> i1;
	if (i1 == "y" || i1 == "yes" || i1 == "Yes" || i1 == "Y" ) {//first choice
	cout << "You read the note." << endl;
	sleep(2);
	cout << "It's a story, a few parts are missing" << endl;
	sleep(2);
	cout << "\"Long ago, there was a place called Ro’calin, the biggest of the three great kingdoms.\"" << endl;
	sleep(2);
	cout << "\"These once vast and majestic empires were locked in an eternal war with \ndemon queen Liana\"" << endl;
	sleep(2);
	cout << "\"For years the battle raged on, neither side could overtake the other.\"" << endl;
	sleep(2);
	cout << "\"Tired of this, Liana summoned the three heirs to the realm of the dead;\"" << endl;
	sleep(2);
	cout << "\"Azazel, Abaddon, and Astaroth:\"" << endl;
	sleep(2);
	cout << "\"The Demonic Trinity.\"" << endl;
	cout << "\"Seeing this, the celestial trine; the defenders of the heavens; \nsent their newborn down from the clouds to slay the demonic trinity.\"" << endl;
	sleep(2);
	cout << "\"They were known as\"" << endl;
	sleep(5);
	if (name == "Innerborune" || name == "innerborune" ) {
	
	cout << "\"Innerborune\"" << endl;
		}
	else {
	cout << "\"Innerbourne\"" << endl;
		}
	sleep(2);
	cout << "The rest is illegible." << endl; 
    		}//note interaction
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
while (h1 >= 1 && health >= 1) {
	if (name == "hardmode" || name == "Hardmode" || name == "Hard Mode" || name == "hard mode") {//hard mode health regen
		h1 += 2;
	}
    cout << "You have " << health << " health, and " << mana << " mana." << endl;
  	cout << "It has " << h1 << " health.\n" << endl;
  	
  	cout << "What would you like to do?" << endl;
  	cout << "1.Attack!\n2.Special attack(1 mana)!" << endl;

  	cin >> choice;
  	//character damage
	srand(time(NULL));//so RNG does not repeat the same number 
	int basedmg = rand() %5 + 1;//rng base thst gets added to weapon
	//enemy damage
	srand(time(NULL));
	int d1 = rand() %2 + 1;//Slime(1)
	//RNG Special attack
	srand(time(NULL));
	int spec = rand() %4 + 1;
	//Random health drain
	srand(time(NULL));
	int drain = rand() %10 + 5;
  	
  		//start attack
  		if (choice == "1" || choice == "1." || choice == "attack" || choice == "Attack" || choice == "Attack!" || choice == "attack!" || choice == "1.Attack!") {
  		sleep(1);
  		cout << "You chose attack!" << endl;
  		sleep(1);
  		cout << "\nYou deal " << basedmg << " damage!" << endl;//damage dealt statement
  		h1 -= basedmg;//subtract health from enemy
  		sleep(1);
  		}//end attack
  	
  		//start special attack
  		else {
  		sleep(1);
  		cout << "You use a special attack." << endl;
  		sleep(1);
  		
  			//if there's not enough mana
  				if (mana < 1) {
  					cout << "You are all out of mana!" << endl;
  				}
  				
  			//Hallowed blaze + 10 base damage
  			if (spec == 1 && mana >= 1) {
  			cout << "You used Hallowed Blaze!" << endl;
  			h1 -= 15;
  			sleep(1);
  			cout << "You dealt 15 damage!" << endl;
  			mana -= 1;
  			}
  			
  			//Critical slash x2
  			if (spec == 2 && mana >= 1) {
  			cout << "You used Critical Smite!" << endl;
  			h1 -= (basedmg * 2);
  			sleep(1);
  			cout << "You dealt " << basedmg * 2 << " damage!" << endl;
  			mana -= 1;
  			}
  			
  			//Divine infusion 4 + normal attack
  			if (spec == 3 && mana >=1) {
  			cout << "You used Divine Infusion!" << endl;
  			h1 -= 7;
  			h1 -= basedmg;
  			sleep(1);
  			cout << "You dealt " << basedmg + 7 << " damage!" << endl;
  			mana -= 1;
  			}
  			
  			//Vitalic Drain saps hp
  			if (spec == 4 && mana >= 1) {
  			cout << "You used Vitalic Drain!" << endl;
  			h8 -= drain;
  			health += drain;
			sleep(1);
  			cout << "You sapped " << drain << "health!" << endl;
  			mana -= 1;
  			}
  			
  			
  			sleep(1);
  		}//end special attack
  		
  		cout << "You take " << d1 << " damage!\n\n\n\n\n" << endl;//damage taken
  		health -= d1;
  		
  	sleep(2);
  	if (health <= 0) {//starts death statement
					cout << "   ▄██████▄     ▄████████   ▄▄▄▄███▄▄▄▄      ▄████████       ▄██████▄   ▄█    █▄     ▄████████    ▄████████ " << endl;
					cout << "  ███    ███   ███    ███ ▄██▀▀▀███▀▀▀██▄   ███    ███      ███    ███ ███    ███   ███    ███   ███    ███ " << endl;
					cout << "  ███    █▀    ███    ███ ███   ███   ███   ███    █▀       ███    ███ ███    ███   ███    █▀    ███    ███ " << endl;
					cout << " ▄███          ███    ███ ███   ███   ███  ▄███▄▄▄          ███    ███ ███    ███  ▄███▄▄▄      ▄███▄▄▄▄██▀ " << endl;
					cout << "▀▀███ ████▄  ▀███████████ ███   ███   ███ ▀▀███▀▀▀          ███    ███ ███    ███ ▀▀███▀▀▀     ▀▀███▀▀▀▀▀   " << endl;
					cout << "  ███    ███   ███    ███ ███   ███   ███   ███    █▄       ███    ███ ███    ███   ███    █▄  ▀███████████ " << endl;
					cout << "  ███    ███   ███    ███ ███   ███   ███   ███    ███      ███    ███ ███    ███   ███    ███   ███    ███ " << endl;
					cout << "  ████████▀    ███    █▀   ▀█   ███   █▀    ██████████       ▀██████▀   ▀██████▀    ██████████   ███    ███ " << endl;
					return 0; }//ends death statement
  	}//end fight
  
cout << "You managed to slay the slime!\n" << endl;
sleep(2);
cout << "You rest for a moment and gain 1 mana back" <<endl;
mana += 1;
sleep(2);
cout << "As you travel down the tunnel the path splits." << endl;
sleep(2);
cout << "Would you like to go left or right(l/r)?" << endl;
cin >> choice;

	//start tunnel split
	//left
	if (choice == "left" || choice == "l" || choice == "Left" || choice == "left." || choice == "Left."){
	//Goblin battle   
	cout << "A goblin pounces out at you!" << endl;
	sleep(2);
  	while (h2 >= 1 && health >= 1) {
  	if (name == "hardmode" || name == "Hardmode" || name == "Hard Mode" || name == "hard mode") {//hard mode health regen
		h2 += 3;
	}
    cout << "You have " << health << " health, and " << mana << " mana." << endl;
  	cout << "It has " << h2 << " health.\n" << endl;
  	
  	cout << "What would you like to do?" << endl;
  	cout << "1.Attack!\n2.Special attack(1 mana)!" << endl;

  	cin >> choice;
  	//character damage
	srand(time(NULL));//so RNG does not repeat the same number 
	int basedmg = rand() %5 + 1;//first weapon
	//enemy damage
	srand(time(NULL));
	int d2 = rand() %3 + 2;//goblin
	//RNG Special attack
	srand(time(NULL));
	int spec = rand() %4 + 1;
	//Random health drain
	srand(time(NULL));
	int drain = rand() %10 + 5;
  	
  		//start attack
  		if (choice == "1" || choice == "1." || choice == "attack" || choice == "Attack" || choice == "Attack!" || choice == "attack!" || choice == "1.Attack!") {
  		sleep(1);
  		cout << "You chose attack!" << endl;
  		sleep(1);
  		cout << "\nYou deal " << basedmg << " damage!" << endl;//damage dealt statement
  		h2 -= basedmg;//subtract health from enemy
  		sleep(1);
  		}//end attack
  	
  		//start special attack
  		else {
  		sleep(1);
  		cout << "You use a special attack." << endl;
  		sleep(1);
  		
  			//if there's not enough mana
  				if (mana < 1) {
  					cout << "You are all out of mana!" << endl;
  				}
  				
  			//Hallowed blaze + 10 base damage
  			if (spec == 1 && mana >= 1) {
  			cout << "You used Hallowed Blaze!" << endl;
  			h2 -= 15;
  			sleep(1);
  			cout << "You dealt 15 damage!" << endl;
  			mana -= 1;
  			}
  			
  			//Critical slash x2
  			if (spec == 2 && mana >= 1) {
  			cout << "You used Critical Smite!" << endl;
  			h2 -= (basedmg * 2);
  			sleep(1);
  			cout << "You dealt " << basedmg * 2 << " damage!" << endl;
  			mana -= 1;
  			}
  			
  			//Divine infusion 4 + normal attack
  			if (spec == 3 && mana >= 1) {
  			cout << "You used Divine Infusion!" << endl;
  			h2 -= 7;
  			h2 -= basedmg;
  			sleep(1);
  			cout << "You dealt " << basedmg + 7 << " damage!" << endl;
  			mana -= 1;
  			}
  			
  			//Vitalic Drain saps hp
  			if (spec == 4 && mana >= 1) {
  			cout << "You used Vitalic Drain!" << endl;
  			h8 -= drain;
  			health += drain;
			sleep(1);
  			cout << "You sapped " << drain << "health!" << endl;
  			mana -= 1;
  			}
  			
  			
  			sleep(1);
  		}//end special attack
  		
  		cout << "You take " << d2 << " damage!\n\n\n\n\n" << endl;//damage taken
  		health -= d2;
  		
  	sleep(2);
  	if (health <= 0) {//starts death statement
					cout << "   ▄██████▄     ▄████████   ▄▄▄▄███▄▄▄▄      ▄████████       ▄██████▄   ▄█    █▄     ▄████████    ▄████████ " << endl;
					cout << "  ███    ███   ███    ███ ▄██▀▀▀███▀▀▀██▄   ███    ███      ███    ███ ███    ███   ███    ███   ███    ███ " << endl;
					cout << "  ███    █▀    ███    ███ ███   ███   ███   ███    █▀       ███    ███ ███    ███   ███    █▀    ███    ███ " << endl;
					cout << " ▄███          ███    ███ ███   ███   ███  ▄███▄▄▄          ███    ███ ███    ███  ▄███▄▄▄      ▄███▄▄▄▄██▀ " << endl;
					cout << "▀▀███ ████▄  ▀███████████ ███   ███   ███ ▀▀███▀▀▀          ███    ███ ███    ███ ▀▀███▀▀▀     ▀▀███▀▀▀▀▀   " << endl;
					cout << "  ███    ███   ███    ███ ███   ███   ███   ███    █▄       ███    ███ ███    ███   ███    █▄  ▀███████████ " << endl;
					cout << "  ███    ███   ███    ███ ███   ███   ███   ███    ███      ███    ███ ███    ███   ███    ███   ███    ███ " << endl;
					cout << "  ████████▀    ███    █▀   ▀█   ███   █▀    ██████████       ▀██████▀   ▀██████▀    ██████████   ███    ███ " << endl;
					return 0; }//ends death statement
  	}//end fight


	}//left tunnel ends  

	//right tunnel starts
	//Skeleton battle 
	else {  
 	cout << "A skeleton charges at you!" << endl;
 	sleep(2);	
 	while (h3 >= 1 && health >= 1) {
 	if (name == "hardmode" || name == "Hardmode" || name == "Hard Mode" || name == "hard mode") {//hard mode health regen
		h3 += 3;
	}
    cout << "You have " << health << " health, and " << mana << " mana." << endl;
  	cout << "It has " << h3 << " health.\n" << endl;
  	
  	cout << "What would you like to do?" << endl;
  	cout << "1.Attack!\n2.Special attack(1 mana)!" << endl;

  	cin >> choice;
  	//character damage
	srand(time(NULL));//so RNG does not repeat the same number 
	int basedmg = rand() %5 + 1;//first weapon
	//enemy damage
	srand(time(NULL));
	int d3 = rand() %5 + 2;//skeleton
	//RNG Special attack
	srand(time(NULL));
	int spec = rand() %4 + 1;
	//Random health drain
	srand(time(NULL));
	int drain = rand() %10 + 5;
  	
  		//start attack
  		if (choice == "1" || choice == "1." || choice == "attack" || choice == "Attack" || choice == "Attack!" || choice == "attack!" || choice == "1.Attack!") {
  		sleep(1);
  		cout << "You chose attack!" << endl;
  		sleep(1);
  		cout << "\nYou deal " << basedmg << " damage!" << endl;//damage dealt statement
  		h3 -= basedmg;//subtract health from enemy
  		sleep(1);
  		}//end attack
  	
  		//start special attack
  		else {
  		sleep(1);
  		cout << "You use a special attack." << endl;
  		sleep(1);
  		
  			//if there's not enough mana
  				if (mana < 1) {
  					cout << "You are all out of mana!" << endl;
  				}
  				
  			//Hallowed blaze + 10 base damage
  			if (spec == 1 && mana >= 1) {
  			cout << "You used Hallowed Blaze!" << endl;
  			h3 -= 15;
  			sleep(1);
  			cout << "You dealt 15 damage!" << endl;
  			mana -= 1;
  			}
  			
  			//Critical slash x2
  			if (spec == 2 && mana >= 1) {
  			cout << "You used Critical Smite!" << endl;
  			h3 -= (basedmg * 2);
  			sleep(1);
  			cout << "You dealt " << basedmg * 2 << " damage!" << endl;
  			mana -= 1;
  			}
  			
  			//Divine infusion 4 + normal attack
  			if (spec == 3 && mana >= 1) {
  			cout << "You used Divine Infusion!" << endl;
  			h3 -= 7;
  			h3 -= basedmg;
  			sleep(1);
  			cout << "You dealt " << basedmg + 7 << " damage!" << endl;
  			mana -= 1;
  			}
  			
  			//Vitalic Drain saps hp
  			if (spec == 4 && mana >= 1) {
  			cout << "You used Vitalic Drain!" << endl;
  			h8 -= drain;
  			health += drain;
			sleep(1);
  			cout << "You sapped " << drain << "health!" << endl;
  			mana -= 1;
  			}
  			
  			
  			sleep(1);
  			}//end special attack
  		
  		cout << "You take " << d3 << " damage!\n\n\n\n\n" << endl;//damage taken
  		health -= d3;
  		
  		sleep(2);
  		if (health <= 0) {//starts death statement
					cout << "   ▄██████▄     ▄████████   ▄▄▄▄███▄▄▄▄      ▄████████       ▄██████▄   ▄█    █▄     ▄████████    ▄████████ " << endl;
					cout << "  ███    ███   ███    ███ ▄██▀▀▀███▀▀▀██▄   ███    ███      ███    ███ ███    ███   ███    ███   ███    ███ " << endl;
					cout << "  ███    █▀    ███    ███ ███   ███   ███   ███    █▀       ███    ███ ███    ███   ███    █▀    ███    ███ " << endl;
					cout << " ▄███          ███    ███ ███   ███   ███  ▄███▄▄▄          ███    ███ ███    ███  ▄███▄▄▄      ▄███▄▄▄▄██▀ " << endl;
					cout << "▀▀███ ████▄  ▀███████████ ███   ███   ███ ▀▀███▀▀▀          ███    ███ ███    ███ ▀▀███▀▀▀     ▀▀███▀▀▀▀▀   " << endl;
					cout << "  ███    ███   ███    ███ ███   ███   ███   ███    █▄       ███    ███ ███    ███   ███    █▄  ▀███████████ " << endl;
					cout << "  ███    ███   ███    ███ ███   ███   ███   ███    ███      ███    ███ ███    ███   ███    ███   ███    ███ " << endl;
					cout << "  ████████▀    ███    █▀   ▀█   ███   █▀    ██████████       ▀██████▀   ▀██████▀    ██████████   ███    ███ " << endl;
					return 0; }//ends death statement
  		}//end fight
	}//ends right
	
	
	
	
	
//start second tunnel
cout << "You go down the tunnel, it seems like the two paths converge into one anyways" << endl;
sleep(1);
cout << "There's a map on the ground, pick it up? (y/n)" << endl;
cin >> i2;
	if (i2 == "y" || i2 == "yes" || i2 == "Yes" || i2 == "Y" ) {//Map
		cout << "+------------+   +------------------------+" << endl;
		cout << "|            |   |                        |" << endl;
		cout << "|            |   |        +---------+     |" << endl;
		cout << "|            |   |        |         |     |" << endl;
		cout << "|       +----+   +-----   |    X    |     |" << endl;
		cout << "|       |             |   |         |     |" << endl;
		cout << "|       |   +-----+   |   +-+  +----+     |" << endl;
		cout << "|       |   |     |   |     |  |          |" << endl;
		cout << "|       |   +-----+   |     |  |          |" << endl;
		cout << "|       |             |     |  |          |" << endl;
		cout << "|       +----+   +----+     |  |          |" << endl;
		cout << "+----+       |   |          |  |          |" << endl;
		cout << "     |       | v |          |  |          |" << endl;
		cout << "+-+  |       |   |          |  |          |" << endl;
		cout << "| |  |       |   |          |  |          |" << endl;
		cout << "| |  +-------+   +----------+  |          |" << endl;
		cout << "| |                            |          |" << endl;
		cout << "| +----------------------------+          |" << endl;
		cout << "+-----------------------------------------+" << endl;
		sleep(6);
		cout << "\"It seems to be a map of the crypt..\"" << endl;
		}//map interaction
	else {
		cout << "You shuffle along the pathway" << endl;
		}
cout << "As you walk along, the tunnel splits into 2 paths" << endl;
sleep(1);
cout << "Which one will you take?(l/r)" << endl;
cin >> choice;
	if (choice == "left" || choice == "l" || choice == "Left" || choice == "left." || choice == "Left."){
		cout << "You turn left and walk into the darkness." << endl;
		sleep(2);
		cout << "You walk into what appears to be a large room" << endl;
		sleep(3);
		cout << "\"There's something on the wall....\"" << endl;
		sleep(2);
		cout << "You realize too late, the walls are covered in slime!" << endl;
		sleep(2);
		cout << "You try and escape but the slime blocks the exit" << endl;
		sleep(2);
		cout << "You pull out your dagger...." << endl;
		
			while (h4 >= 1 && health >= 1) {//giant slime battle
			if (name == "hardmode" || name == "Hardmode" || name == "Hard Mode" || name == "hard mode") {//hard mode health regen
				h4 += 4;
			}
    			cout << "You have " << health << " health, and " << mana << " mana." << endl;
  				cout << "It has " << h4 << " health.\n" << endl;
  	
  				cout << "What would you like to do?" << endl;
  				cout << "1.Attack!\n2.Special attack(1 mana)!" << endl;

  				cin >> choice;
  				//character damage
				srand(time(NULL));//so RNG does not repeat the same number 
				int basedmg = rand() %5 + 1;//first weapon
				//enemy damage
				srand(time(NULL));
				int d4 = rand() %7 + 4;//giant slime
				//RNG Special attack
				srand(time(NULL));
				int spec = rand() %4 + 1;
				//Random health drain
				srand(time(NULL));
				int drain = rand() %10 + 5;
  	
  				//start attack
  				if (choice == "1" || choice == "1." || choice == "attack" || choice == "Attack" || choice == "Attack!" || choice == "attack!" || choice == "1.Attack!") {
  				sleep(1);
  				cout << "You chose attack!" << endl;
  				sleep(1);
  				cout << "\nYou deal " << basedmg << " damage!" << endl;//damage dealt statement
  				h4 -= basedmg;//subtract health from enemy
  				sleep(1);
  				}//end attack
  	
  				//start special attack
  				else {
  				sleep(1);
  				cout << "You use a special attack." << endl;
  				sleep(1);
  				
  				//if there's not enough mana
  				if (mana < 1) {
  					cout << "You are all out of mana!" << endl;
  				}
  				
  				//Hallowed blaze + 10 base damage
  				if (spec == 1 && mana >= 1) {
  				cout << "You used Hallowed Blaze!" << endl;
  				h4 -= 15;
  				sleep(1);
  				cout << "You dealt 15 damage!" << endl;
  				mana -= 1;
  				}
  			
  				//Critical slash x2
  				if (spec == 2 && mana >= 1) {
  				cout << "You used Critical Smite!" << endl;
  				h4 -= (basedmg * 2);
  				sleep(1);
  				cout << "You dealt " << basedmg * 2 << " damage!" << endl;
  				mana -= 1;
  				}
  			
  				//Divine infusion 4 + normal attack
  				if (spec == 3 && mana >= 1) {
  				cout << "You used Divine Infusion!" << endl;
  				h4 -= 7;
  				h4 -= basedmg;
  				sleep(1);
  				cout << "You dealt " << basedmg + 7 << " damage!" << endl;
  				mana -= 1;
  				}
  				
				//Vitalic Drain saps hp
  				if (spec == 4 && mana >= 1) {
  				cout << "You used Vitalic Drain!" << endl;
  				h8 -= drain;
  				health += drain;
				sleep(1);
  				cout << "You sapped " << drain << "health!" << endl;
  				mana -= 1;
  				}
  				
  				
  				sleep(1);
  				}//end special attack
  		
  				cout << "You take " << d4 << " damage!\n\n\n\n\n" << endl;//damage taken
  				health -= d4;
  		
  				sleep(2);
  				if (health <= 0) {//starts death statement
					cout << "   ▄██████▄     ▄████████   ▄▄▄▄███▄▄▄▄      ▄████████       ▄██████▄   ▄█    █▄     ▄████████    ▄████████ " << endl;
					cout << "  ███    ███   ███    ███ ▄██▀▀▀███▀▀▀██▄   ███    ███      ███    ███ ███    ███   ███    ███   ███    ███ " << endl;
					cout << "  ███    █▀    ███    ███ ███   ███   ███   ███    █▀       ███    ███ ███    ███   ███    █▀    ███    ███ " << endl;
					cout << " ▄███          ███    ███ ███   ███   ███  ▄███▄▄▄          ███    ███ ███    ███  ▄███▄▄▄      ▄███▄▄▄▄██▀ " << endl;
					cout << "▀▀███ ████▄  ▀███████████ ███   ███   ███ ▀▀███▀▀▀          ███    ███ ███    ███ ▀▀███▀▀▀     ▀▀███▀▀▀▀▀   " << endl;
					cout << "  ███    ███   ███    ███ ███   ███   ███   ███    █▄       ███    ███ ███    ███   ███    █▄  ▀███████████ " << endl;
					cout << "  ███    ███   ███    ███ ███   ███   ███   ███    ███      ███    ███ ███    ███   ███    ███   ███    ███ " << endl;
					cout << "  ████████▀    ███    █▀   ▀█   ███   █▀    ██████████       ▀██████▀   ▀██████▀    ██████████   ███    ███ " << endl;
					return 0; }//ends death statement
  			} // end giant slime fight
		cout << "The giant slime disintegrates, leaving behind a sword, probably from \none of it's past victims" << endl;
		sleep(2);
		cout << "Pick it up?(y/n)" << endl; 
		cin >> i3;
			if (i3 == "y" || i3 == "yes" || i3 == "Yes" || i3 == "Y" ) {	
				s2++ ;
				s1-- ;
				cout << "You pick it up." << endl;
				sleep(2);
				cout << "The blade makes you feel more powerful" << endl;
				sleep(1);
				cout << "*damage has been increased!*\n*special damage increased!*" << endl;
				
				sleep(2);
				}
			else {
				cout << "\"I think i'll stick with my trusty steel dagger for now.\"\n" << endl;
				sleep(2);
			}
		cout << "You walk back to the place where the tunnel splits" << endl;
		sleep(2);
		}
	if (choice == "right" || choice == "Right" || choice == "r" || choice == "Right." || choice == "right.") {
		cout << "You take a right" << endl;
		sleep(2);
		}
	cout << "A stairway appears into your view" << endl;
	sleep(2);
	cout << "You're almost there..." << endl;
	sleep(2);
	cout << "You see a figure out of the corner of your eye" << endl;
	sleep(1);
	cout << "It's a goblin chief!" << endl;
	sleep(2);
		if (s2 == 1) {
			cout << "You take out your newfound sword, its time to fight!\n" << endl;
			}
		else {
			cout << "You take out your dagger, ready for an attack.\n" << endl;
			}
sleep(2);
while (h5 >= 1 && health >= 1) {//goblin chief attack
	if (name == "hardmode" || name == "Hardmode" || name == "Hard Mode" || name == "hard mode") {//hard mode health regen
		h5 += 7;
	}
    			cout << "You have " << health << " health, and " << mana << " mana." << endl;
  				cout << "It has " << h5 << " health.\n" << endl;
  	
  				cout << "What would you like to do?" << endl;
  				cout << "1.Attack!\n2.Special attack(1 mana)!" << endl;

  				cin >> choice;
  				//character damage
				
				srand(time(NULL));//so RNG does not repeat the same number 
				int basedmg = rand() %5 + 1;//first weapon
				srand(time(NULL));
				int lsword = rand() %20 + 5;//second weapon
				//enemy damage
				srand(time(NULL));
				int d5 = rand() %15 + 4;//goblin chief
				//RNG Special attack
				srand(time(NULL));
				int spec = rand() %4 + 1;
				//Random health drain
				srand(time(NULL));
				int drain = rand() %15 + 5;
  	
  				//start attack
  				if (choice == "1" || choice == "1." || choice == "attack" || choice == "Attack" || choice == "Attack!" || choice == "attack!" || choice == "1.Attack!") {
  					if (s2 == 1) {
  						sleep(1);
  						cout << "You chose attack!" << endl;
  						sleep(1);
  						cout << "\nYou deal " << lsword << " damage!" << endl;//damage dealt statement
  						h5 -= lsword;//subtract health from enemy
  						sleep(1);
  					}
  					if (s1 == 1) {
  						sleep(1);
  						cout << "You chose attack!" << endl;
  						sleep(1);
  						cout << "\nYou deal " << basedmg << " damage!" << endl;//damage dealt statement
  						h5 -= basedmg;//subtract health from enemy
  						sleep(1);
  					}
  				}//end attack
  	
  				//start special attack
  				else {
  				sleep(1);
  				cout << "You use a special attack." << endl;
  				sleep(1);
  				
  				//if there's not enough mana
  				if (mana < 1) {
  					cout << "You are all out of mana!" << endl;
  				}
  				
  				//Hallowed blaze + 10 base damage
  				if (spec == 1 && mana >= 1) {
  				cout << "You used Hallowed Blaze!" << endl;
  				h5 -= 15;
  				sleep(1);
  				cout << "You dealt 15 damage!" << endl;
  				mana -= 1;
  				}
  			
  				//Critical slash x2
  				if (spec == 2 && mana >= 1) {
  					if (s1 == 1) {
  						cout << "You used Critical Smite!" << endl;
  						h5 -= (basedmg * 2);
  						sleep(1);
  						cout << "You dealt " << basedmg * 2 << " damage!" << endl;
  						mana -= 1;
  					}
  					if (s2 == 1) {
  						cout << "You used Critical Smite!" << endl;
  						h5 -= (lsword * 2);
  						sleep(1);
  						cout << "You dealt " << lsword * 2 << " damage!" << endl;
  						mana -= 1;
  					}
  				}
  			
  				//Divine infusion 4 + normal attack
  				if (spec == 3 && mana >= 1) {
  					if (s1 == 1) {
  						cout << "You used Divine Infusion!" << endl;
  						h5 -= 7;
  						h5 -= basedmg;
  						sleep(1);
  						cout << "You dealt " << basedmg + 7 << " damage!" << endl;
  						mana -= 1;
					} 
					if (s2 == 1) {
  						cout << "You used Divine Infusion!" << endl;
  						h5 -= 7;
  						h5 -= lsword;
  						sleep(1);
  						cout << "You dealt " << lsword + 7 << " damage!" << endl;
  						mana -= 1;
					} 				
  				}
  				
  				//Vitalic Drain saps hp
  				if (spec == 4 && mana >= 1) {
  				cout << "You used Vitalic Drain!" << endl;
  				h8 -= drain;
  				health += drain;
  				sleep(1);
  				cout << "You sapped " << drain << "health!" << endl;
  				mana -= 1;
  				}
  				
  				
  				sleep(1);
  				}//end special attack
  		
  				cout << "You take " << d5 << " damage!\n\n\n\n\n" << endl;//damage taken
  				health -= d5;
  		
  				sleep(2);
  				if (health <= 0) {//starts death statement
					cout << "   ▄██████▄     ▄████████   ▄▄▄▄███▄▄▄▄      ▄████████       ▄██████▄   ▄█    █▄     ▄████████    ▄████████ " << endl;
					cout << "  ███    ███   ███    ███ ▄██▀▀▀███▀▀▀██▄   ███    ███      ███    ███ ███    ███   ███    ███   ███    ███ " << endl;
					cout << "  ███    █▀    ███    ███ ███   ███   ███   ███    █▀       ███    ███ ███    ███   ███    █▀    ███    ███ " << endl;
					cout << " ▄███          ███    ███ ███   ███   ███  ▄███▄▄▄          ███    ███ ███    ███  ▄███▄▄▄      ▄███▄▄▄▄██▀ " << endl;
					cout << "▀▀███ ████▄  ▀███████████ ███   ███   ███ ▀▀███▀▀▀          ███    ███ ███    ███ ▀▀███▀▀▀     ▀▀███▀▀▀▀▀   " << endl;
					cout << "  ███    ███   ███    ███ ███   ███   ███   ███    █▄       ███    ███ ███    ███   ███    █▄  ▀███████████ " << endl;
					cout << "  ███    ███   ███    ███ ███   ███   ███   ███    ███      ███    ███ ███    ███   ███    ███   ███    ███ " << endl;
					cout << "  ████████▀    ███    █▀   ▀█   ███   █▀    ██████████       ▀██████▀   ▀██████▀    ██████████   ███    ███ " << endl;
					return 0; }//ends death statement
  			}//end goblin chief attack
cout << "The goblin falls, dropping a health potion" << endl;
sleep(2); 
cout << "Do you want to drink it?(y/n)" << endl;
cin >> choice;
if (choice == "y" || choice == "yes" || choice == "Yes" || choice == "Y" ) {
cout << "You drink the potion, it makes you feel better" << endl;
health += 125;
mana += 7;
}
else {}
sleep(2);
cout << "Down the staircase you go, as the air gets more musky and humid" << endl;
sleep(2);
cout << "You start to walk and you stumble on some bones" << endl;
sleep(2);
cout << "Its a skeleton of a past warrior, with its hand gripping a claymore" << endl;
sleep(2);
	if (s2 == 1) {
		cout << "Do want to take the claymore instead of your longsword?(y/n)" << endl;
		cin >> i4;
			if (i4 == "y" || i4 == "yes" || i4 == "Yes" || i4 == "Y" ) {
				s2-- ;
				s3++ ;
				cout << "You take the giant sword with your two hands, its power is reflected by its size" << endl;
				sleep(1);
				cout << "*increased damage*\n*decreased special damage*" << endl;
				sleep(2);
				}
			else {
				cout << "\"The sword I have gives me a little more mobility, I'll stick with it instead.\"" << endl;
				sleep(2);
				}
	}
	if (s1 == 1) {
		cout << "You pick it up, its better than a dagger after all" << endl;
		sleep(1);
		cout << "*damage increased!*" <<  endl;
		s1-- ;
		s3++ ;
		sleep(2);
	}
cout << "The ground starts to rumble...." << endl;
sleep(2);
cout << "A giant troll appears!!" << endl;
sleep(2);
if (s2 == 1) {
	cout << "You pull out your longsword, ready to fight" << endl;
	sleep(2);
	}
if (s3 == 1) {
	cout << "You pull out your claymore, ready to fight" << endl;
	sleep(2);
	}
while (h6 >= 1 && health >= 1) {//giant troll attack
	if (name == "hardmode" || name == "Hardmode" || name == "Hard Mode" || name == "hard mode") {//hard mode health regen
		h6 += 8;
	}
    			cout << "You have " << health << " health, and " << mana << " mana." << endl;
  				cout << "It has " << h6 << " health.\n" << endl;
  	
  				cout << "What would you like to do?" << endl;
  				cout << "1.Attack!\n2.Special attack(1 mana)!" << endl;

  				cin >> choice;
  				//character damage
				
				srand(time(NULL));//so RNG does not repeat the same number 
				int claymore = rand() %30 + 10;//third weapon
				srand(time(NULL));
				int lsword = rand() %20 + 5;//second weapon
				//enemy damage
				srand(time(NULL));
				int d6 = rand() %20 + 1;//giant troll
				//RNG Special attack
				srand(time(NULL));
				int spec = rand() %4 + 1;
				//Random health drain
				srand(time(NULL));
				int drain = rand() %20 + 10;
  	
  				//start attack
  				if (choice == "1" || choice == "1." || choice == "attack" || choice == "Attack" || choice == "Attack!" || choice == "attack!" || choice == "1.Attack!") {
  					if (s2 == 1) {
  						sleep(1);
  						cout << "You chose attack!" << endl;
  						sleep(1);
  						cout << "\nYou deal " << lsword << " damage!" << endl;//damage dealt statement
  						h6 -= lsword;//subtract health from enemy
  						sleep(1);
  					}
  					if (s3 == 1) {
  						sleep(1);
  						cout << "You chose attack!" << endl;
  						sleep(1);
  						cout << "\nYou deal " << claymore << " damage!" << endl;//damage dealt statement
  						h6 -= claymore;//subtract health from enemy
  						sleep(1);
  					}
  				}//end attack
  	
  				//start special attack
  				else {			
  				sleep(1);
  				cout << "You use a special attack." << endl;
  				sleep(1);
  				
  				//if there's not enough mana
  				if (mana < 1) {
  					cout << "You are all out of mana!" << endl;
  				}
  				
  				//Hallowed blaze + 10 base damage
  				if (spec == 1 && mana >= 1) {
  				cout << "You used Hallowed Blaze!" << endl;
  				h6 -= 15;
  				sleep(1);
  				cout << "You dealt 15 damage!" << endl;
  				mana -= 1;
  				}
  			
  				//Critical slash x2
  				if (spec == 2 && mana >= 1) {
  					if (s3 == 1) {
  						cout << "You used Critical Smite!" << endl;
  						h6 -= (claymore + 7);
  						sleep(1);
  						cout << "You dealt " << claymore + 7 << " damage!" << endl;
  						mana -= 1;
  					}
  					if (s2 == 1) {
  						cout << "You used Critical Smite!" << endl;
  						h6 -= (lsword * 2);
  						sleep(1);
  						cout << "You dealt " << lsword * 2 << " damage!" << endl;
  						mana -= 1;
  					}
  				}
  			
  				//Divine infusion 4 + normal attack
  				if (spec == 3 && mana >= 1) {
  					if (s3 == 1) {
  						cout << "You used Divine Infusion!" << endl;
  						h6 -= 4;
  						h6 -= claymore;
  						sleep(1);
  						cout << "You dealt " << claymore + 4 << " damage!" << endl;
  						mana -= 1;
					} 
					if (s2 == 1) {
  						cout << "You used Divine Infusion!" << endl;
  						h6 -= 10;
  						h6 -= lsword;
  						sleep(1);
  						cout << "You dealt " << lsword + 10 << " damage!" << endl;
  						mana -= 1;
					} 				
  				}
  				
  				//Vitalic Drain saps hp
  				if (spec == 4 && mana >= 1) {
  				cout << "You used Vitalic Drain!" << endl;
  				h6 -= drain;
  				health += drain;
  				sleep(1);
  				cout << "You sapped " << drain << "health!" << endl;
  				mana -= 1;
  				}
  				
  				
  				sleep(1);
  				}//end special attack
  		
  				cout << "You take " << d6 << " damage!\n\n\n\n\n" << endl;//damage taken
  				health -= d6;
  		
  				sleep(2);
  				if (health <= 0) {//starts death statement
					cout << "   ▄██████▄     ▄████████   ▄▄▄▄███▄▄▄▄      ▄████████       ▄██████▄   ▄█    █▄     ▄████████    ▄████████ " << endl;
					cout << "  ███    ███   ███    ███ ▄██▀▀▀███▀▀▀██▄   ███    ███      ███    ███ ███    ███   ███    ███   ███    ███ " << endl;
					cout << "  ███    █▀    ███    ███ ███   ███   ███   ███    █▀       ███    ███ ███    ███   ███    █▀    ███    ███ " << endl;
					cout << " ▄███          ███    ███ ███   ███   ███  ▄███▄▄▄          ███    ███ ███    ███  ▄███▄▄▄      ▄███▄▄▄▄██▀ " << endl;
					cout << "▀▀███ ████▄  ▀███████████ ███   ███   ███ ▀▀███▀▀▀          ███    ███ ███    ███ ▀▀███▀▀▀     ▀▀███▀▀▀▀▀   " << endl;
					cout << "  ███    ███   ███    ███ ███   ███   ███   ███    █▄       ███    ███ ███    ███   ███    █▄  ▀███████████ " << endl;
					cout << "  ███    ███   ███    ███ ███   ███   ███   ███    ███      ███    ███ ███    ███   ███    ███   ███    ███ " << endl;
					cout << "  ████████▀    ███    █▀   ▀█   ███   █▀    ██████████       ▀██████▀   ▀██████▀    ██████████   ███    ███ " << endl;
					return 0; }//ends death statement
  			}//end giant troll attack
  			
	
cout << "You thrust your blade into the troll's chest, spewing it's blood everywhere." << endl;
sleep(2);
cout << "Blinded with blood in your eyes; you spin around hacking the beast's grotesque head off." << endl;	
sleep(2);	
cout << "It hits the ground with a *thump*\n" << endl;
sleep(3);


cout << "You walk down a passage hearing a sound." << endl;
sleep(2);
cout << "Theres a hulking shadow in the distance." << endl;	
sleep(2);	
cout << "You find a raging minotaur!\n" << endl;
sleep(3);

while (h7 >= 1 && health >= 1) {//start minotaur fight
	if (name == "hardmode" || name == "Hardmode" || name == "Hard Mode" || name == "hard mode") {//hard mode health regen
		h7 += 10;
	}
    			cout << "You have " << health << " health, and " << mana << " mana." << endl;
  				cout << "It has " << h7 << " health.\n" << endl;
  	
  				cout << "What would you like to do?" << endl;
  				cout << "1.Attack!\n2.Special attack(1 mana)!" << endl;

  				cin >> choice;
  				//character damage
				
				srand(time(NULL));//so RNG does not repeat the same number 
				int claymore = rand() %30 + 10;//third weapon
				srand(time(NULL));
				int lsword = rand() %20 + 5;//second weapon
				//enemy damage
				srand(time(NULL));
				int d7 = rand() %30 + 3;//minotaur
				//RNG Special attack
				srand(time(NULL));
				int spec = rand() %4 + 1;
				//Random health drain
				srand(time(NULL));
				int drain = rand() %20 + 10;
  	
  				//start attack
  				if (choice == "1" || choice == "1." || choice == "attack" || choice == "Attack" || choice == "Attack!" || choice == "attack!" || choice == "1.Attack!") {
  					if (s2 == 1) {
  						sleep(1);
  						cout << "You chose attack!" << endl;
  						sleep(1);
  						cout << "\nYou deal " << lsword << " damage!" << endl;//damage dealt statement
  						h7 -= lsword;//subtract health from enemy
  						sleep(1);
  					}
  					if (s3 == 1) {
  						sleep(1);
  						cout << "You chose attack!" << endl;
  						sleep(1);
  						cout << "\nYou deal " << claymore << " damage!" << endl;//damage dealt statement
  						h7 -= claymore;//subtract health from enemy
  						sleep(1);
  					}
  				}//end attack
  	
  				//start special attack
  				else {			
  				sleep(1);
  				cout << "You use a special attack." << endl;
  				sleep(1);
  				
  				//if there's not enough mana
  				if (mana < 1) {
  					cout << "You are all out of mana!" << endl;
  				}
  				
  				//Hallowed blaze + 10 base damage
  				if (spec == 1 && mana >= 1) {
  				cout << "You used Hallowed Blaze!" << endl;
  				h7 -= 15;
  				sleep(1);
  				cout << "You dealt 15 damage!" << endl;
  				mana -= 1;
  				}
  			
  				//Critical slash x2
  				if (spec == 2 && mana >= 1) {
  					if (s3 == 1) {
  						cout << "You used Critical Smite!" << endl;
  						h7 -= (claymore + 7);
  						sleep(1);
  						cout << "You dealt " << claymore + 7 << " damage!" << endl;
  						mana -= 1;
  					}
  					if (s2 == 1) {
  						cout << "You used Critical Smite!" << endl;
  						h7 -= (lsword * 2);
  						sleep(1);
  						cout << "You dealt " << lsword * 2 << " damage!" << endl;
  						mana -= 1;
  					}
  				}
  			
  				//Divine infusion 4 + normal attack
  				if (spec == 3 && mana >= 1) {
  					if (s3 == 1) {
  						cout << "You used Divine Infusion!" << endl;
  						h7 -= 4;
  						h7 -= claymore;
  						sleep(1);
  						cout << "You dealt " << claymore + 4 << " damage!" << endl;
  						mana -= 1;
					} 
					if (s2 == 1) {
  						cout << "You used Divine Infusion!" << endl;
  						h7 -= 10;
  						h7 -= lsword;
  						sleep(1);
  						cout << "You dealt " << lsword + 10 << " damage!" << endl;
  						mana -= 1;
					} 				
  				}
  				
  				//Vitalic Drain saps hp
  				if (spec == 4 && mana >= 1) {
  				cout << "You used Vitalic Drain!" << endl;
  				h8 -= drain;
  				health += drain;
  				sleep(1);
  				cout << "You sapped " << drain << "health!" << endl;
  				mana -= 1;
  				}
  				
  				
  				sleep(1);
  				}//end special attack
  		
  				cout << "You take " << d7 << " damage!\n\n\n\n\n" << endl;//damage taken
  				health -= d7;
  		
  				sleep(2);
  				if (health <= 0) {//starts death statement
					cout << "   ▄██████▄     ▄████████   ▄▄▄▄███▄▄▄▄      ▄████████       ▄██████▄   ▄█    █▄     ▄████████    ▄████████ " << endl;
					cout << "  ███    ███   ███    ███ ▄██▀▀▀███▀▀▀██▄   ███    ███      ███    ███ ███    ███   ███    ███   ███    ███ " << endl;
					cout << "  ███    █▀    ███    ███ ███   ███   ███   ███    █▀       ███    ███ ███    ███   ███    █▀    ███    ███ " << endl;
					cout << " ▄███          ███    ███ ███   ███   ███  ▄███▄▄▄          ███    ███ ███    ███  ▄███▄▄▄      ▄███▄▄▄▄██▀ " << endl;
					cout << "▀▀███ ████▄  ▀███████████ ███   ███   ███ ▀▀███▀▀▀          ███    ███ ███    ███ ▀▀███▀▀▀     ▀▀███▀▀▀▀▀   " << endl;
					cout << "  ███    ███   ███    ███ ███   ███   ███   ███    █▄       ███    ███ ███    ███   ███    █▄  ▀███████████ " << endl;
					cout << "  ███    ███   ███    ███ ███   ███   ███   ███    ███      ███    ███ ███    ███   ███    ███   ███    ███ " << endl;
					cout << "  ████████▀    ███    █▀   ▀█   ███   █▀    ██████████       ▀██████▀   ▀██████▀    ██████████   ███    ███ " << endl;
					return 0; }//ends death statement
  			}//end minotaur attack
sleep(2);
cout << "You slay the minotaur and it drops a health potion." << endl;
sleep(2);
cout << "Do you want to drink it?(y/n)" << endl;
cin >> choice;
if (choice == "y" || choice == "yes" || choice == "Yes" || choice == "Y" ) {
health += 75;
mana += 5;
sleep(2);
cout << "You feel better" << endl;
}
else{}
sleep(2);
cout << "You venture further into the cave." << endl;
sleep(2);
cout << "As you come up to the next room you see something scratched on the wall." << endl;
sleep(2);
cout << "\"It's a map.\"" << endl;
sleep(2);
cout << "You decide to look at it." << endl;
sleep(2);
cout << "                 +        +                   " << endl;
cout << "                 |        |                   " << endl;
cout << "                 |   V    |                   " << endl;
cout << "                 |        |                   " << endl;
cout << "                 |        |                   " << endl;
cout << "                 |        |                   " << endl;
cout << "+----------------+        +------------------+" << endl;
cout << "|                                            |" << endl;
cout << "|                                            |" << endl;
cout << "|                                            |" << endl;
cout << "|                                            |" << endl;
cout << "|                 +--------+                 |" << endl;
cout << "|              +---XXXXXXXX+--+              |" << endl;
cout << "|            +-+XXXXXXXXXXXXXX+-+            |" << endl;
cout << "|           ++XXXXXXXXXXXXXXXXXX++           |" << endl;
cout << "|           |XXXXXXXXXXXXXXXXXXXX|           |" << endl;
cout << "|           ++XXXXXXXXXXXXXXXXXX++           |" << endl;
cout << "|            +-+XXXXXXXXXXXXXX+-+            |" << endl;
cout << "|              +--+XXXXXXXX+--+              |" << endl;
cout << "|                 +--------+                 |" << endl;
cout << "|                                            |" << endl;
cout << "|                                            |" << endl;
cout << "|                                            |" << endl;
cout << "|                                            |" << endl;
cout << "+----------------+         +-----------------+" << endl;
cout << "                 |         |                  " << endl;
cout << "                 |         |                  " << endl;
cout << "                 |         |                  " << endl;
cout << "                 |         |                  " << endl;
cout << "                 |         +-----------------+" << endl;
cout << "                 |                            " << endl;
cout << "                 |                            " << endl;
cout << "                 |                            " << endl;
cout << "                 +---------------------------+" << endl;
sleep(5);

cout << "Theres something written in blood below it." << endl;
sleep(2);
cout << " ▄▀▀█▄▄   ▄▀▀█▄▄▄▄  ▄▀▀▄    ▄▀▀▄  ▄▀▀█▄   ▄▀▀▄▀▀▀▄  ▄▀▀█▄▄▄▄ " << endl;
cout << "▐ ▄▀   █ ▐  ▄▀   ▐ █   █    ▐  █ ▐ ▄▀ ▀▄ █   █   █ ▐  ▄▀   ▐ " << endl;
cout << "  █▄▄▄▀    █▄▄▄▄▄  ▐  █        █   █▄▄▄█ ▐  █▀▀█▀    █▄▄▄▄▄  " << endl;
cout << "  █   █    █    ▌    █   ▄    █   ▄▀   █  ▄▀    █    █    ▌  " << endl;
cout << " ▄▀▄▄▄▀   ▄▀▄▄▄▄      ▀▄▀ ▀▄ ▄▀  █   ▄▀  █     █    ▄▀▄▄▄▄   " << endl;
cout << " █   ▐    █    ▐            ▀    ▐   ▐   ▐     ▐    █    ▐   " << endl;
cout << "▐         ▐                                         ▐        " << endl;
sleep(5);

cout << "Chills run down your spine." << endl;
sleep(2);
cout << "You warily enter the giant chamber." << endl;
sleep(2);
cout << "Piles of bones are scattered across the room, and in the center you see something." << endl;
sleep(2);
cout << "It's giant pool of swirling water." << endl;
sleep(2);
cout << "A 3 headed beast rises out of the water." << endl;
sleep(2);
cout << "Its a Hydra!" << endl;
sleep(2);
//start Hydra fight
while (h8 >= 1 && health >= 1) {
	if (name == "hardmode" || name == "Hardmode" || name == "Hard Mode" || name == "hard mode") {//hard mode health regen
		h8 += 12;
	}
    			cout << "You have " << health << " health, and " << mana << " mana." << endl;
  				cout << "It has " << h8 << " health.\n" << endl;
  	
  				cout << "What would you like to do?" << endl;
  				cout << "1.Attack!\n2.Special attack(1 mana)!" << endl;

  				cin >> choice;
  				//character damage
				
				srand(time(NULL));//so RNG does not repeat the same number 
				int claymore = rand() %30 + 10;//third weapon
				srand(time(NULL));
				int lsword = rand() %20 + 5;//second weapon
				//enemy damage
				srand(time(NULL));
				int d8 = rand() %5 + 15;//hydra
				//RNG Special attack
				srand(time(NULL));
				int spec = rand() %4 + 1;
				//Random health drain
				srand(time(NULL));
				int drain = rand() %20 + 10;
  	
  				//start attack
  				if (choice == "1" || choice == "1." || choice == "attack" || choice == "Attack" || choice == "Attack!" || choice == "attack!" || choice == "1.Attack!") {
  					if (s2 == 1) {
  						sleep(1);
  						cout << "You chose attack!" << endl;
  						sleep(1);
  						cout << "\nYou deal " << lsword << " damage!" << endl;//damage dealt statement
  						h8 -= lsword;//subtract health from enemy
  						sleep(1);
  					}
  					if (s3 == 1) {
  						sleep(1);
  						cout << "You chose attack!" << endl;
  						sleep(1);
  						cout << "\nYou deal " << claymore << " damage!" << endl;//damage dealt statement
  						h8 -= claymore;//subtract health from enemy
  						sleep(1);
  					}
  				}//end attack
  	
  				//start special attack
  				else {			
  				sleep(1);
  				cout << "You use a special attack." << endl;
  				sleep(1);
  				
  				//if there's not enough mana
  				if (mana < 1) {
  					cout << "You are all out of mana!" << endl;
  				}
  				
  				//Hallowed blaze + 10 base damage
  				if (spec == 1 && mana >= 1) {
  				cout << "You used Hallowed Blaze!" << endl;
  				h8 -= 15;
  				sleep(1);
  				cout << "You dealt 15 damage!" << endl;
  				mana -= 1;
  				}
  			
  				//Critical slash x2
  				if (spec == 2 && mana >= 1) {
  					if (s3 == 1) {
  						cout << "You used Critical Smite!" << endl;
  						h8 -= (claymore + 7);
  						sleep(1);
  						cout << "You dealt " << claymore + 7 << " damage!" << endl;
  						mana -= 1;
  					}
  					if (s2 == 1) {
  						cout << "You used Critical Smite!" << endl;
  						h8 -= (lsword * 2);
  						sleep(1);
  						cout << "You dealt " << lsword * 2 << " damage!" << endl;
  						mana -= 1;
  					}
  				}
  			
  				//Divine infusion 4 + normal attack
  				if (spec == 3 && mana >= 1) {
  					if (s3 == 1) {
  						cout << "You used Divine Infusion!" << endl;
  						h8 -= 4;
  						h8 -= claymore;
  						sleep(1);
  						cout << "You dealt " << claymore + 4 << " damage!" << endl;
  						mana -= 1;
					} 
					if (s2 == 1) {
  						cout << "You used Divine Infusion!" << endl;
  						h8 -= 10;
  						h8 -= lsword;
  						sleep(1);
  						cout << "You dealt " << lsword + 10 << " damage!" << endl;
  						mana -= 1;
					} 				
  				}
  				
  				//Vitalic Drain saps hp
  				if (spec == 4 && mana >= 1) {
  				cout << "You used Vitalic Drain!" << endl;
  				h8 -= drain;
  				health += drain;
  				sleep(1);
  				cout << "You sapped " << drain << "health!" << endl;
  				mana -= 1;
  				}
  				
  				
  				sleep(1);
  				}//end special attack
  		
  				cout << "You take " << d8 << " damage!\n\n\n\n\n" << endl;//damage taken
  				health -= d8;
  		
  				sleep(2);
  					if (health <= 0) {//starts death statement
					cout << "   ▄██████▄     ▄████████   ▄▄▄▄███▄▄▄▄      ▄████████       ▄██████▄   ▄█    █▄     ▄████████    ▄████████ " << endl;
					cout << "  ███    ███   ███    ███ ▄██▀▀▀███▀▀▀██▄   ███    ███      ███    ███ ███    ███   ███    ███   ███    ███ " << endl;
					cout << "  ███    █▀    ███    ███ ███   ███   ███   ███    █▀       ███    ███ ███    ███   ███    █▀    ███    ███ " << endl;
					cout << " ▄███          ███    ███ ███   ███   ███  ▄███▄▄▄          ███    ███ ███    ███  ▄███▄▄▄      ▄███▄▄▄▄██▀ " << endl;
					cout << "▀▀███ ████▄  ▀███████████ ███   ███   ███ ▀▀███▀▀▀          ███    ███ ███    ███ ▀▀███▀▀▀     ▀▀███▀▀▀▀▀   " << endl;
					cout << "  ███    ███   ███    ███ ███   ███   ███   ███    █▄       ███    ███ ███    ███   ███    █▄  ▀███████████ " << endl;
					cout << "  ███    ███   ███    ███ ███   ███   ███   ███    ███      ███    ███ ███    ███   ███    ███   ███    ███ " << endl;
					cout << "  ████████▀    ███    █▀   ▀█   ███   █▀    ██████████       ▀██████▀   ▀██████▀    ██████████   ███    ███ " << endl;
					return 0; }//ends death statement
  			}//end hydra fight
  			
  			
//excalibur 
sleep(2);
cout << "In one fell swoop, all 3 of the Hydra's heads are sliced off. " << endl;
sleep(2);
cout << "Green blood gushes out of the 3 flailing stumps. " << endl;
sleep(2);
cout << "The dead body slowly sinks into the pool. " << endl;
sleep(2);
cout << "It quickly vanishes from sight. " << endl;
sleep(2);
cout << "A few moments later, the chamber starts to rumble and shake. " << endl;
sleep(2);
cout << "A marbel pedestal rises out of the center of the pool. " << endl;
sleep(2);
cout << "In the center of the pedestal, lays the holy blade. " << endl;
sleep(2);
cout << "Excalibur." << endl;
sleep(2);
cout << "You walk over and pick it up. " << endl;
sleep(2);
cout << "You feel blessed. " << endl;
sleep(2);
cout << "Engraved on the hilt you find the words. " << endl;
sleep(2);
cout << "\"Take me up\" " << endl;
sleep(1);
cout << "\"Cast me away\" " << endl;
sleep(2);
cout << "Below that, your name begins to form on the blade. " << endl;
sleep(2);
cout << "\"" << name << "\" " << endl;
sleep(4);

cout << "*Damage up* " << endl;
sleep(1);
cout << "*Special up* " << endl;
sleep(1);
cout << "*Health up* " << endl;
sleep(1);
cout << "*Mana up* " << endl;
sleep(2);
health += 300;
mana += 20;
cout << "With this newfound power, you walk towards the final chamber, the final battle." << endl;
sleep(2);
cout << "You're at the chambers entrance when suddenly, a stone sentinel blocks your path!" << endl;
sleep(2);
cout << "You take out excalibur, eager for a test run" << endl;
sleep(2);
while (h9 >= 1 && health >= 1) {
	if (name == "hardmode" || name == "Hardmode" || name == "Hard Mode" || name == "hard mode") {//hard mode health regen
		h9 += 30;
	}
    cout << "You have " << health << " health, and " << mana << " mana." << endl;
  	cout << "It has " << h9 << " health.\n" << endl;
  	
  	cout << "What would you like to do?" << endl;
  	cout << "1.Attack!\n2.Special attack(1 mana)!" << endl;

  	cin >> choice;
  	//character damage
	srand(time(NULL));//so RNG does not repeat the same number 
	int hsword = rand() %75 + 25;//excalibur
	//enemy damage
	srand(time(NULL));
	int d9 = rand() %20 + 10;//sentinel 
	//RNG Special attack
	srand(time(NULL));
	int spec = rand() %4 + 1;
	//RNG Double Slash
	srand(time(NULL));
	int slash1 = rand() %5 + 1;
	//RNG Double Slash
	srand(time(NULL));
	int slash2 = rand() %10 + 1;
	//RNG Double Slash
	srand(time(NULL));
	int slash3 = rand() %10 + 1;
	//RNG Double Slash
	srand(time(NULL));
	int slash4 = rand() %10 + 1;
	//RNG Double Slash
	srand(time(NULL));
	int super = rand() %100 + 1;
	//Random health drain
	srand(time(NULL));
	int drain = rand() %30 + 20;
  	
  		//start attack
  		if (choice == "1" || choice == "1." || choice == "attack" || choice == "Attack" || choice == "Attack!" || choice == "attack!" || choice == "1.Attack!") {
  		sleep(1);
  		cout << "You chose attack!" << endl;
  		sleep(1);
  		cout << "\nYou deal " << hsword << " damage!" << endl;//damage dealt statement
  		h9 -= hsword;//subtract health from enemy
  		sleep(1);
  		if (slash1 == 3) {
  			sleep(1);
  			cout << "You blinded the enemy with your holy light!" << endl;
  			sleep(2);
  			cout << "You attack while its blinded!" << endl;
  			sleep(2);
  			cout << "\nYou deal " << hsword << " damage!" << endl;//damage dealt statement
  			h9 -= hsword;//subtract health from enemy
  				if (slash2 == 7) {
  				sleep(2);
  				cout << "Triple Hit!" << endl;
  				sleep(2);
  				cout << "\nYou deal " << hsword << " damage!" << endl;//damage dealt statement
  				h9 -= hsword;//subtract health from enemy
  					if (slash3 == 7) {
  					sleep(2);
  					cout << "Quadruple Hit!" << endl;
  					sleep(2);
  					cout << "\nYou deal " << hsword << " damage!" << endl;//damage dealt statement
  					h9 -= hsword;//subtract health from enemy
  						if (slash4 == 7) {
  						sleep(2);
  						cout << "Quintuple Hit!" << endl;
  						sleep(2);
  						cout << "\nYou deal " << hsword << " damage!" << endl;//damage dealt statement
  						h9 -= hsword;//subtract health from enemy
  							if (h9 <= 0) {
  								cout << "████▄     ▄   ▄███▄   █▄▄▄▄     █  █▀ ▄█ █    █     " << endl;
  								cout << "█   █      █  █▀   ▀  █  ▄▀     █▄█   ██ █    █     " << endl;
  								cout << "█   █ █     █ ██▄▄    █▀▀▌      █▀▄   ██ █    █     " << endl;
  								cout << "▀████  █    █ █▄   ▄▀ █  █      █  █  ▐█ ███▄ ███▄  " << endl;
  								cout << "        █  █  ▀███▀     █         █    ▐     ▀    ▀ " << endl;
  								cout << "         █▐            ▀         ▀                  " << endl;
  								cout << "         ▐                                          " << endl;
  							}	
  						}
					}  				
  				}
  			}
  			
  		}//end attack
  	
  		//start special attack
  		else {
  		sleep(1);
  		cout << "You use a special attack." << endl;
  		sleep(1);
  		
  			//if there's not enough mana
  				if (mana < 1) {
  					cout << "You are all out of mana!" << endl;
  				}
  				
  			//Hallowed blaze + 10 base damage
  			if (spec == 1 && mana >= 1) {
  			cout << "You used Hallowed Blaze!" << endl;
  			h9 -= 50;
  			sleep(1);
  			cout << "You dealt 50 damage!" << endl;
  			mana -= 1;
  			}
  			
  			//Critical slash x2
  			if (spec == 2 && mana >= 1) {
  			cout << "You used Critical Smite!" << endl;
  			h9 -= (hsword * 2);
  			sleep(1);
  			cout << "You dealt " << hsword * 2 << " damage!" << endl;
  			mana -= 1;
  			}
  			
  			//Divine infusion 10 + normal attack
  			if (spec == 3 && mana >= 1) {
  			cout << "You used Divine Infusion!" << endl;
  			h9 -= 10;
  			h9 -= hsword;
  			sleep(1);
  			cout << "You dealt " << hsword + 10 << " damage!" << endl;
  			mana -= 1;
  			}
  			
  			//Angelic Drain saps hp
  			if (spec == 4 && mana >= 1) {
  			cout << "You used Angelic Drain!" << endl;
  			h12 -= drain;
  			health += drain;
  			mana += 10;
  			sleep(1);
  			cout << "You sapped " << drain << "health!" << endl;
  			mana -= 1;
  			}
  			
  			//Assassination
  			if (super == 5 && mana >= 2) {
  			cout << "Your Blade glows a Golden Yellow" << endl;
  			h9 -= 200;
  			health += 200;
  			sleep(1);
  			cout << "You dealt 200 damage!" << endl;
  			mana -= 2;
  			}
  			
  			
  			sleep(1);
  		}//end special attack
  		
  		cout << "You take " << d9 << " damage!\n\n\n\n\n" << endl;//damage taken
  		health -= d9;
  		
  	sleep(2);
  	if (health <= 0) {//starts death statement
					cout << "   ▄██████▄     ▄████████   ▄▄▄▄███▄▄▄▄      ▄████████       ▄██████▄   ▄█    █▄     ▄████████    ▄████████ " << endl;
					cout << "  ███    ███   ███    ███ ▄██▀▀▀███▀▀▀██▄   ███    ███      ███    ███ ███    ███   ███    ███   ███    ███ " << endl;
					cout << "  ███    █▀    ███    ███ ███   ███   ███   ███    █▀       ███    ███ ███    ███   ███    █▀    ███    ███ " << endl;
					cout << " ▄███          ███    ███ ███   ███   ███  ▄███▄▄▄          ███    ███ ███    ███  ▄███▄▄▄      ▄███▄▄▄▄██▀ " << endl;
					cout << "▀▀███ ████▄  ▀███████████ ███   ███   ███ ▀▀███▀▀▀          ███    ███ ███    ███ ▀▀███▀▀▀     ▀▀███▀▀▀▀▀   " << endl;
					cout << "  ███    ███   ███    ███ ███   ███   ███   ███    █▄       ███    ███ ███    ███   ███    █▄  ▀███████████ " << endl;
					cout << "  ███    ███   ███    ███ ███   ███   ███   ███    ███      ███    ███ ███    ███   ███    ███   ███    ███ " << endl;
					cout << "  ████████▀    ███    █▀   ▀█   ███   █▀    ██████████       ▀██████▀   ▀██████▀    ██████████   ███    ███ " << endl;
					return 0; }//ends death statement
  	}//end fight
  	
cout << "The sentinel crumbles into dust under the might of Excalibur." << endl;
sleep(2);
cout << "The Blade's energy surging through you compels you to go on into the final chamber." << endl;
sleep(2);
cout << "\"This is it.\"" << endl; 
sleep(4);
cout << "You walk towards the the chamber's gate," << endl;
sleep(2);
cout << "It gets hotter the closer you get." << endl;
sleep(2);
cout << "The great steel doors swing open." << endl;
sleep(2);
cout << "In the center of the room are the 3 great demons." << endl;
sleep(1);
cout << "Azazel." << endl;
sleep(1);
cout << "Abaddon." << endl;
sleep(1);
cout << "Astaroth." << endl;
sleep(2);
cout << "Black flames are covering the floor of the chamber." << endl;
sleep(2);
cout << "The three demons along with the flames are getting sucked into the center." << endl;
sleep(2);
cout << "They start fusing together!" << endl;
sleep(2);
cout << "Out of the flames comes..." << endl;
sleep(3);
cout << "Satan." << endl;
sleep(2);

cout << "\nThe flaming Satan attacks you!" << endl;
sleep(2);

//start first fight phase
while (h10 >= 1 && health >= 1) {
	if (name == "hardmode" || name == "Hardmode" || name == "Hard Mode" || name == "hard mode") {//hard mode health regen
		h10 += 45;
	}
    cout << "You have " << health << " health, and " << mana << " mana." << endl;
  	cout << "It has " << h10 << " health.\n" << endl;
  	
  	cout << "What would you like to do?" << endl;
  	cout << "1.Attack!\n2.Special attack(1 mana)!" << endl;

  	cin >> choice;
  	//character damage
	srand(time(NULL));//so RNG does not repeat the same number 
	int hsword = rand() %75 + 25;//excalibur
	//enemy damage
	srand(time(NULL));
	int d10 = rand() %55 + 0;//sentinel 
	//RNG Special attack
	srand(time(NULL));
	int spec = rand() %4 + 1;
	//RNG Double Slash
	srand(time(NULL));
	int slash1 = rand() %5 + 1;
	//RNG Double Slash
	srand(time(NULL));
	int slash2 = rand() %10 + 1;
	//RNG Double Slash
	srand(time(NULL));
	int slash3 = rand() %10 + 1;
	//RNG Double Slash
	srand(time(NULL));
	int slash4 = rand() %10 + 1;
	//RNG Double Slash
	srand(time(NULL));
	int super = rand() %100 + 1;
	//Random health drain
	srand(time(NULL));
	int drain = rand() %30 + 20;
  	
  		//start attack
  		if (choice == "1" || choice == "1." || choice == "attack" || choice == "Attack" || choice == "Attack!" || choice == "attack!" || choice == "1.Attack!") {
  		sleep(1);
  		cout << "You chose attack!" << endl;
  		sleep(1);
  		cout << "\nYou deal " << hsword << " damage!" << endl;//damage dealt statement
  		h10 -= hsword;//subtract health from enemy
  		sleep(1);
  		if (slash1 == 3) {
  			sleep(1);
  			cout << "You blinded the enemy with your holy light!" << endl;
  			sleep(2);
  			cout << "You attack while its blinded!" << endl;
  			sleep(2);
  			cout << "\nYou deal " << hsword << " damage!" << endl;//damage dealt statement
  			h10 -= hsword;//subtract health from enemy
  				if (slash2 == 7) {
  				sleep(2);
  				cout << "Triple Hit!" << endl;
  				sleep(2);
  				cout << "\nYou deal " << hsword << " damage!" << endl;//damage dealt statement
  				h10 -= hsword;//subtract health from enemy
  					if (slash3 == 7) {
  					sleep(2);
  					cout << "Quadruple Hit!" << endl;
  					sleep(2);
  					cout << "\nYou deal " << hsword << " damage!" << endl;//damage dealt statement
  					h10 -= hsword;//subtract health from enemy
  						if (slash4 == 7) {
  						sleep(2);
  						cout << "Quintuple Hit!" << endl;
  						sleep(2);
  						cout << "\nYou deal " << hsword << " damage!" << endl;//damage dealt statement
  						h10 -= hsword;//subtract health from enemy
  							if (h10 <= 0) {
  								cout << "████▄     ▄   ▄███▄   █▄▄▄▄     █  █▀ ▄█ █    █     " << endl;
  								cout << "█   █      █  █▀   ▀  █  ▄▀     █▄█   ██ █    █     " << endl;
  								cout << "█   █ █     █ ██▄▄    █▀▀▌      █▀▄   ██ █    █     " << endl;
  								cout << "▀████  █    █ █▄   ▄▀ █  █      █  █  ▐█ ███▄ ███▄  " << endl;
  								cout << "        █  █  ▀███▀     █         █    ▐     ▀    ▀ " << endl;
  								cout << "         █▐            ▀         ▀                  " << endl;
  								cout << "         ▐                                          " << endl;
  							}	
  						}
					}  				
  				}
  			}
  			
  		}//end attack
  	
  		//start special attack
  		else {
  		sleep(1);
  		cout << "You use a special attack." << endl;
  		sleep(1);
  		
  			//if there's not enough mana
  				if (mana < 1) {
  					cout << "You are all out of mana!" << endl;
  				}
  				
  			//Hallowed blaze + 10 base damage
  			if (spec == 1 && mana >= 1) {
  			cout << "You used Hallowed Blaze!" << endl;
  			h10 -= 50;
  			sleep(1);
  			cout << "You dealt 50 damage!" << endl;
  			mana -= 1;
  			}
  			
  			//Critical slash x2
  			if (spec == 2 && mana >= 1) {
  			cout << "You used Critical Smite!" << endl;
  			h10 -= (hsword * 2);
  			sleep(1);
  			cout << "You dealt " << hsword * 2 << " damage!" << endl;
  			mana -= 1;
  			}
  			
  			//Divine infusion 10 + normal attack
  			if (spec == 3 && mana >= 1) {
  			cout << "You used Divine Infusion!" << endl;
  			h10 -= 10;
  			h10 -= hsword;
  			sleep(1);
  			cout << "You dealt " << hsword + 10 << " damage!" << endl;
  			mana -= 1;
  			}
  			
  			//Angelic Drain saps hp
  			if (spec == 4 && mana >= 1) {
  			cout << "You used Angelic Drain!" << endl;
  			h12 -= drain;
  			health += drain;
  			mana += 10;
  			sleep(1);
  			cout << "You sapped " << drain << "health!" << endl;
  			mana -= 1;
  			}
  			
  			//Assassination
  			if (super == 5 && mana >= 2) {
  			cout << "Your Blade glows a Golden Yellow" << endl;
  			h10 -= 200;
  			health += 200;
  			sleep(1);
  			cout << "You dealt 200 damage!" << endl;
  			mana -= 2;
  			}
  			
  			
  			sleep(1);
  		}//end special attack
  		
  		cout << "You take " << d10 << " damage!\n\n\n\n\n" << endl;//damage taken
  		health -= d10;
  		
  	sleep(2);
  	if (health <= 0) {//starts death statement
					cout << "   ▄██████▄     ▄████████   ▄▄▄▄███▄▄▄▄      ▄████████       ▄██████▄   ▄█    █▄     ▄████████    ▄████████ " << endl;
					cout << "  ███    ███   ███    ███ ▄██▀▀▀███▀▀▀██▄   ███    ███      ███    ███ ███    ███   ███    ███   ███    ███ " << endl;
					cout << "  ███    █▀    ███    ███ ███   ███   ███   ███    █▀       ███    ███ ███    ███   ███    █▀    ███    ███ " << endl;
					cout << " ▄███          ███    ███ ███   ███   ███  ▄███▄▄▄          ███    ███ ███    ███  ▄███▄▄▄      ▄███▄▄▄▄██▀ " << endl;
					cout << "▀▀███ ████▄  ▀███████████ ███   ███   ███ ▀▀███▀▀▀          ███    ███ ███    ███ ▀▀███▀▀▀     ▀▀███▀▀▀▀▀   " << endl;
					cout << "  ███    ███   ███    ███ ███   ███   ███   ███    █▄       ███    ███ ███    ███   ███    █▄  ▀███████████ " << endl;
					cout << "  ███    ███   ███    ███ ███   ███   ███   ███    ███      ███    ███ ███    ███   ███    ███   ███    ███ " << endl;
					cout << "  ████████▀    ███    █▀   ▀█   ███   █▀    ██████████       ▀██████▀   ▀██████▀    ██████████   ███    ███ " << endl;
					return 0; }//ends death statement
  	}//end fight

//end first
cout << "You quench its demonic flames with the light of your holy blade." << endl;
sleep(2);
cout << "The beast writhers and twists into a giant snake!" << endl;
sleep(2);

//start second phase
while (h11 >= 1 && health >= 1) {
	if (name == "hardmode" || name == "Hardmode" || name == "Hard Mode" || name == "hard mode") {//hard mode health regen
		h11 += 45;
	}
    cout << "You have " << health << " health, and " << mana << " mana." << endl;
  	cout << "It has " << h11 << " health.\n" << endl;
  	
  	cout << "What would you like to do?" << endl;
  	cout << "1.Attack!\n2.Special attack(1 mana)!" << endl;

  	cin >> choice;
  	//character damage
	srand(time(NULL));//so RNG does not repeat the same number 
	int hsword = rand() %75 + 25;//excalibur
	//enemy damage
	srand(time(NULL));
	int d11 = rand() %20 + 0;//snake 
	//RNG Special attack
	srand(time(NULL));
	int spec = rand() %4 + 1;
	//RNG Double Slash
	srand(time(NULL));
	int slash1 = rand() %5 + 1;
	//RNG Double Slash
	srand(time(NULL));
	int slash2 = rand() %10 + 1;
	//RNG Double Slash
	srand(time(NULL));
	int slash3 = rand() %10 + 1;
	//RNG Double Slash
	srand(time(NULL));
	int slash4 = rand() %10 + 1;
	//RNG Double Slash
	srand(time(NULL));
	int super = rand() %100 + 1;
	//Random health drain
	srand(time(NULL));
	int drain = rand() %30 + 20;
  	
  		//start attack
  		if (choice == "1" || choice == "1." || choice == "attack" || choice == "Attack" || choice == "Attack!" || choice == "attack!" || choice == "1.Attack!") {
  		sleep(1);
  		cout << "You chose attack!" << endl;
  		sleep(1);
  		cout << "\nYou deal " << hsword << " damage!" << endl;//damage dealt statement
  		h11 -= hsword;//subtract health from enemy
  		sleep(1);
  		if (slash1 == 3) {
  			sleep(1);
  			cout << "You blinded the enemy with your holy light!" << endl;
  			sleep(2);
  			cout << "You attack while its blinded!" << endl;
  			sleep(2);
  			cout << "\nYou deal " << hsword << " damage!" << endl;//damage dealt statement
  			h11 -= hsword;//subtract health from enemy
  				if (slash2 == 7) {
  				sleep(2);
  				cout << "Triple Hit!" << endl;
  				sleep(2);
  				cout << "\nYou deal " << hsword << " damage!" << endl;//damage dealt statement
  				h11 -= hsword;//subtract health from enemy
  					if (slash3 == 7) {
  					sleep(2);
  					cout << "Quadruple Hit!" << endl;
  					sleep(2);
  					cout << "\nYou deal " << hsword << " damage!" << endl;//damage dealt statement
  					h11 -= hsword;//subtract health from enemy
  						if (slash4 == 7) {
  						sleep(2);
  						cout << "Quintuple Hit!" << endl;
  						sleep(2);
  						cout << "\nYou deal " << hsword << " damage!" << endl;//damage dealt statement
  						h11 -= hsword;//subtract health from enemy
  							if (h11 <= 0) {
  								cout << "████▄     ▄   ▄███▄   █▄▄▄▄     █  █▀ ▄█ █    █     " << endl;
  								cout << "█   █      █  █▀   ▀  █  ▄▀     █▄█   ██ █    █     " << endl;
  								cout << "█   █ █     █ ██▄▄    █▀▀▌      █▀▄   ██ █    █     " << endl;
  								cout << "▀████  █    █ █▄   ▄▀ █  █      █  █  ▐█ ███▄ ███▄  " << endl;
  								cout << "        █  █  ▀███▀     █         █    ▐     ▀    ▀ " << endl;
  								cout << "         █▐            ▀         ▀                  " << endl;
  								cout << "         ▐                                          " << endl;
  							}	
  						}
					}  				
  				}
  			}
  			
  		}//end attack
  	
  		//start special attack
  		else {
  		sleep(1);
  		cout << "You use a special attack." << endl;
  		sleep(1);
  		
  			//if there's not enough mana
  				if (mana < 1) {
  					cout << "You are all out of mana!" << endl;
  				}
  				
  			//Hallowed blaze + 10 base damage
  			if (spec == 1 && mana >= 1) {
  			cout << "You used Hallowed Blaze!" << endl;
  			h11 -= 50;
  			sleep(1);
  			cout << "You dealt 50 damage!" << endl;
  			mana -= 1;
  			}
  			
  			//Critical slash x2
  			if (spec == 2 && mana >= 1) {
  			cout << "You used Critical Smite!" << endl;
  			h11 -= (hsword * 2);
  			sleep(1);
  			cout << "You dealt " << hsword * 2 << " damage!" << endl;
  			mana -= 1;
  			}
  			
  			//Divine infusion 10 + normal attack
  			if (spec == 3 && mana >= 1) {
  			cout << "You used Divine Infusion!" << endl;
  			h11 -= 10;
  			h11 -= hsword;
  			sleep(1);
  			cout << "You dealt " << hsword + 10 << " damage!" << endl;
  			mana -= 1;
  			}
  			
  			//Angelic Drain saps hp
  			if (spec == 4 && mana >= 1) {
  			cout << "You used Angelic Drain!" << endl;
  			h12 -= drain;
  			health += drain;
  			mana += 10;
  			sleep(1);
  			cout << "You sapped " << drain << "health!" << endl;
  			mana -= 1;
  			}
  			
  			//Assassination
  			if (super == 5 && mana >= 2) {
  			cout << "Your Blade glows a Golden Yellow" << endl;
  			h11 -= 200;
  			health += 200;
  			sleep(1);
  			cout << "You dealt 200 damage!" << endl;
  			mana -= 2;
  			}
  			
  			
  			sleep(1);
  		}//end special attack
  		
  		cout << "You take " << d11 << " damage!\n\n\n\n\n" << endl;//damage taken
  		health -= d11;
  		
  	sleep(2);
  	if (health <= 0) {//starts death statement
					cout << "   ▄██████▄     ▄████████   ▄▄▄▄███▄▄▄▄      ▄████████       ▄██████▄   ▄█    █▄     ▄████████    ▄████████ " << endl;
					cout << "  ███    ███   ███    ███ ▄██▀▀▀███▀▀▀██▄   ███    ███      ███    ███ ███    ███   ███    ███   ███    ███ " << endl;
					cout << "  ███    █▀    ███    ███ ███   ███   ███   ███    █▀       ███    ███ ███    ███   ███    █▀    ███    ███ " << endl;
					cout << " ▄███          ███    ███ ███   ███   ███  ▄███▄▄▄          ███    ███ ███    ███  ▄███▄▄▄      ▄███▄▄▄▄██▀ " << endl;
					cout << "▀▀███ ████▄  ▀███████████ ███   ███   ███ ▀▀███▀▀▀          ███    ███ ███    ███ ▀▀███▀▀▀     ▀▀███▀▀▀▀▀   " << endl;
					cout << "  ███    ███   ███    ███ ███   ███   ███   ███    █▄       ███    ███ ███    ███   ███    █▄  ▀███████████ " << endl;
					cout << "  ███    ███   ███    ███ ███   ███   ███   ███    ███      ███    ███ ███    ███   ███    ███   ███    ███ " << endl;
					cout << "  ████████▀    ███    █▀   ▀█   ███   █▀    ██████████       ▀██████▀   ▀██████▀    ██████████   ███    ███ " << endl;
					return 0; }//ends death statement
  	}//end fight

//end second phase
cout << "You slice off a section of the snake demon." << endl;
sleep(2);
cout << "The holy blade sucks the life force out of it." << endl;
sleep(2);
cout << "*Health up*" << endl;
sleep(2);
health += 100;
cout << "Satan returns to his original form." << endl;
sleep(2);
cout << "He charges you with a devilish grin on his face." << endl;
sleep(2);

//start third phase
while (h12 >= 1 && health >= 1) {
	if (name == "hardmode" || name == "Hardmode" || name == "Hard Mode" || name == "hard mode") {//hard mode health regen
		h12 += 60;
	}
    cout << "You have " << health << " health, and " << mana << " mana." << endl;
  	cout << "It has " << h12 << " health.\n" << endl;
  	
  	cout << "What would you like to do?" << endl;
  	cout << "1.Attack!\n2.Special attack(1 mana)!" << endl;

  	cin >> choice;
  	//character damage
	srand(time(NULL));//so RNG does not repeat the same number 
	int hsword = rand() %75 + 25;//excalibur
	//enemy damage
	srand(time(NULL));
	int d12 = rand() %55 + 20;//final
	//RNG Special attack
	srand(time(NULL));
	int spec = rand() %4 + 1;
	//RNG Double Slash
	srand(time(NULL));
	int slash1 = rand() %5 + 1;
	//RNG Double Slash
	srand(time(NULL));
	int slash2 = rand() %10 + 1;
	//RNG Double Slash
	srand(time(NULL));
	int slash3 = rand() %10 + 1;
	//RNG Double Slash
	srand(time(NULL));
	int slash4 = rand() %10 + 1;
	//RNG Double Slash
	srand(time(NULL));
	int super = rand() %100 + 1;
	//Random health drain
	srand(time(NULL));
	int drain = rand() %30 + 20;
  	
  		//start attack
  		if (choice == "1" || choice == "1." || choice == "attack" || choice == "Attack" || choice == "Attack!" || choice == "attack!" || choice == "1.Attack!") {
  		sleep(1);
  		cout << "You chose attack!" << endl;
  		sleep(1);
  		cout << "\nYou deal " << hsword << " damage!" << endl;//damage dealt statement
  		h12 -= hsword;//subtract health from enemy
  		sleep(1);
  		if (slash1 == 7) {
  			sleep(1);
  			cout << "You blinded the enemy with your holy light!" << endl;
  			sleep(2);
  			cout << "You attack while its blinded!" << endl;
  			sleep(2);
  			cout << "\nYou deal " << hsword << " damage!" << endl;//damage dealt statement
  			h12 -= hsword;//subtract health from enemy
  				if (slash2 == 3) {
  				sleep(2);
  				cout << "Triple Hit!" << endl;
  				sleep(2);
  				cout << "\nYou deal " << hsword << " damage!" << endl;//damage dealt statement
  				h12 -= hsword;//subtract health from enemy
  					if (slash3 == 7) {
  					sleep(2);
  					cout << "Quadruple Hit!" << endl;
  					sleep(2);
  					cout << "\nYou deal " << hsword << " damage!" << endl;//damage dealt statement
  					h12 -= hsword;//subtract health from enemy
  						if (slash4 == 7) {
  						sleep(2);
  						cout << "Quintuple Hit!" << endl;
  						sleep(2);
  						cout << "\nYou deal " << hsword << " damage!" << endl;//damage dealt statement
  						h12 -= hsword;//subtract health from enemy
  							if (h12 <= 0) {
  								cout << "████▄     ▄   ▄███▄   █▄▄▄▄     █  █▀ ▄█ █    █     " << endl;
  								cout << "█   █      █  █▀   ▀  █  ▄▀     █▄█   ██ █    █     " << endl;
  								cout << "█   █ █     █ ██▄▄    █▀▀▌      █▀▄   ██ █    █     " << endl;
  								cout << "▀████  █    █ █▄   ▄▀ █  █      █  █  ▐█ ███▄ ███▄  " << endl;
  								cout << "        █  █  ▀███▀     █         █    ▐     ▀    ▀ " << endl;
  								cout << "         █▐            ▀         ▀                  " << endl;
  								cout << "         ▐                                          " << endl;
  							}	
  						}
					}  				
  				}
  			}
  			
  		}//end attack
  	
  		//start special attack
  		else {
  		sleep(1);
  		cout << "You use a special attack." << endl;
  		sleep(1);
  		
  			//if there's not enough mana
  				if (mana < 1) {
  					cout << "You are all out of mana!" << endl;
  				}
  				
  			//Hallowed blaze + 10 base damage
  			if (spec == 1 && mana >= 1) {
  			cout << "You used Hallowed Blaze!" << endl;
  			h12 -= 50;
  			sleep(1);
  			cout << "You dealt 50 damage!" << endl;
  			mana -= 1;
  			}
  			
  			//Critical slash x2
  			if (spec == 2 && mana >= 1) {
  			cout << "You used Critical Smite!" << endl;
  			h12 -= (hsword * 2);
  			sleep(1);
  			cout << "You dealt " << hsword * 2 << " damage!" << endl;
  			mana -= 1;
  			}
  			
  			//Divine infusion 10 + normal attack
  			if (spec == 3 && mana >= 1) {
  			cout << "You used Divine Infusion!" << endl;
  			h12 -= 10;
  			h12 -= hsword;
  			sleep(1);
  			cout << "You dealt " << hsword + 10 << " damage!" << endl;
  			mana -= 1;
  			}
  			
  			//Angelic Drain saps hp
  			if (spec == 4 && mana >= 1) {
  			cout << "You used Angelic Drain!" << endl;
  			h12 -= drain;
  			health += drain;
  			mana += 10;
  			sleep(1);
  			cout << "You sapped " << drain << "health!" << endl;
  			mana -= 1;
  			}
  			
  			//Assassination
  			if (super == 5 && mana >= 2) {
  			cout << "Your Blade glows a Golden Yellow" << endl;
  			h12 -= 200;
  			health += 200;
  			sleep(1);
  			cout << "You dealt 200 damage!" << endl;
  			mana -= 2;
  			}
  			
  			
  			sleep(1);
  		}//end special attack
  		
  		cout << "You take " << d12 << " damage!\n\n\n\n\n" << endl;//damage taken
  		health -= d12;
  		
  	sleep(2);
  	if (health <= 0) {//starts death statement
					cout << "   ▄██████▄     ▄████████   ▄▄▄▄███▄▄▄▄      ▄████████       ▄██████▄   ▄█    █▄     ▄████████    ▄████████ " << endl;
					cout << "  ███    ███   ███    ███ ▄██▀▀▀███▀▀▀██▄   ███    ███      ███    ███ ███    ███   ███    ███   ███    ███ " << endl;
					cout << "  ███    █▀    ███    ███ ███   ███   ███   ███    █▀       ███    ███ ███    ███   ███    █▀    ███    ███ " << endl;
					cout << " ▄███          ███    ███ ███   ███   ███  ▄███▄▄▄          ███    ███ ███    ███  ▄███▄▄▄      ▄███▄▄▄▄██▀ " << endl;
					cout << "▀▀███ ████▄  ▀███████████ ███   ███   ███ ▀▀███▀▀▀          ███    ███ ███    ███ ▀▀███▀▀▀     ▀▀███▀▀▀▀▀   " << endl;
					cout << "  ███    ███   ███    ███ ███   ███   ███   ███    █▄       ███    ███ ███    ███   ███    █▄  ▀███████████ " << endl;
					cout << "  ███    ███   ███    ███ ███   ███   ███   ███    ███      ███    ███ ███    ███   ███    ███   ███    ███ " << endl;
					cout << "  ████████▀    ███    █▀   ▀█   ███   █▀    ██████████       ▀██████▀   ▀██████▀    ██████████   ███    ███ " << endl;
					return 0; }//ends death statement
  	}//end fight
//end third phase
cout << "Light breaks through the roof of the chamber." << endl;
sleep(2);
cout << "It surrounds the excalibur." << endl;
sleep(2);
cout << "You charge forward, stabbing satan directly in chest with your light infused blade." << endl;
sleep(2);
cout << "He stumbles back and explodes into a shower of ash." << endl;
sleep(4);
cout << "It's over." << endl;
sleep(8);
cout << "\n\n\n\n\nEnd Game Statistics" << endl;
sleep(2);
if (health >= 200) {//"Grading" system
cout << "Grade: A+" << endl;
sleep(2);
cout << "Thanks for Playing" << endl;
}
if (health >= 150 && health < 200) {
cout << "Grade: A" << endl;
sleep(2);
cout << "Thanks for Playing" << endl;
}
if (health >= 100 && health < 150) {
cout << "Grade: B+" << endl;
sleep(2);
cout << "Thanks for Playing" << endl;
}
if (health >= 80 && health < 100) {
cout << "Grade: B" << endl;
sleep(2);
cout << "Thanks for Playing" << endl;
}
if (health >= 50 && health < 80) {
cout << "Grade: C" << endl;
sleep(2);
cout << "Thanks for Playing" << endl;
}
if (health >= 20 && health < 50) {
cout << "Grade: D" << endl;
sleep(2);
cout << "Thanks for Playing" << endl;
}
if (health >= 1 && health < 20) {
cout << "Grade: F" << endl;
sleep(2);
cout << "Thanks for Playing" << endl;
}
if (name == "hardmode" || name == "Hardmode" || name == "Hard Mode" || name == "hard mode") {
cout << "Nice, you beat hardmode!" << endl;
}


}//ends life statement

return 0;            
}

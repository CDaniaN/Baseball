//Dania Nasereddin 2-26-20 #19
// Lab 05 - Baseball
// This program has a baseball player class and four objects from that class all in a header file called Bplayer.h. Each baseball player has a
// role, an ID, and a batting average. The catcher is generated by the default values and the rest of the team has their stats inputted by the user.
// The batting average must be between 0-1. In the end the program prints out their batting averages and calculates the batting average of the team.

#include <iostream>
#include "Bplayer.h"
using namespace std;

int main()
{
    string r;
    int id;
    double bAve;

    BaseBallPlayer catcher;
    cout << "No input needed for a catcher... using default values." << endl; // The catcher will use the default values of BaseBallPlayer()
    cout << catcher.getRole() << " " << catcher.getID() << " generated!" << endl;


    cout << "\nA Shortstop requires an ID and Batting Average" << endl;
    cout << "What is the Shortstop's ID?  "; // Asks for ID
    cin >> id;
    cout << "What is the Shortstop's batting average?  "; // Asks for Batting Average
    cin >> bAve;
	BaseBallPlayer shortstop(id, bAve); // Shortstop will use the overloaded function 
    while (bAve < 0 || bAve > 1) // Checks if batAve is between 0-1
    {
        cout << "Invalid batting average, input must be between 0-1" << endl;
        cout << "Enter batting average: ";
        cin >> bAve;
    }
    cout << "Shortstop " << shortstop.getID() << " generated!" << endl;


    cout << "\nAn Outfielder only requires a Batting Average" << endl;
    cout << "What is the Outfielder's batting average?  ";
    cin >> bAve;
	BaseBallPlayer outfielder(bAve); // Outfielder will use the overloaded function 
    while (bAve < 0 || bAve > 1) // Checks if batAve is between 0-1
    {
        cout << "Invalid batting average, input must be between 0-1" << endl;
        cout << "Enter batting average: ";
        cin >> bAve;
    }
    cout << "Outfielder " << outfielder.getID() << " generated!" << endl;


    cout << "\nA Batter only requires an ID" << endl;
    cout << "What is the Batter's ID?  ";
    cin >> id;
	BaseBallPlayer batter(id); // Batter will use the overloaded function 
    cout << "Batter " << batter.getID() << " generated!" << endl;

    cout << "\nCatcher's Batting average is " << catcher.getbatAve() << endl; // Prints everyones averages
    cout << "Shortstop's Batting average is " << shortstop.getbatAve() << endl;
    cout << "Outfielder's Batting average is " << outfielder.getbatAve() << endl;
    cout << "Batter's Batting average is " << batter.getbatAve() << endl;
    double ave = (catcher.getbatAve() + shortstop.getbatAve() + outfielder.getbatAve() + batter.getbatAve()) / 4; // Calculates team's average
    cout << "The team's collective batting average is " << ave << endl;

    system("pause>nul");
    return 0;
}
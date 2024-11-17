// PopulationProjectCh5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
    int organisms = 0;
    double dailyincrease = 0;
    int days = 0;
    

    cout << "Organisms to start: " << endl;
    cin >> organisms;
    while (organisms < 2)
    {
        cout << "Organisms to start must be >=2" << endl << "Organisms to start: " << endl;
        cin >> organisms;
    }
    cout << "What is the daily percentage of population growth? " << endl;
    cin >> dailyincrease;
    while (dailyincrease < 0)
    {
        cout << "That is not a valid population growth rate" << endl << "Try again: " << endl;
        cin >> dailyincrease;
    }
    dailyincrease /= 100;
    cout << "Days to check growth: " << endl;
    cin >> days;
    while (days < 1)
    {
        cout << "That is not a valid number of days." << endl << "Try again: " << endl;
        cin >> days;
    }
    double popAtEnd = organisms;
    for (int i = 1; i <= days; ++i)
    {
        
        popAtEnd = popAtEnd + organisms * dailyincrease;
        cout << "Population after day"<< i << ": " << popAtEnd << endl;
        organisms = popAtEnd;
    }

}
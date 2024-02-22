// DICE ROLLING GAME.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
int dicerolling(int times)// times :number of simulating the dice
{
	int sum = 0;
	for (int i=1;i<=times;i++)
	  {
		 int guess = 1 + rand() % (6);
		 sum += guess;
		 std::cout <<" the number that appears on the dice: "<< guess<<endl;
		 
	   }
	return sum;
 }


int main()
{
	srand(time(0));
	int size;
	std::cout << " Enter the times you want to roll the dice";
	std::cin >> size;
	int total = dicerolling(size);
	std::cout << " The total is :" << total;

	
	return 0;

}


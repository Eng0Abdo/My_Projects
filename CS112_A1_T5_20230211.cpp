/*
 Purpose: 100 game. Two players start from 0 and alternatively add a number from 1 to 10 to the sum.
 The player who reaches 100 wins.
 Author: Abdulrhman Emad mahmoud 
 ID: 20230211
 Date: March 1, 2024.
 version: 2.0
 file name: CS112_A1_T5_20230211.cpp
*/

#include <iostream>
using namespace std;

// function to check that the input is int
int get_int_input()
{
	int num;
	while (!(cin >> num))
	{
		cout << "you must inter a number\n";
		cin.clear();
		cin.ignore(100, '\n');
	}
	return num;
}



// main function 
int main()
{
	int game_number = 0;
// game explanation	
	cout << " =========================welcome to the game===========================\n";
	cout << " first one to get 100 wins you can only choose a number between 1 and 10\n";
	cout << "                 =================================\n";
	while (game_number < 100)
	{
	// first player turn 
		cout << "first palyer turn please choose number between 1 and 10\n";

		int player1_choice = get_int_input();
		
		// to make sure that the first player input is a number between 1 and 10	
		while (1 > player1_choice || player1_choice > 10)
		{
			cout << "invalid choice please inter a number between 1 and 10\n";
			player1_choice = get_int_input();
		}
		game_number += player1_choice;
		// to make sure that the game number can't be more than 100
		while (game_number > 100)
		{
			cout << "Max number to choose is " << 100 - (game_number - player1_choice) << endl;
			cout << "please choose a number between  1 and " << 100 - (game_number - player1_choice) << endl;
			game_number = game_number - player1_choice;
			player1_choice = get_int_input();
			game_number += player1_choice;
		}
		cout << "current number is " << game_number << endl;
		if (game_number == 100)
		{
			cout << "the winner is player 1";
			break;
		}

	// second player turn 
		cout << "second palyer turn please choose number between 1 and 10\n";
		int player2_choice = get_int_input();
		// to make sure that the second player input is a number between 1 and 10
		while (1 > player2_choice || player2_choice > 10)
		{
			cout << "invalid choice please inter a number between 1 and 10\n";
			player2_choice = get_int_input();
		}
		game_number += player2_choice;
		// to make sure that the game number can't be more than 100
		while (game_number > 100)
		{
			cout << "Max number to choose is " << 100 - (game_number - player2_choice) << endl;
			cout << "please choose a number between  1 and " << 100 - (game_number - player2_choice) << endl;
			game_number = game_number - player2_choice;
			player2_choice = get_int_input();
			game_number += player2_choice;
		}
		cout << "current number is " << game_number << endl;
		if (game_number == 100)
		{
			cout << "the winner is player 2";
			break;
		}
	}
	return 0;
}
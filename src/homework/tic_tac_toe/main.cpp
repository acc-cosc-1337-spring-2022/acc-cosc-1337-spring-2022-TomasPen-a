#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <iostream>

using std::cout; using std::cin; using std::string;

int main() 
{
	TicTacToeManager manager;
	TicTacToe game;
	string first_player;
	string game_winner;
	string choice;
	bool player_choice = false;
	bool answer = false;
	bool game_ended;
	bool continue_game;
	int x = 0;
	int o = 0;
	int t = 0;

do
	{
		do
		{
			cout<<"Enter first player (X or O): ";
			cin>>first_player;
			if(first_player == "X" || first_player == "O")
			{
				player_choice = true;
			}
			else
			{
				cout<<"invalid entry!\n";
				player_choice = false;
			}
			
	    }while(player_choice == false);
		
		game.start_game(first_player);

		do
		{
			cin>>game;

			if(game.game_over() == true)
			{
				game_winner = game.get_winner();
				if(game_winner == "X" || game_winner == "O")
				{
					cout<<game;
					cout<<"Winner: "<<game_winner<<"\n";
					manager.save_game(game);
					manager.get_winner_total(x,o,t);
					cout<<"\nX Wins: "<<x<<"\n";
					cout<<"O Wins: "<<o<<"\n";
					cout<<"Ties: "<<t<<"\n";
					game_ended = true;

				}
				else if(game_winner == "C")
				{
					cout<<game;
					cout<<"Tie!\n";
					manager.save_game(game);
					manager.get_winner_total(x,o,t);
					cout<<"\nX Wins: "<<x<<"\n";
					cout<<"O Wins: "<<o<<"\n";
					cout<<"Ties: "<<t<<"\n";
					game_ended = true;

				}
			}
			else
			{
				cout<<game;
				game_ended = false;
			}
			
		}while(game_ended == false);

		do
		{
			cout<<"Continue? (y/n): ";
			cin>>choice;
			if(choice == "y" || choice == "n")
			{
				answer = true;
				if(choice == "y")
				{
					continue_game = true;
				}
				else
				{
					continue_game = false;
				}
			}
			else
			{
				cout<<"Invalid Entry!\n";
				answer = false;
			}
		} while (answer == false);
	}while(continue_game == true);

	cout<<"Game Over\n";
	cout<<manager;
	return 0;
}
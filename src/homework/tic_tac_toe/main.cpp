#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <iostream>

using std::cout; using std::cin; using std::string;

int main() 
{
	TicTacToeManager manager;
	string first_player;
	string game_winner;
	string choice;
	bool answer = false;
	bool game_ended;
	bool continue_game;
    int game_type;
	int x = 0;
	int o = 0;
	int t = 0;

    do
    {
        //declare tictactoe object
        std::unique_ptr<TicTacToe> game;

        do //have player choose grid type
        {
            cout<<"Choose 3x3 or 4x4 grid (3/4): ";
            cin>>game_type;

        } while (!(game_type == 3 || game_type == 4));

		do
		{
			cout<<"Enter first player (X or O): ";
			cin>>first_player;

	    }while(!(first_player == "X" || first_player == "O"));

        if(game_type == 3)//start game type
        {
            game = make_unique<TicTacToe3>();
        }
        else
        {
            game = make_unique<TicTacToe4>();
        }
        game->start_game(first_player);
		do//print winner
		{
			cin>>*game;

			if(game->game_over() == true)
			{
				game_winner = game->get_winner();
				if(game_winner == "X" || game_winner == "O")
				{
					cout<<*game;
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
					cout<<*game;
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
				cout<<*game;
				game_ended = false;
			}
			
		}while(game_ended == false);
		do//validate if player wants to continue
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
	cout<<manager;//prints past games
	return 0;
}
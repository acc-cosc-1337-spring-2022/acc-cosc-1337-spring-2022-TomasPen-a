//cpp
#include "tic_tac_toe_manager.h"
#include <iostream>

//tictactoe data constructor
TicTacToeManager::TicTacToeManager(TicTacToeData d)
: data{d}
{
    games = data.get_games();

    for (auto& game: games)
    {
        update_winner_count(game-> get_winner());//updates for manager
    }
    
}

//save game function
void TicTacToeManager::save_game(unique_ptr<TicTacToe>& game)
{
    update_winner_count(game->get_winner());
    games.push_back(std::move(game));
}

//get winner total function
void TicTacToeManager::get_winner_total(int& x, int& o, int& t)
{
    //declare player variables
    x = x_wins;
    o = o_wins;
    t = ties;
}

//update winner count function
void TicTacToeManager::update_winner_count(std::string winner)
{
    if(winner == "X")//if X Player wins, add point to score 
    {
        x_wins++;
    }
    else if(winner == "O")//if O Player wins, add point to score
    {
        o_wins++;
    }
    else 
    {
        ties++;//neither is a tie
    }
}

std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{

    for(auto& game: manager.games)
    {
        out<<*game<<"\n";
    }

    //displays all game session wins
    std::cout<<"X wins: "<<manager.x_wins<<"\n";
    std::cout<<"O wins: "<<manager.o_wins<<"\n";
    std::cout<<"Ties: "<<manager.ties<<"\n";

    return out;
}

//destructor
TicTacToeManager::~TicTacToeManager()
{
    std::cout<<"\n save games\n";
    data.save_games(games);
}
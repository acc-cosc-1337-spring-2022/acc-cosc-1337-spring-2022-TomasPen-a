//cpp
#include "tic_tac_toe_manager.h"
#include <memory>
#include <vector>
#include <utility>

void TicTacToeManager::save_game(unique_ptr<TicTacToe>& game)
{
    update_winner_count(game->get_winner());
    games.push_back(std::move(game));
}

void TicTacToeManager::get_winner_total(int& x, int& o, int& t)
{
    x = x_wins;
    o = o_wins;
    t = ties;
}

void TicTacToeManager::update_winner_count(std::string winner)
{
    if(winner == "X")
    {
        x_wins++;
    }
    else if(winner == "O")
    {
        o_wins++;
    }
    else 
    {
        ties++;
    }
}

std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{
  for(auto& game: manager.games)
  {
    out<<*game<<"\n";
  }

  std::cout<<"X wins: "<<manager.x_wins<<"\n";
  std::cout<<"O wins: "<<manager.o_wins<<"\n";
  std::cout<<"Ties: "<<manager.ties<<"\n";

  return out;
}
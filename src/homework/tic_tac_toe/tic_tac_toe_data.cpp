//cpp
#include "tic_tac_toe_data.h"
#include<fstream>

using std::string; using std::vector;
using std::unique_ptr; using std::ifstream;
using std::ofstream; using std::make_unique;

void TicTacToeData::save_games(const vector<unique_ptr<TicTacToe>>& games)
{
    ofstream outfile;//create file stream
    outfile.open(file_name);//open file

    if(outfile.is_open())
    {
        for (auto &game: games)
        {
            for(auto &peg: game->get_pegs())
            {
                outfile<<peg;//outputs each input in game 
            }

            outfile<<game->get_winner();//output winner
            outfile<<"\n";
        } 
    }
    outfile.close();//close file
}

vector<unique_ptr<TicTacToe>> TicTacToeData::get_games()
{
    vector<unique_ptr<TicTacToe>> games;//create games vector

    ifstream in_file;//create input file stream
    in_file.open(file_name);//open file
    string line;//create line

    if(in_file.is_open())
    {
        while (getline(in_file, line))//read each line
        {
            vector<string> pegs;//create local pegs vector

            for(size_t i = 0; i<line.size() - 1; ++i)
            {
                string ch(1, line[i]);//each character creates line
                pegs.push_back(ch);//pushed into pegs
            }

            string winner{line[line.size() -1]};//get winner from last character
            unique_ptr<TicTacToe> game;//uniwue game pointer

            if(pegs.size() == 9)//if pegs is size 9, create tictactoe 3
            {
                game = make_unique<TicTacToe3>(pegs, winner);
            }
            else if(pegs.size() == 16)//if pegs is size 16, create tictactoe 4
            {
                game = make_unique<TicTacToe4>(pegs, winner);
            }
            games.push_back(std::move(game));//move game to vector
        }
        in_file.close();//close file
    }
    return games;
}
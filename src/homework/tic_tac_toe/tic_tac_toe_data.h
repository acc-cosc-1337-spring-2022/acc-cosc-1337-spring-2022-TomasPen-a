//h
#include "tic_tac_toe.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_3.h"

#ifndef TIC_TAC_TOEDATA_H
#define TIC_TAC_TOEDATA_H

using std::vector; using std::unique_ptr;
using std::string;

class TicTacToeData
{
public:
    void save_games(const vector<unique_ptr<TicTacToe>>& games);
    vector<unique_ptr<TicTacToe>> get_games();

private:
    const string file_name{"tic_tac_toe.text"};
};

#endif
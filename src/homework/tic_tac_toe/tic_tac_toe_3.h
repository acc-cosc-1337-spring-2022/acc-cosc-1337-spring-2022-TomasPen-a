//h
#include "tic_tac_toe.h"

using std::string; using std::vector;

#ifndef TIC_TAC_TOE3_H
#define TIC_TAC_TOE3_H

class TicTacToe3 : public TicTacToe
{
public:
    TicTacToe3():TicTacToe(3){}
    TicTacToe3(vector<string> p, string win) : TicTacToe(p, win){}

private:
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
};
#endif
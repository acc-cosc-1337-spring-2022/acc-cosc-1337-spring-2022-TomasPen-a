//h
#include<string>
#include<vector>
#include<iostream>
#include<memory>
#include<utility>

#include "tic_tac_toe.h"
#include "tic_tac_toe_data.h"

using std::unique_ptr; using std::ostream;
using std::string;

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

class TicTacToeManager
{
public:
    TicTacToeManager(TicTacToeData data);
    void save_game(unique_ptr<TicTacToe>& game);
    friend ostream& operator<<(ostream& out, const TicTacToeManager& manager);
    void get_winner_total(int& o, int& w, int&t);
    ~TicTacToeManager();

private:
    std::vector<unique_ptr<TicTacToe>> games;
    TicTacToeData data;
    int x_wins = 0;
    int o_wins = 0;
    int ties = 0;
    void update_winner_count(string winner);
};
#endif
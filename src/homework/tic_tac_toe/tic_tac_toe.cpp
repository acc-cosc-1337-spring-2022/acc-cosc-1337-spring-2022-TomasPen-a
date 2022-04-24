//cpp
#include"tic_tac_toe.h"

using std::string; using std::cout;
using std::vector;

bool TicTacToe::game_over()
{

    if(check_column_win() || check_row_win() || check_diagonal_win())
    {
        set_winner();
        return true;
    }
    else if(TicTacToe::check_board_full())
    {
        winner = "C";
        return true;

    }
    return check_board_full();
}

void TicTacToe::start_game(string first_player)
{
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position)
{
    pegs[position-1] = player;
    set_next_player();
}

void TicTacToe::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}

bool TicTacToe::check_board_full()
{
    for(auto peg: pegs)
    {
        if(peg == " ")
        {
            return false;
        }
    }
    return true;
}

void TicTacToe::clear_board()
{
    for(auto& peg: pegs)
    {
        peg = " ";  
    }
}

bool TicTacToe::check_column_win()
{
    return false;
}

bool TicTacToe::check_row_win()
{
    return false;
}

bool TicTacToe::check_diagonal_win()
{
    return false;
}

void TicTacToe::set_winner()
{
    if(player == "X")
    {
        winner = "O";
    }
    else
    {
        winner = "X";
    }
    
}

std::istream& operator>>(std::istream& in, TicTacToe& game)
{
    int position;
    if(game.pegs.size() == 9)
    {
        cout<<"Enter your position (1-9): ";
        in>>position;

        if(position>=1 && position <=9)
        {
            game.mark_board(position);

        }
        else 
        {
            cout<<"\nInvalid Position";
        }
    }
    else if(game.pegs.size() == 16)
    {
        cout<<"Enter your position (1-16): ";
        in>>position;

        if(position>=1 && position <=16)
        {
            game.mark_board(position);

        }
        else 
        {
            cout<<"\nInvalid Position";
        }
    }
    return in;
}

std::ostream& operator<<(std::ostream& out, const TicTacToe& game)
{
    vector<string>pegs{9, " "};

    if(game.pegs.size() == 9)
    {
        for(int i=0; i < 9; i+=3)
        {
            cout<<game.pegs[i]<<"|"<<game.pegs[i+1]<<"|"<<game.pegs[i+2]<<"\n";

        }
    }
    else if(game.pegs.size() == 16)
    {
        for(int i=0; i < 16; i+=4)
        {
            cout<<game.pegs[i]<<"|"<<game.pegs[i+1]<<"|"<<game.pegs[i+2]<<"|"<<game.pegs[i+3]<<"\n";

        }
    }
    return out;
}
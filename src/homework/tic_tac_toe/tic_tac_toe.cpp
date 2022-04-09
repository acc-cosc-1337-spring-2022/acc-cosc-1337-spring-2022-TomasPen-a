//cpp
#include"tic_tac_toe.h"
using std::string; using std::cout;

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

// void TicTacToe::display_board()const{
//     for(int i=0; i < 9; i+=3)
//     {
//         std::cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
//     }
// }

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
    if(pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X")
    {
        return true;
    }
    if(pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O")
    {
        return true;
    }
    if(pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X")
    {
        return true;
    }
    if(pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O")
    {
        return true;
    }
    if(pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X")
    {
        return true;
    }
    if(pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O")
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

bool TicTacToe::check_row_win()
{
    if(pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X")
    {
        return true;
    }
    if(pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O")
    {
        return true;
    }
    if(pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X")
    {
        return true;
    }
    if(pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O")
    {
        return true;
    }
    if(pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X")
    {
        return true;
    }
    if(pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O")
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool TicTacToe::check_diagonal_win()
{
    if(pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X")
    {
        return true;
    }
    if(pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O")
    {
        return true;
    }
    if(pegs[2] == "X" && pegs[4] == "X" && pegs[6] == "X")
    {
        return true;
    }
    if(pegs[2] == "O" && pegs[4] == "O" && pegs[6] == "O")
    {
        return true;
    }
    else
    {
        return false;
    }
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

    std::cout<<"Enter your position (1-9): ";
    in>>position;

    if(position>=1 && position <=9)
    {
        game.mark_board(position);

    }
    else 
    {
        std::cout<<"\nInvalid Position";
    }

    return in;
}

std::ostream& operator<<(std::ostream& out, const TicTacToe& game)
{
    int board = game.pegs.size();

    if (board == 9)
    {
        out<<game.pegs[0]<<"|"<<game.pegs[1]<<"|"<<game.pegs[2]<<"\n"
        <<game.pegs[3]<<"|"<<game.pegs[4]<<"|"<<game.pegs[5]<<"\n"
        <<game.pegs[6]<<"|"<<game.pegs[7]<<"|"<<game.pegs[8]<<"\n\n";
    }
    else if(board == 16)
    {
        out<<game.pegs[0]<<"|"<<game.pegs[1]<<"|"<<game.pegs[2]<<"|"<<game.pegs[3]<<"\n"
        <<game.pegs[4]<<"|"<<game.pegs[5]<<"|"<<game.pegs[6]<<game.pegs[7]<<"\n"
        <<game.pegs[8]<<"|"<<game.pegs[9]<<"|"<<game.pegs[10]<<game.pegs[11]<<"\n"
        <<game.pegs[12]<<"|"<<game.pegs[13]<<"|"<<game.pegs[14]<<game.pegs[15]<<"\n\n";
    }
    else 
    {
        out<<"Size Error - Please Check\n";
    }
    return out;
    
}
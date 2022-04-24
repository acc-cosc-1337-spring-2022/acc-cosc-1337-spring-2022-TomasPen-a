#include "tic_tac_toe_3.h"

//check column win function
bool TicTacToe3::check_column_win()
{  
    //if player wins by column
    if(pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X")//X Player wins by 1, 4, 7
    {
        return true;
    }
    if(pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O")//O Player wins by 1, 4, 7
    {
        return true;
    }
    if(pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X")//X Player wins by 2, 5, 8
    {
        return true;
    }
    if(pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O")//O Player wins by 2, 5, 8
    {
        return true;
    }
    if(pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X")//X Player wins by 3, 6, 9
    {
        return true;
    }
    if(pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O")//O Player wins by 3, 6, 9
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

//check row win function
bool TicTacToe3::check_row_win()
{
    //if player wins by row
    if(pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X")//X Player wins by 1, 2, 3
    {
        return true;
    }
    if(pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O")//O Player wins by 1, 2, 3
    {
        return true;
    }
    if(pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X")//X Player wins by 4, 5, 6
    {
        return true;
    }
    if(pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O")//O Player wins by 4, 5, 6
    {
        return true;
    }
    if(pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X")//X Player wins by 7, 8, 9
    {
        return true;
    }
    if(pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O")//O Player wins by 7, 8, 9
    {
        return true;
    }
    else
    {
        return false;
    }
}

//check diagonal win function
bool TicTacToe3::check_diagonal_win()
{
    //if player wins by diagonal
    if(pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X")//X Player wins by 1, 5, 9
    {
        return true;
    }
    if(pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O")//O Player wins by 1, 5, 9
    {
        return true;
    }
    if(pegs[2] == "X" && pegs[4] == "X" && pegs[6] == "X")//X Player wins by 3, 5, 7
    {
        return true;
    }
    if(pegs[2] == "O" && pegs[4] == "O" && pegs[6] == "O")//O Player wins by 3, 5, 7
    {
        return true;
    }
    else
    {
        return false;
    }
}

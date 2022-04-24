#include "tic_tac_toe_4.h"

//check column win function
bool TicTacToe4::check_column_win()
{
    //if player wins by column
    if(pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X" && pegs[12] == "X")//X Player wins by 1, 5, 9, 13
    {
        return true;
    }
    if(pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O" && pegs[12] == "O")//O Player wins by 1, 5, 9, 13
    {
        return true;
    }
    if(pegs[1] == "X" && pegs[5] == "X" && pegs[9] == "X" && pegs[13] == "X")//X Player wins by 2, 6, 10, 14
    {
        return true;
    }
    if(pegs[1] == "O" && pegs[5] == "O" && pegs[9] == "O" && pegs[13] == "O")//O Player wins by 2, 6, 10, 14
    {
        return true;
    }
    if(pegs[2] == "X" && pegs[6] == "X" && pegs[10] == "X" && pegs[14] == "X")//X Player wins by 3, 7, 11, 15
    {
        return true;
    }
    if(pegs[2] == "O" && pegs[6] == "O" && pegs[10] == "O" && pegs[14] == "O")//O Player wins by 3, 7, 11, 15
    {
        return true;
    }
    if(pegs[3] == "X" && pegs[7] == "X" && pegs[11] == "X" && pegs[15] == "X")//X Player wins by 4, 8, 12, 16
    {
        return true;
    }
    if(pegs[3] == "O" && pegs[7] == "O" && pegs[11] == "O" && pegs[15] == "O")//O Player wins by 4, 8, 12, 16
    {
        return true;
    }
    else
    {
        return false;
    } 
}

//check row win function
bool TicTacToe4::check_row_win()
{
    //if player wins by row
    if(pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X" && pegs[3] == "X")//X Player wins by 1, 2, 3, 4
    {
        return true;
    }
    if(pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O" && pegs[3] == "O")//O Player wins by 1, 2, 3, 4
    {
        return true;
    }
    if(pegs[4] == "X" && pegs[5] == "X" && pegs[6] == "X" && pegs[7] == "X")//X Player wins by 5, 6, 7, 8
    {
        return true;
    }
    if(pegs[4] == "O" && pegs[5] == "O" && pegs[6] == "O" && pegs[7] == "O")//O Player wins by 5, 6, 7, 8
    {
        return true;
    }
    if(pegs[8] == "X" && pegs[9] == "X" && pegs[10] == "X" && pegs[11] == "X")//X Player wins by 9, 10, 11, 12
    {
        return true;
    }
    if(pegs[8] == "O" && pegs[9] == "O" && pegs[10] == "O" && pegs[11] == "O")//O Player wins by 9, 10, 11, 12
    {
        return true;
    }
    if(pegs[12] == "X" && pegs[13] == "X" && pegs[14] == "X" && pegs[15] == "X")//X Player wins by 13, 14, 15, 16
    {
        return true;
    }
    if(pegs[12] == "O" && pegs[13] == "O" && pegs[14] == "O" && pegs[15] == "O")//O Player wins by 13, 14, 15, 16
    {
        return true;
    }
    else
    {
        return false;
    }
}

//check diagonal win function
bool TicTacToe4::check_diagonal_win()
{
    //player wins by diagonal
    if(pegs[0] == "X" && pegs[5] == "X" && pegs[10] == "X" && pegs[15] == "X")//X Player wins by 1, 6, 11, 16 
    {
        return true;
    }
    if(pegs[0] == "O" && pegs[5] == "O" && pegs[10] == "O" && pegs[15] == "X")//O Player wins by 1, 6, 11, 16
    {
        return true;
    }
    if(pegs[3] == "X" && pegs[6] == "X" && pegs[9] == "X" && pegs[12] == "X")//X Player wins by 4, 7, 10, 13
    {
        return true;
    }
    if(pegs[3] == "O" && pegs[6] == "O" && pegs[9] == "O" && pegs[12] == "X")//O Player wins by 4, 7, 10, 13
    {
        return true;
    }
    else
    {
        return false;
    }
}
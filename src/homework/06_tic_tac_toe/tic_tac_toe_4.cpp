#include "tic_tac_toe_4.h"



bool TicTacToe4::check_column_win()
{
    for (int num = 0; num < 4; num++)
    {
        if(pegs[num] == "X" && pegs[num+4] == "X" && pegs[num+8] == "X" && pegs[num+12] == "X")
        {
            return true;
        }
        else if(pegs[num] == "O" && pegs[num+4] == "O" && pegs[num+8] == "O" && pegs[num+12] == "O")
        {
            return true;
        }
    }
    return false;
}


bool TicTacToe4::check_row_win()
{   
    for (int num = 0; num < 16; num+=4)
    {
        if(pegs[num] == "X" && pegs[num+1] == "X" && pegs[num+2] == "X" && pegs[num+3] == "X")
        {
            return true;
        }
        else if(pegs[num] == "O" && pegs[num+1] == "O" && pegs[num+2] == "O" && pegs[num+3] == "O")
        {
            return true;
        }
    }
    return false;
}


bool TicTacToe4::check_diagonal_win()
{   
    
    if (pegs[0] == "X" && pegs[5] == "X" && pegs[10] == "X" && pegs[15] == "X")
    {
        return true;
    }
    else if(pegs[3] == "X" && pegs[6] == "X" && pegs[9] == "X" && pegs[12] == "X")
    {
        return true;
    }
    else if(pegs[0] == "O" && pegs[5] == "O" && pegs[10] == "O" && pegs[15] == "O")
    {
        return true;
    }
    else if(pegs[3] == "O" && pegs[6] == "O" && pegs[9] == "O" && pegs[12] == "O")
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
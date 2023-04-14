#include "tic_tac_toe_3.h"


bool TicTacToe3::check_column_win()
{
    for (int num = 0; num < 3; num++)
    {
        if(pegs[num] == "X" && pegs[num+3] == "X" && pegs[num+6] == "X")
        {
            return true;
        }
        else if(pegs[num] == "O" && pegs[num+3] == "O" && pegs[num+6] == "O")
        {
            return true;
        }
    }
    return false;
}


bool TicTacToe3::check_row_win()
{   
    for (int num = 0; num < 9; num+=3)
    {
        if(pegs[num] == "X" && pegs[num+1] == "X" && pegs[num+2] == "X")
        {
            return true;
        }
        else if(pegs[num] == "O" && pegs[num+1] == "O" && pegs[num+2] == "O")
        {
            return true;
        }
    }
    return false;
}


bool TicTacToe3::check_diagonal_win()
{   
    
    if (pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X")
    {
        return true;
    }
    else if(pegs[2] == "X" && pegs[4] == "X" && pegs[6] == "X")
    {
        return true;
    }
    else if(pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O")
    {
        return true;
    }
    else if(pegs[2] == "O" && pegs[4] == "O" && pegs[6] == "O")
    {
        return true;
    }
    else
    {
        return false;
    }

    return false;
}
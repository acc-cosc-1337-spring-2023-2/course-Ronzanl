#include "tic_tac_toe.h"


bool TicTacToe::game_over()
{
    if (check_column_win() == true)
    {
        set_winner();
        return true;
    }
    else if (check_diagonal_win() == true)
    {
        set_winner();
        return true;
    }
    else if (check_row_win() == true)
    {
        set_winner();
        return true;
    }
    else if (check_board_full() == true)
    {
        winner = "C";
        return true;
    }
    else
    {
        return false;
    }
}

void TicTacToe::start_game(string first_player)
{
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int postion)
{
    pegs[postion - 1] = player;
    set_next_player();
}

string TicTacToe::get_player() const {return player;}

void TicTacToe::display_board() const
{
    for (int num = 0; num < 3; num++)
    {
        for (int num1 = 0; num1 < 3; num1++)
        {
            cout<<pegs[ (num*3) + num1 ];
            if( num1 < 2 ){ cout<<"|"; }
        }
        if(num < 2){cout<<"\n";}
    }
    cout<<"\n";
}

void TicTacToe::set_next_player()
{
    if (player == "X")
    {
        player = "O";
    }
    else if (player == "O")
    {
        player = "X";
    }
    
}

bool TicTacToe::check_board_full()
{
    for (int num = 0; num < 9; num++)
    {
        if (pegs[num] == " ")
        {
            return false;
        }
    }

return true;
}

void TicTacToe::clear_board()
{
    for (int num = 0; num < 9; num++)
    {
        pegs[num] = " ";
    }
}

string TicTacToe::get_winner()
{
    return winner;
}

bool TicTacToe::check_column_win()
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

bool TicTacToe::check_row_win()
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

bool TicTacToe::check_diagonal_win()
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
}

void TicTacToe::set_winner()
{
    if (player == "X")
    {
        winner = "O";
    }
    else
    {
        winner = "X";
    }
}
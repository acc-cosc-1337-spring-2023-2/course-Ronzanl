#include "tic_tac_toe.h"


bool TicTacToe::game_over()
{
    return check_board_full();
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
    else if (player == "O" )
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
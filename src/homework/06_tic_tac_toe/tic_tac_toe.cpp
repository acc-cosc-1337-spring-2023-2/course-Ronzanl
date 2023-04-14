#include "tic_tac_toe.h"


TicTacToe::TicTacToe(int size) : pegs(size*size , " "){}

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

string TicTacToe::get_player() const 
{
    return player;
}

ostream& operator<<(ostream& out, const TicTacToe& game)
{
    int row_size = sqrt(game.pegs.size());
    int size = static_cast<int>(game.pegs.size());

    for (int num = 0; num < size; num++)
    {
        out<<game.pegs[num];
        if( (num + 1) % row_size == 0 )
        { 
            out<<"\n"; 
        }
        else
        {
            out<<"|";
        }
        
    }
    out<<"\n";
    return out;
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
    
    for (int num = 0; num < pegs.size(); num++)
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
    return false;
}

bool TicTacToe::check_row_win()
{   
    return false;
}

bool TicTacToe::check_diagonal_win()
{   
    /*
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
    }*/

    return false;
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

istream& operator>>(istream& in, TicTacToe& game)
{
    int position;
    int max_size = game.pegs.size();

    while(true)
		{
			cout<<"Choose a space from 1 - "<<max_size<<": ";
			in>>position;
			if(position >=1 && position <= max_size)
			{
				break;
			}
			else
			{
				cout<<"Please enter a value between 1 and "<<max_size<<"\n";
			}
		}
		game.mark_board(position);
        return in;
}
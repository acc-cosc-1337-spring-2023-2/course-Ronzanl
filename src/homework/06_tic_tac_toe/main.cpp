#include "tic_tac_toe.h"



int main() 
{
 TicTacToe game;

 char value;

 do
 {
	string first_player;
	int position;

	while(first_player != "X" && first_player != "O")
	{
		cout<<"Player 1 - please select X or O: ";
		cin>>first_player;
		if(first_player == "X" || first_player == "O")
    	{
			cout<<"Game Start. \n\n";
        	break;
    	}
    	else
    	{
        	cout<<"Invalid Selection. Please try again: (X/O) \n";
    	}
	}
	value = 'c';
	game.start_game(first_player);

	while(game.game_over() == false)
	{
		while(true)
		{
			cout<<"Choose a space from 1 - 9: ";
			cin>>position;
			if(position >=1 && position <= 9)
			{
				break;
			}
			else
			{
				cout<<"Please enter a value between 1 and 9\n";
			}
		}
		game.mark_board(position);
		game.display_board();
	}
	cout<<"Game Over\n"<<"Player "<<game.get_winner()<<" Wins!\n\n";
	
	
	while(true)
	{
		cout<<"Would you like to play again? (Y/N): \n";
		cin>>value;

		if (value == 'n' || value == 'N' || value == 'y' || value == 'Y')
    	{
    		break;
    	}
    	else
		{
			cout<<"Invalid input. Please enter a Y or N\n";
		}

	}

 } while (value != 'n' && value != 'N');
 
	return 0;
}
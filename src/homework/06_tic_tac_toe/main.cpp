#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

using std::make_unique;


int main() 
{
 unique_ptr<TicTacToe> game;
 TicTacToeManager score;
 int o;
 int x;
 int t;
 char value;
 int size;

 do
 {

	while(true)
	{
		cout<<"Enter A Choice\n";
		cout<<"3: Normal Tic-Tac-Toe\n";
		cout<<"4: Crazy Tic-Tac-Toe (4x4 grid)\n";
		cin>>size;

		if (size == 3 || size == 4)
		{
			break;
		}
		else
		{
			cout<<"Please try again, Choose 3 or 4 to continue.";
		}
	}
	
	if(size == 3)
	{
		game = make_unique<TicTacToe3>();
	}
	else
	{
		game = make_unique<TicTacToe4>();	
	}


	string first_player;

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
	game->start_game(first_player);

	while(game->game_over() == false)
	{
	cin>>*game;
	cout<<*game;
	}

	if(game->get_winner() == "X" || game->get_winner() == "O")
	{
		cout<<"Game Over\n"<<"Player "<<game->get_winner()<<" Wins!\n\n";
	}
	else
	{
		cout<<"It's a tie!\n\n";
	}
	
	score.save_game(game);
	score.get_winner_total(o,x,t);

	cout<<"O wins: "<<o<<"\n";
	cout<<"X wins: "<<x<<"\n";
	cout<<"Ties: "<<t<<"\n";


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

 cout<<"\n\n";
 cout<<score;
 cout<<"\n\n";
 score.get_winner_total(o,x,t);
 cout<<"O wins: "<<o<<"\n";
 cout<<"X wins: "<<x<<"\n";
 cout<<"Ties: "<<t<<"\n\n";
 cout<<"Thanks for playing!\n";


 return 0; 
}
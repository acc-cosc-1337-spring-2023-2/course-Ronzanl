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
	}

	game.start_game(first_player);

	while(game.game_over() == false)
	{
		cout<<"Choose a space from 1 - 9: ";
		cin>>position;
		game.mark_board(position);
		game.display_board();
	}
	cout<<"Game Over\n";

	cout<<"Would you like to play again? (Y/N)";
	cin>>value;

 } while (value != 'n' && value != 'N');
 
	return 0;
}
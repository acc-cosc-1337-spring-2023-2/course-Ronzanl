#include <iostream>
#include <vector>
#include <string>

using std::cout; using std::cin; using std::string; using std::vector;
using std::ostream; using std::istream;

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe

{

friend ostream& operator<<(ostream& out, const TicTacToe& game);
friend istream& operator>>(istream& in, TicTacToe& game);

public:
bool game_over();
void start_game(string first_player);
void mark_board(int position);
string get_player()const;
string get_winner();

private:
string player;
vector<string> pegs{9, " "};
void set_next_player();
bool check_board_full();
void clear_board();
bool check_column_win();
bool check_row_win();
bool check_diagonal_win();
void set_winner();
string winner;

};


#endif
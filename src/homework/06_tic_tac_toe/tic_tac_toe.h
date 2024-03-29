#include <iostream>
#include <vector>
#include <string>
#include <cmath>
/*#include <memory>*/

using std::cout; using std::cin; using std::string; using std::vector;
using std::ostream; using std::istream;

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe

{

protected:
vector<string> pegs;
virtual bool check_column_win();
virtual bool check_row_win();
virtual bool check_diagonal_win();

private:
string player;
void set_next_player();
bool check_board_full();
void clear_board();
void set_winner();
string winner;

friend ostream& operator<<(ostream& out, const TicTacToe& game);
friend istream& operator>>(istream& in, TicTacToe& game);

public:
bool game_over();
void start_game(string first_player);
void mark_board(int position);
string get_player()const;
string get_winner();
vector<string> get_pegs() const;

TicTacToe(int size);

TicTacToe(vector<string> p, string win);


};


#endif
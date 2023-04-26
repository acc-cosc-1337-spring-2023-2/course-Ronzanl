#include <iostream>
#include <vector>
#include <memory>
#include "tic_tac_toe.h"
#include "tic_tac_toe_data.h"


using std::ostream; using std::vector;
using std::unique_ptr;

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

class TicTacToeManager
{

private:
vector<unique_ptr<TicTacToe>> games;
int x_win = 0;
int o_win = 0;
int ties = 0;
TicTacToeData data;

void update_winner_count(string winner);

public:
TicTacToeManager() = default;
TicTacToeManager(TicTacToeData& data);
~TicTacToeManager();

void save_game(unique_ptr<TicTacToe>& b);
friend ostream& operator<<(ostream& out, const TicTacToeManager& manager);
void get_winner_total(int& o, int& x, int& t);



};

#endif
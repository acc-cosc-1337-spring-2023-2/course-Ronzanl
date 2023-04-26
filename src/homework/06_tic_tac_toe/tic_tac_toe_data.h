#include "tic_tac_toe.h"
#include <memory>

using std::unique_ptr;

#ifndef TIC_TAC_TOE_DATA
#define TIC_TAC_TOE_DATA

class TicTacToeData
{

public:
    void save_games(const vector<unique_ptr<TicTacToe>>& games);
    vector <unique_ptr<TicTacToe>> get_games();
};


#endif
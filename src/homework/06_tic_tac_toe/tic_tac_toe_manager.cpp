#include "tic_tac_toe_manager.h"
#include "tic_tac_toe.h"

void TicTacToeManager::save_game(unique_ptr<TicTacToe>& b)
{
    update_winner_count(b->get_winner());
    games.push_back(move(b));
}

ostream& operator<<(ostream& out, const TicTacToeManager& manager)
{
    for (const auto& game : manager.games)
    {
        out<<*game<<"\n";
    }
    return out;
}

void TicTacToeManager::get_winner_total(int& o, int& x, int& t)
{
    o = o_win;
    x = x_win;
    t = ties;
}

void TicTacToeManager::update_winner_count(string winner)
{
    if (winner == "X")
    {
        x_win++;
    }
    else if (winner == "O")
    {
        o_win++;
    }
    else
    {
        ties++;
    }
}

TicTacToeManager::TicTacToeManager(TicTacToeData& data) : data(data)
{
    games = data.get_games();
    for (const auto& game : games)
    {
        update_winner_count(game -> get_winner());
    }
}

TicTacToeManager::~TicTacToeManager()
{
    data.save_games(games);
}
#include "tic_tac_toe_data.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <fstream>

using std::ofstream; using std::ifstream;
using std::getline; using std::make_unique;



void TicTacToeData::save_games(const vector<unique_ptr<TicTacToe>>& games)
{
    ofstream saveGame;
    saveGame.open("games_played.dat");

    for (const auto& game : games)
    {
        vector <string> pegs = game -> get_pegs();
        for (const string& s : pegs)
        {
            saveGame << s;
        }
        saveGame << game -> get_winner();

        saveGame << "\n";
        
    }
    saveGame.close();
}

vector <unique_ptr<TicTacToe>> TicTacToeData::get_games()
{
    vector<unique_ptr<TicTacToe>> games;
    string line;
    ifstream memoryCard;
    memoryCard.open("games_played.dat");

    if (memoryCard.is_open())
    {
        while(getline(memoryCard, line))
        {
            vector<string> pegs;
            for(size_t num = 0; num < line.size() - 1; num++)
            {
                pegs.emplace_back(string(1, line[num]));
            }
            string winner (1, line.back());

            if (pegs.size() == 9)
            {
                games.push_back(make_unique<TicTacToe3>(pegs, winner));
            }
            else if (pegs.size() == 16)
            {
                games.push_back(make_unique<TicTacToe4>(pegs, winner));
            }
        }
    memoryCard.close();
    }
    else
    {
        cout<<"Memory Card Corrupted. Please Try again\n";
    }
    return games;
}
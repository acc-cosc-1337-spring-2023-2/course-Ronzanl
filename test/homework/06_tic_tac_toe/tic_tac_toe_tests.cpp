#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <memory>

using std::make_unique;

TEST_CASE("Verify Test Configuration", "Verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test Game Over - 9 Slots", "3*3") {
	unique_ptr<TicTacToe> test_game = make_unique<TicTacToe3>();

	test_game->start_game("X");
	
	test_game->mark_board(1);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(2);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(3);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(4);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(5);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(7);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(6);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(9);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(8);
	REQUIRE(test_game->game_over() == true);
	REQUIRE(test_game->get_winner() == "C");
}

TEST_CASE("Verify Test first player set to X", "3*3") {
	
	unique_ptr<TicTacToe> test_game = make_unique<TicTacToe3>();

	test_game->start_game("X");
	REQUIRE(test_game->get_player() == "X");
}

TEST_CASE("Verify Test first player set to O", "3*3") {
	
	unique_ptr<TicTacToe> test_game = make_unique<TicTacToe3>();

	test_game->start_game("O");
	REQUIRE(test_game->get_player() == "O");
}

TEST_CASE("Test win by first column", "3*3") {
	
	unique_ptr<TicTacToe> test_game = make_unique<TicTacToe3>();

	test_game->start_game("X");
	test_game->mark_board(1);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(2);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(4);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(8);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(7);
	REQUIRE(test_game->game_over() == true);
	REQUIRE(test_game->get_winner() == "X");
}

TEST_CASE("Test win by second column", "3*3") {
	
	unique_ptr<TicTacToe> test_game = make_unique<TicTacToe3>();

	test_game->start_game("X");
	test_game->mark_board(2);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(3);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(5);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(7);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(8);
	REQUIRE(test_game->game_over() == true);
	REQUIRE(test_game->get_winner() == "X");
}

TEST_CASE("Test win by third column", "3*3") {
	
	unique_ptr<TicTacToe> test_game = make_unique<TicTacToe3>();

	test_game->start_game("X");
	test_game->mark_board(3);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(2);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(6);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(8);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(9);
	REQUIRE(test_game->game_over() == true);
	REQUIRE(test_game->get_winner() == "X");
}

TEST_CASE("Test win by first row", "3*3") {
	
	unique_ptr<TicTacToe> test_game = make_unique<TicTacToe3>();

	test_game->start_game("X");
	test_game->mark_board(1);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(5);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(2);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(8);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(3);
	REQUIRE(test_game->game_over() == true);
	REQUIRE(test_game->get_winner() == "X");
}

TEST_CASE("Test win by second row", "3*3") {
	
	unique_ptr<TicTacToe> test_game = make_unique<TicTacToe3>();

	test_game->start_game("X");
	test_game->mark_board(4);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(2);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(5);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(8);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(6);
	REQUIRE(test_game->game_over() == true);
	REQUIRE(test_game->get_winner() == "X");
}

TEST_CASE("Test win by third row", "3*3") {
	
	unique_ptr<TicTacToe> test_game = make_unique<TicTacToe3>();

	test_game->start_game("X");
	test_game->mark_board(7);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(2);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(8);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(5);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(9);
	REQUIRE(test_game->game_over() == true);
	REQUIRE(test_game->get_winner() == "X");
}

TEST_CASE("Test win diagonally from top left", "3*3") {
	
	unique_ptr<TicTacToe> test_game = make_unique<TicTacToe3>();

	test_game->start_game("X");
	test_game->mark_board(1);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(2);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(5);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(8);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(9);
	REQUIRE(test_game->game_over() == true);
	REQUIRE(test_game->get_winner() == "X");
}

TEST_CASE("Test win diagonally from bottom left", "3*3") {
	
	unique_ptr<TicTacToe> test_game = make_unique<TicTacToe3>();

	test_game->start_game("X");
	test_game->mark_board(7);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(2);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(5);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(8);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(3);
	REQUIRE(test_game->game_over() == true);
	REQUIRE(test_game->get_winner() == "X");
}

TEST_CASE("Test Manager Get Winner Manager Function", "3*3") {
	
	unique_ptr<TicTacToe> test_manager_game = make_unique<TicTacToe3>();
	TicTacToeManager test_manage;
	int o;
	int x;
	int t;

	test_manager_game->start_game("X");
	test_manager_game->mark_board(1);
	REQUIRE(test_manager_game->game_over() == false);

	test_manager_game->mark_board(2);
	REQUIRE(test_manager_game->game_over() == false);

	test_manager_game->mark_board(4);
	REQUIRE(test_manager_game->game_over() == false);

	test_manager_game->mark_board(8);
	REQUIRE(test_manager_game->game_over() == false);

	test_manager_game->mark_board(7);
	REQUIRE(test_manager_game->game_over() == true);
	REQUIRE(test_manager_game->get_winner() == "X");

	test_manage.save_game(test_manager_game);
	test_manage.get_winner_total(o,x,t);

	REQUIRE(o == 0);
	REQUIRE(x == 1);
	REQUIRE(t == 0);

	unique_ptr<TicTacToe> test_manager_game2 = make_unique<TicTacToe3>();
	test_manager_game2->start_game("O");
	test_manager_game2->mark_board(7);
	REQUIRE(test_manager_game2->game_over() == false);

	test_manager_game2->mark_board(2);
	REQUIRE(test_manager_game2->game_over() == false);

	test_manager_game2->mark_board(5);
	REQUIRE(test_manager_game2->game_over() == false);

	test_manager_game2->mark_board(8);
	REQUIRE(test_manager_game2->game_over() == false);

	test_manager_game2->mark_board(3);
	REQUIRE(test_manager_game2->game_over() == true);
	REQUIRE(test_manager_game2->get_winner() == "O");

	test_manage.save_game(test_manager_game2);
	test_manage.get_winner_total(o,x,t);

	REQUIRE(o == 1);
	REQUIRE(x == 1);
	REQUIRE(t == 0);

	unique_ptr<TicTacToe> test_manager_game3 = make_unique<TicTacToe3>();

	test_manager_game3->start_game("X");
	
	test_manager_game3->mark_board(1);
	REQUIRE(test_manager_game3->game_over() == false);

	test_manager_game3->mark_board(2);
	REQUIRE(test_manager_game3->game_over() == false);

	test_manager_game3->mark_board(3);
	REQUIRE(test_manager_game3->game_over() == false);

	test_manager_game3->mark_board(4);
	REQUIRE(test_manager_game3->game_over() == false);

	test_manager_game3->mark_board(5);
	REQUIRE(test_manager_game3->game_over() == false);

	test_manager_game3->mark_board(7);
	REQUIRE(test_manager_game3->game_over() == false);

	test_manager_game3->mark_board(6);
	REQUIRE(test_manager_game3->game_over() == false);

	test_manager_game3->mark_board(9);
	REQUIRE(test_manager_game3->game_over() == false);

	test_manager_game3->mark_board(8);
	REQUIRE(test_manager_game3->game_over() == true);
	REQUIRE(test_manager_game3->get_winner() == "C");

	test_manage.save_game(test_manager_game3);
	test_manage.get_winner_total(o,x,t);

	REQUIRE(o == 1);
	REQUIRE(x == 1);
	REQUIRE(t == 1);
}

TEST_CASE("Test Game Over - 16 Slots", "4*4") 
{
	unique_ptr<TicTacToe> test_game = make_unique<TicTacToe4>();

	test_game->start_game("X");
	
	test_game->mark_board(1);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(2);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(3);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(4);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(6);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(5);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(7);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(8);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(10);
	REQUIRE(test_game->game_over() == false);
	
	test_game->mark_board(9);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(12);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(11);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(13);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(14);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(15);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(16);
	REQUIRE(test_game->game_over() == true);
	REQUIRE(test_game->get_winner() == "C");
}

TEST_CASE("Verify Test first player set to X - 4*4", "4*4") {
	
	unique_ptr<TicTacToe> test_game = make_unique<TicTacToe4>();

	test_game->start_game("X");
	REQUIRE(test_game->get_player() == "X");
}

TEST_CASE("Verify Test first player set to O - 4*4", "4*4") {
	
	unique_ptr<TicTacToe> test_game = make_unique<TicTacToe4>();

	test_game->start_game("O");
	REQUIRE(test_game->get_player() == "O");
}

TEST_CASE("Test win by first column - 4*4", "4*4") {
	
	unique_ptr<TicTacToe> test_game = make_unique<TicTacToe4>();

	test_game->start_game("X");
	test_game->mark_board(1);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(2);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(5);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(8);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(9);
	REQUIRE(test_game->game_over() == false);
	
	test_game->mark_board(16);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(13);
	REQUIRE(test_game->game_over() == true);
	REQUIRE(test_game->get_winner() == "X");
}

TEST_CASE("Test win by second column - 4*4", "4*4") {
	
	unique_ptr<TicTacToe> test_game = make_unique<TicTacToe4>();

	test_game->start_game("X");
	test_game->mark_board(2);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(3);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(6);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(8);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(10);
	REQUIRE(test_game->game_over() == false);
	
	test_game->mark_board(16);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(14);
	REQUIRE(test_game->game_over() == true);
	REQUIRE(test_game->get_winner() == "X");
}

TEST_CASE("Test win by third column - 4*4", "4*4") {
	
	unique_ptr<TicTacToe> test_game = make_unique<TicTacToe4>();

	test_game->start_game("X");
	test_game->mark_board(3);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(2);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(7);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(8);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(11);
	REQUIRE(test_game->game_over() == false);
	
	test_game->mark_board(16);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(15);
	REQUIRE(test_game->game_over() == true);
	REQUIRE(test_game->get_winner() == "X");
}

TEST_CASE("Test win by fourth column - 4*4", "4*4") {
	
	unique_ptr<TicTacToe> test_game = make_unique<TicTacToe4>();

	test_game->start_game("X");
	test_game->mark_board(4);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(2);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(8);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(7);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(12);
	REQUIRE(test_game->game_over() == false);
	
	test_game->mark_board(15);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(16);
	REQUIRE(test_game->game_over() == true);
	REQUIRE(test_game->get_winner() == "X");
}

TEST_CASE("Test win by first row - 4*4", "4*4") {
	
	unique_ptr<TicTacToe> test_game = make_unique<TicTacToe4>();

	test_game->start_game("X");
	test_game->mark_board(1);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(5);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(2);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(7);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(3);
	REQUIRE(test_game->game_over() == false);
	
	test_game->mark_board(15);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(4);
	REQUIRE(test_game->game_over() == true);
	REQUIRE(test_game->get_winner() == "X");
}

TEST_CASE("Test win by second row - 4*4", "4*4") {
	
	unique_ptr<TicTacToe> test_game = make_unique<TicTacToe4>();

	test_game->start_game("X");
	test_game->mark_board(5);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(4);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(6);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(1);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(7);
	REQUIRE(test_game->game_over() == false);
	
	test_game->mark_board(15);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(8);
	REQUIRE(test_game->game_over() == true);
	REQUIRE(test_game->get_winner() == "X");
}

TEST_CASE("Test win by third row - 4*4", "4*4") {
	
	unique_ptr<TicTacToe> test_game = make_unique<TicTacToe4>();

	test_game->start_game("X");
	test_game->mark_board(9);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(4);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(10);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(1);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(11);
	REQUIRE(test_game->game_over() == false);
	
	test_game->mark_board(15);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(12);
	REQUIRE(test_game->game_over() == true);
	REQUIRE(test_game->get_winner() == "X");
}

TEST_CASE("Test win by fourth row - 4*4", "4*4") {
	
	unique_ptr<TicTacToe> test_game = make_unique<TicTacToe4>();

	test_game->start_game("X");
	test_game->mark_board(13);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(4);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(14);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(1);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(15);
	REQUIRE(test_game->game_over() == false);
	
	test_game->mark_board(8);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(16);
	REQUIRE(test_game->game_over() == true);
	REQUIRE(test_game->get_winner() == "X");
}

TEST_CASE("Test win diagonally from top left - 4*4", "4*4") {
	
	unique_ptr<TicTacToe> test_game = make_unique<TicTacToe4>();

	test_game->start_game("X");
	test_game->mark_board(1);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(4);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(6);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(5);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(11);
	REQUIRE(test_game->game_over() == false);
	
	test_game->mark_board(8);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(16);
	REQUIRE(test_game->game_over() == true);
	REQUIRE(test_game->get_winner() == "X");
}

TEST_CASE("Test win diagonally from bottom left - 4*4", "4*4") {
	
	unique_ptr<TicTacToe> test_game = make_unique<TicTacToe4>();

	test_game->start_game("X");
	test_game->mark_board(4);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(5);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(7);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(9);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(10);
	REQUIRE(test_game->game_over() == false);
	
	test_game->mark_board(8);
	REQUIRE(test_game->game_over() == false);

	test_game->mark_board(13);
	REQUIRE(test_game->game_over() == true);
	REQUIRE(test_game->get_winner() == "X");
}

TEST_CASE("Test Manager Get Winner Manager Function - 4*4", "4*4") {
	
	unique_ptr<TicTacToe> test_manager_game = make_unique<TicTacToe4>();
	TicTacToeManager test_manage;
	int o;
	int x;
	int t;

	test_manager_game->start_game("X");
	test_manager_game->mark_board(1);
	REQUIRE(test_manager_game->game_over() == false);

	test_manager_game->mark_board(2);
	REQUIRE(test_manager_game->game_over() == false);

	test_manager_game->mark_board(5);
	REQUIRE(test_manager_game->game_over() == false);

	test_manager_game->mark_board(8);
	REQUIRE(test_manager_game->game_over() == false);

	test_manager_game->mark_board(9);
	REQUIRE(test_manager_game->game_over() == false);
	
	test_manager_game->mark_board(16);
	REQUIRE(test_manager_game->game_over() == false);

	test_manager_game->mark_board(13);
	REQUIRE(test_manager_game->game_over() == true);
	REQUIRE(test_manager_game->get_winner() == "X");

	test_manage.save_game(test_manager_game);
	test_manage.get_winner_total(o,x,t);

	REQUIRE(o == 0);
	REQUIRE(x == 1);
	REQUIRE(t == 0);

	unique_ptr<TicTacToe> test_manager_game2 = make_unique<TicTacToe4>();
	test_manager_game2->start_game("O");
	test_manager_game2->mark_board(5);
	REQUIRE(test_manager_game2->game_over() == false);

	test_manager_game2->mark_board(4);
	REQUIRE(test_manager_game2->game_over() == false);

	test_manager_game2->mark_board(6);
	REQUIRE(test_manager_game2->game_over() == false);

	test_manager_game2->mark_board(1);
	REQUIRE(test_manager_game2->game_over() == false);

	test_manager_game2->mark_board(7);
	REQUIRE(test_manager_game2->game_over() == false);
	
	test_manager_game2->mark_board(15);
	REQUIRE(test_manager_game2->game_over() == false);

	test_manager_game2->mark_board(8);
	REQUIRE(test_manager_game2->game_over() == true);
	REQUIRE(test_manager_game2->get_winner() == "O");

	test_manage.save_game(test_manager_game2);
	test_manage.get_winner_total(o,x,t);

	REQUIRE(o == 1);
	REQUIRE(x == 1);
	REQUIRE(t == 0);

	unique_ptr<TicTacToe> test_manager_game3 = make_unique<TicTacToe4>();

	test_manager_game3->start_game("X");
	
	test_manager_game3->mark_board(1);
	REQUIRE(test_manager_game3->game_over() == false);

	test_manager_game3->mark_board(2);
	REQUIRE(test_manager_game3->game_over() == false);

	test_manager_game3->mark_board(3);
	REQUIRE(test_manager_game3->game_over() == false);

	test_manager_game3->mark_board(4);
	REQUIRE(test_manager_game3->game_over() == false);

	test_manager_game3->mark_board(6);
	REQUIRE(test_manager_game3->game_over() == false);

	test_manager_game3->mark_board(5);
	REQUIRE(test_manager_game3->game_over() == false);

	test_manager_game3->mark_board(7);
	REQUIRE(test_manager_game3->game_over() == false);

	test_manager_game3->mark_board(8);
	REQUIRE(test_manager_game3->game_over() == false);

	test_manager_game3->mark_board(10);
	REQUIRE(test_manager_game3->game_over() == false);
	
	test_manager_game3->mark_board(9);
	REQUIRE(test_manager_game3->game_over() == false);

	test_manager_game3->mark_board(12);
	REQUIRE(test_manager_game3->game_over() == false);

	test_manager_game3->mark_board(11);
	REQUIRE(test_manager_game3->game_over() == false);

	test_manager_game3->mark_board(13);
	REQUIRE(test_manager_game3->game_over() == false);

	test_manager_game3->mark_board(14);
	REQUIRE(test_manager_game3->game_over() == false);

	test_manager_game3->mark_board(15);
	REQUIRE(test_manager_game3->game_over() == false);

	test_manager_game3->mark_board(16);
	REQUIRE(test_manager_game3->game_over() == true);
	REQUIRE(test_manager_game3->get_winner() == "C");

	test_manage.save_game(test_manager_game3);
	test_manage.get_winner_total(o,x,t);

	REQUIRE(o == 1);
	REQUIRE(x == 1);
	REQUIRE(t == 1);
}
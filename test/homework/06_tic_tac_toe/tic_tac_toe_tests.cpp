#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test Game Over - 9 Slots", "verification") {
	TicTacToe test_game;

	test_game.start_game("X");
	
	test_game.mark_board(1);
	REQUIRE(test_game.game_over() == false);

	test_game.mark_board(2);
	REQUIRE(test_game.game_over() == false);

	test_game.mark_board(3);
	REQUIRE(test_game.game_over() == false);

	test_game.mark_board(4);
	REQUIRE(test_game.game_over() == false);

	test_game.mark_board(5);
	REQUIRE(test_game.game_over() == false);

	test_game.mark_board(7);
	REQUIRE(test_game.game_over() == false);

	test_game.mark_board(6);
	REQUIRE(test_game.game_over() == false);

	test_game.mark_board(9);
	REQUIRE(test_game.game_over() == false);

	test_game.mark_board(8);
	REQUIRE(test_game.game_over() == true);
	REQUIRE(test_game.get_winner() == "C");
}

TEST_CASE("Verify Test first player set to X", "verification") {
	
	TicTacToe test_game;

	test_game.start_game("X");
	REQUIRE(test_game.get_player() == "X");
}

TEST_CASE("Verify Test first player set to O", "verification") {
	
	TicTacToe test_game;

	test_game.start_game("O");
	REQUIRE(test_game.get_player() == "O");
}

TEST_CASE("Test win by first column", "verification") {
	
	TicTacToe test_game;

	test_game.start_game("X");
	test_game.mark_board(1);
	REQUIRE(test_game.game_over() == false);

	test_game.mark_board(2);
	REQUIRE(test_game.game_over() == false);

	test_game.mark_board(4);
	REQUIRE(test_game.game_over() == false);

	test_game.mark_board(8);
	REQUIRE(test_game.game_over() == false);

	test_game.mark_board(7);
	REQUIRE(test_game.game_over() == true);
}

TEST_CASE("Test win by second column", "verification") {
	
	TicTacToe test_game;

	test_game.start_game("X");
	test_game.mark_board(2);
	REQUIRE(test_game.game_over() == false);

	test_game.mark_board(3);
	REQUIRE(test_game.game_over() == false);

	test_game.mark_board(5);
	REQUIRE(test_game.game_over() == false);

	test_game.mark_board(7);
	REQUIRE(test_game.game_over() == false);

	test_game.mark_board(8);
	REQUIRE(test_game.game_over() == true);
}

TEST_CASE("Test win by third column", "verification") {
	
	TicTacToe test_game;

	test_game.start_game("X");
	test_game.mark_board(3);
	REQUIRE(test_game.game_over() == false);

	test_game.mark_board(2);
	REQUIRE(test_game.game_over() == false);

	test_game.mark_board(6);
	REQUIRE(test_game.game_over() == false);

	test_game.mark_board(8);
	REQUIRE(test_game.game_over() == false);

	test_game.mark_board(9);
	REQUIRE(test_game.game_over() == true);
}

TEST_CASE("Test win by first row", "verification") {
	
	TicTacToe test_game;

	test_game.start_game("X");
	test_game.mark_board(1);
	REQUIRE(test_game.game_over() == false);

	test_game.mark_board(5);
	REQUIRE(test_game.game_over() == false);

	test_game.mark_board(2);
	REQUIRE(test_game.game_over() == false);

	test_game.mark_board(8);
	REQUIRE(test_game.game_over() == false);

	test_game.mark_board(3);
	REQUIRE(test_game.game_over() == true);
}

TEST_CASE("Test win by second row", "verification") {
	
	TicTacToe test_game;

	test_game.start_game("X");
	test_game.mark_board(4);
	REQUIRE(test_game.game_over() == false);

	test_game.mark_board(2);
	REQUIRE(test_game.game_over() == false);

	test_game.mark_board(5);
	REQUIRE(test_game.game_over() == false);

	test_game.mark_board(8);
	REQUIRE(test_game.game_over() == false);

	test_game.mark_board(6);
	REQUIRE(test_game.game_over() == true);
}

TEST_CASE("Test win by third row", "verification") {
	
	TicTacToe test_game;

	test_game.start_game("X");
	test_game.mark_board(7);
	REQUIRE(test_game.game_over() == false);

	test_game.mark_board(2);
	REQUIRE(test_game.game_over() == false);

	test_game.mark_board(8);
	REQUIRE(test_game.game_over() == false);

	test_game.mark_board(5);
	REQUIRE(test_game.game_over() == false);

	test_game.mark_board(9);
	REQUIRE(test_game.game_over() == true);
}

TEST_CASE("Test win diagonally from top left", "verification") {
	
	TicTacToe test_game;

	test_game.start_game("X");
	test_game.mark_board(1);
	REQUIRE(test_game.game_over() == false);

	test_game.mark_board(2);
	REQUIRE(test_game.game_over() == false);

	test_game.mark_board(5);
	REQUIRE(test_game.game_over() == false);

	test_game.mark_board(8);
	REQUIRE(test_game.game_over() == false);

	test_game.mark_board(9);
	REQUIRE(test_game.game_over() == true);
}

TEST_CASE("Test win diagonally from bottom left", "verification") {
	
	TicTacToe test_game;

	test_game.start_game("X");
	test_game.mark_board(7);
	REQUIRE(test_game.game_over() == false);

	test_game.mark_board(2);
	REQUIRE(test_game.game_over() == false);

	test_game.mark_board(5);
	REQUIRE(test_game.game_over() == false);

	test_game.mark_board(8);
	REQUIRE(test_game.game_over() == false);

	test_game.mark_board(3);
	REQUIRE(test_game.game_over() == true);
}
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test first player set to X")
{
	TicTacToe game;
	game.start_game("X");
	REQUIRE("X" == game.get_player());

}

TEST_CASE("Test first player set to O")
{
	TicTacToe game;

	game.start_game("O");
	REQUIRE("O" == game.get_player());
}

TEST_CASE("Test tic tac toe game over for a tie")
{
	TicTacToe game;

	game.mark_board(1);
	REQUIRE(false == game.game_over());

	game.mark_board(2);
	REQUIRE(false == game.game_over());

	game.mark_board(3);
	REQUIRE(false == game.game_over());

	game.mark_board(4);
	REQUIRE(false == game.game_over());

	game.mark_board(5);
	REQUIRE(false == game.game_over());

	game.mark_board(7);
	REQUIRE(false == game.game_over());

	game.mark_board(6);
	REQUIRE(false == game.game_over());

	game.mark_board(9);
	REQUIRE(false == game.game_over());

	game.mark_board(8);
	REQUIRE(true == game.game_over());
	REQUIRE("C" == game.get_winner());
}

TEST_CASE("Test win by first column")
{
	TicTacToe game;

	game.start_game("X");
	game.mark_board(1);
	REQUIRE(false == game.game_over());
	game.mark_board(3);
	REQUIRE(false == game.game_over());
	game.mark_board(4);
	REQUIRE(false == game.game_over());
	game.mark_board(5);
	REQUIRE(false == game.game_over());
	game.mark_board(7);
	REQUIRE(true == game.game_over());


	REQUIRE("X" == game.get_winner());
}

TEST_CASE("Test win by second column")
{
	TicTacToe game;

	game.start_game("X");
	game.mark_board(2);
	REQUIRE(false == game.game_over());
	game.mark_board(3);
	REQUIRE(false == game.game_over());
	game.mark_board(5);
	REQUIRE(false == game.game_over());
	game.mark_board(6);
	REQUIRE(false == game.game_over());
	game.mark_board(8);
	REQUIRE(true == game.game_over());


	REQUIRE("X" == game.get_winner());
}

TEST_CASE("Test win by third column")
{
	TicTacToe game;

	game.start_game("X");
	game.mark_board(3);
	REQUIRE(false == game.game_over());
	game.mark_board(4);
	REQUIRE(false == game.game_over());
	game.mark_board(6);
	REQUIRE(false == game.game_over());
	game.mark_board(5);
	REQUIRE(false == game.game_over());
	game.mark_board(9);
	REQUIRE(true == game.game_over());


	REQUIRE("X" == game.get_winner());
}

TEST_CASE("Test win by first row")
{
	TicTacToe game;

	game.start_game("X");
	game.mark_board(1);
	REQUIRE(false == game.game_over());
	game.mark_board(4);
	REQUIRE(false == game.game_over());
	game.mark_board(2);
	REQUIRE(false == game.game_over());
	game.mark_board(5);
	REQUIRE(false == game.game_over());
	game.mark_board(3);
	REQUIRE(true == game.game_over());


	REQUIRE("X" == game.get_winner());
}

TEST_CASE("Test win by second row")
{
	TicTacToe game;

	game.start_game("X");
	game.mark_board(4);
	REQUIRE(false == game.game_over());
	game.mark_board(3);
	REQUIRE(false == game.game_over());
	game.mark_board(5);
	REQUIRE(false == game.game_over());
	game.mark_board(7);
	REQUIRE(false == game.game_over());
	game.mark_board(6);
	REQUIRE(true == game.game_over());


	REQUIRE("X" == game.get_winner());
}

TEST_CASE("Test win by third row")
{
	TicTacToe game;

	game.start_game("X");
	game.mark_board(7);
	REQUIRE(false == game.game_over());
	game.mark_board(2);
	REQUIRE(false == game.game_over());
	game.mark_board(8);
	REQUIRE(false == game.game_over());
	game.mark_board(3);
	REQUIRE(false == game.game_over());
	game.mark_board(9);
	REQUIRE(true == game.game_over());


	REQUIRE("X" == game.get_winner());
}

TEST_CASE("Test win by diagonally from top left")
{
	TicTacToe game;

	game.start_game("X");
	game.mark_board(1);
	REQUIRE(false == game.game_over());
	game.mark_board(3);
	REQUIRE(false == game.game_over());
	game.mark_board(5);
	REQUIRE(false == game.game_over());
	game.mark_board(4);
	REQUIRE(false == game.game_over());
	game.mark_board(9);
	REQUIRE(true == game.game_over());


	REQUIRE("X" == game.get_winner());
}

TEST_CASE("Test win by diafonally from bottom left")
{
	TicTacToe game;

	game.start_game("X");
	game.mark_board(7);
	REQUIRE(false == game.game_over());
	game.mark_board(1);
	REQUIRE(false == game.game_over());
	game.mark_board(5);
	REQUIRE(false == game.game_over());
	game.mark_board(9);
	REQUIRE(false == game.game_over());
	game.mark_board(3);
	REQUIRE(true == game.game_over());


	REQUIRE("X" == game.get_winner());
}
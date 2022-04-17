#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include<iostream>

TEST_CASE("Verify Test Configuration", "verification") 
{
	REQUIRE(true == true);
}

TEST_CASE("Test first player set to X")
{
	unique_ptr<TicTacToe> board = make_unique<TicTacToe3>();

	board->start_game("X");
	REQUIRE("X" == board->get_player());
}

TEST_CASE("Test first player set to O")
{
	unique_ptr<TicTacToe> board = make_unique<TicTacToe3>();
	
	board->start_game("O");
	REQUIRE("O" == board->get_player());
}

TEST_CASE("Test tic tac toe 3 board over for a tie")
{
	int x_test, o_test, t_test;
	TicTacToeManager manager;
	unique_ptr<TicTacToe> board = make_unique<TicTacToe3>();

	board->mark_board(1);
	REQUIRE(false == board->game_over());
	board->mark_board(2);
	REQUIRE(false == board->game_over());
	board->mark_board(3);
	REQUIRE(false == board->game_over());
	board->mark_board(4);
	REQUIRE(false == board->game_over());
	board->mark_board(5);
	REQUIRE(false == board->game_over());
	board->mark_board(7);
	REQUIRE(false == board->game_over());
	board->mark_board(6);
	REQUIRE(false == board->game_over());
	board->mark_board(9);
	REQUIRE(false == board->game_over());
	board->mark_board(8);
	REQUIRE(true == board->game_over());

	REQUIRE("C" == board->get_winner());
	manager.save_game(board);
	manager.get_winner_total(x_test, o_test, t_test);
	REQUIRE(x_test == 0);
	REQUIRE(o_test == 0);
	REQUIRE(t_test == 1);
}

TEST_CASE("Test win by first column 3")
{
	int x_test, o_test, t_test;
	TicTacToeManager manager;
	unique_ptr<TicTacToe> board = make_unique<TicTacToe3>();

	board->start_game("X");
	board->mark_board(1);
	REQUIRE(false == board->game_over());
	board->mark_board(3);
	REQUIRE(false == board->game_over());
	board->mark_board(4);
	REQUIRE(false == board->game_over());
	board->mark_board(5);
	REQUIRE(false == board->game_over());
	board->mark_board(7);
	REQUIRE(true == board->game_over());

	REQUIRE("X" == board->get_winner());
	manager.save_game(board);
	manager.get_winner_total(x_test, o_test, t_test);
	REQUIRE(x_test == 1);
	REQUIRE(o_test == 0);
	REQUIRE(t_test == 0);
}

TEST_CASE("Test win by second column 3")
{
	int x_test, o_test, t_test;
	TicTacToeManager manager;
	unique_ptr<TicTacToe> board = make_unique<TicTacToe3>();

	board->start_game("X");
	board->mark_board(2);
	REQUIRE(false == board->game_over());
	board->mark_board(3);
	REQUIRE(false == board->game_over());
	board->mark_board(5);
	REQUIRE(false == board->game_over());
	board->mark_board(6);
	REQUIRE(false == board->game_over());
	board->mark_board(8);
	REQUIRE(true == board->game_over());

	REQUIRE("X" == board->get_winner());
	manager.save_game(board);
	manager.get_winner_total(x_test, o_test, t_test);
	REQUIRE(x_test == 1);
	REQUIRE(o_test == 0);
	REQUIRE(t_test == 0);
}

TEST_CASE("Test win by third column 3")
{
	int x_test, o_test, t_test;
	TicTacToeManager manager;
	unique_ptr<TicTacToe> board = make_unique<TicTacToe3>();

	board->start_game("X");
	board->mark_board(3);
	REQUIRE(false == board->game_over());
	board->mark_board(4);
	REQUIRE(false == board->game_over());
	board->mark_board(6);
	REQUIRE(false == board->game_over());
	board->mark_board(5);
	REQUIRE(false == board->game_over());
	board->mark_board(9);
	REQUIRE(true == board->game_over());

	REQUIRE("X" == board->get_winner());
	manager.save_game(board);
	manager.get_winner_total(x_test, o_test, t_test);
	REQUIRE(x_test == 1);
	REQUIRE(o_test == 0);
	REQUIRE(t_test == 0);
}

TEST_CASE("Test win by first row 3")
{
	int x_test, o_test, t_test;
	TicTacToeManager manager;
	unique_ptr<TicTacToe> board = make_unique<TicTacToe3>();

	board->start_game("X");
	board->mark_board(1);
	REQUIRE(false == board->game_over());
	board->mark_board(4);
	REQUIRE(false == board->game_over());
	board->mark_board(2);
	REQUIRE(false == board->game_over());
	board->mark_board(5);
	REQUIRE(false == board->game_over());
	board->mark_board(3);
	REQUIRE(true == board->game_over());

	REQUIRE("X" == board->get_winner());
	manager.save_game(board);
	manager.get_winner_total(x_test, o_test, t_test);
	REQUIRE(x_test == 1);
	REQUIRE(o_test == 0);
	REQUIRE(t_test == 0);
}

TEST_CASE("Test win by second row 3")
{
	int x_test, o_test, t_test;
	TicTacToeManager manager;
	unique_ptr<TicTacToe> board = make_unique<TicTacToe3>();

	board->start_game("X");
	board->mark_board(4);
	REQUIRE(false == board->game_over());
	board->mark_board(3);
	REQUIRE(false == board->game_over());
	board->mark_board(5);
	REQUIRE(false == board->game_over());
	board->mark_board(7);
	REQUIRE(false == board->game_over());
	board->mark_board(6);
	REQUIRE(true == board->game_over());

	REQUIRE("X" == board->get_winner());
	manager.save_game(board);
	manager.get_winner_total(x_test, o_test, t_test);
	REQUIRE(x_test == 1);
	REQUIRE(o_test == 0);
	REQUIRE(t_test == 0);
}

TEST_CASE("Test win by third row 3")
{
	int x_test, o_test, t_test;
	TicTacToeManager manager;
	unique_ptr<TicTacToe> board = make_unique<TicTacToe3>();

	board->start_game("X");
	board->mark_board(7);
	REQUIRE(false == board->game_over());
	board->mark_board(2);
	REQUIRE(false == board->game_over());
	board->mark_board(8);
	REQUIRE(false == board->game_over());
	board->mark_board(3);
	REQUIRE(false == board->game_over());
	board->mark_board(9);
	REQUIRE(true == board->game_over());

	REQUIRE("X" == board->get_winner());
	manager.save_game(board);
	manager.get_winner_total(x_test, o_test, t_test);
	REQUIRE(x_test == 1);
	REQUIRE(o_test == 0);
	REQUIRE(t_test == 0);
}

TEST_CASE("Test win by diagonally from top left 3")
{
	int x_test, o_test, t_test;
	TicTacToeManager manager;
	unique_ptr<TicTacToe> board = make_unique<TicTacToe3>();

	board->start_game("X");
	board->mark_board(1);
	REQUIRE(false == board->game_over());
	board->mark_board(3);
	REQUIRE(false == board->game_over());
	board->mark_board(5);
	REQUIRE(false == board->game_over());
	board->mark_board(4);
	REQUIRE(false == board->game_over());
	board->mark_board(9);
	REQUIRE(true == board->game_over());

	REQUIRE("X" == board->get_winner());
	manager.save_game(board);
	manager.get_winner_total(x_test, o_test, t_test);
	REQUIRE(x_test == 1);
	REQUIRE(o_test == 0);
	REQUIRE(t_test == 0);
}

TEST_CASE("Test win by diagonally from bottom left 3")
{
	int x_test, o_test, t_test;
	TicTacToeManager manager;
	unique_ptr<TicTacToe> board = make_unique<TicTacToe3>();

	board->start_game("X");
	board->mark_board(7);
	REQUIRE(false == board->game_over());
	board->mark_board(1);
	REQUIRE(false == board->game_over());
	board->mark_board(5);
	REQUIRE(false == board->game_over());
	board->mark_board(9);
	REQUIRE(false == board->game_over());
	board->mark_board(3);
	REQUIRE(true == board->game_over());

	REQUIRE("X" == board->get_winner());
	manager.save_game(board);
	manager.get_winner_total(x_test, o_test, t_test);
	REQUIRE(x_test == 1);
	REQUIRE(o_test == 0);
	REQUIRE(t_test == 0);
}

TEST_CASE("Test TicTacToe 3 manager get winner total")
{
	int x_test, o_test, t_test;
	TicTacToeManager manager;
	unique_ptr<TicTacToe> board = make_unique<TicTacToe3>();
	
	board->start_game("X");
	board->mark_board(7);
	REQUIRE(false == board->game_over());
	board->mark_board(2);
	REQUIRE(false == board->game_over());
	board->mark_board(5);
	REQUIRE(false == board->game_over());
	board->mark_board(4);
	REQUIRE(false == board->game_over());
	board->mark_board(3);
	REQUIRE(true == board->game_over());
	REQUIRE("X" == board->get_winner());	

	manager.save_game(board);
	manager.get_winner_total(x_test, o_test, t_test);
	REQUIRE(x_test == 1);
	REQUIRE(o_test == 0);
	REQUIRE(t_test == 0);

	board->start_game("O");
	board->mark_board(7);
	REQUIRE(false == board->game_over());
	board->mark_board(2);
	REQUIRE(false == board->game_over());
	board->mark_board(5);
	REQUIRE(false == board->game_over());
	board->mark_board(4);
	REQUIRE(false == board->game_over());
	board->mark_board(3);
	REQUIRE(true == board->game_over());
	REQUIRE("O" == board->get_winner());	

	manager.save_game(board);
	manager.get_winner_total(x_test, o_test, t_test);
	REQUIRE(x_test == 1);
	REQUIRE(o_test == 1);
	REQUIRE(t_test == 0);

	board->start_game("X");
	board->mark_board(1);
	REQUIRE(false == board->game_over());
	board->mark_board(2);
	REQUIRE(false == board->game_over());
	board->mark_board(6);
	REQUIRE(false == board->game_over());
	board->mark_board(4);
	REQUIRE(false == board->game_over());
	board->mark_board(5);
	REQUIRE(false == board->game_over());
	board->mark_board(3);
	REQUIRE(false == board->game_over());
	board->mark_board(7);
	REQUIRE(false == board->game_over());
	board->mark_board(9);
	REQUIRE(false == board->game_over());
	board->mark_board(8);
	REQUIRE(true == board->game_over());
	REQUIRE("C" == board->get_winner());	

	manager.save_game(board);
	manager.get_winner_total(x_test, o_test, t_test);
	REQUIRE(x_test == 1);
	REQUIRE(o_test == 1);
	REQUIRE(t_test == 1);

}

TEST_CASE("Test tic tac toe 4 board over for a tie")
{
	int x_test, o_test, t_test;
	TicTacToeManager manager;
	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();
	
	board->start_game("X");
	board->mark_board(1);
	REQUIRE(false == board->game_over());
	board->mark_board(2);
	REQUIRE(false == board->game_over());
	board->mark_board(3);
	REQUIRE(false == board->game_over());
	board->mark_board(4);
	REQUIRE(false == board->game_over());
	board->mark_board(5);
	REQUIRE(false == board->game_over());
	board->mark_board(7);
	REQUIRE(false == board->game_over());
	board->mark_board(6);
	REQUIRE(false == board->game_over());
	board->mark_board(8);
	REQUIRE(false == board->game_over());
	board->mark_board(8);
	REQUIRE(false == board->game_over());
	board->mark_board(9);
	REQUIRE(false == board->game_over());
	board->mark_board(10);
	REQUIRE(false == board->game_over());
	board->mark_board(11);
	REQUIRE(false == board->game_over());
	board->mark_board(12);
	REQUIRE(false == board->game_over());
	board->mark_board(14);
	REQUIRE(false == board->game_over());
	board->mark_board(13);
	REQUIRE(false == board->game_over());
	board->mark_board(16);
	REQUIRE(false == board->game_over());
	board->mark_board(15);
	REQUIRE(true == board->game_over());
	REQUIRE("C" == board->get_winner());

	manager.save_game(board);
	manager.get_winner_total(x_test, o_test, t_test);
	REQUIRE(x_test == 0);
	REQUIRE(o_test == 0);
	REQUIRE(t_test == 1);
}

TEST_CASE("Test win by first column 4")
{
	int x_test, o_test, t_test;
	TicTacToeManager manager;
	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();

	board->start_game("X");
	board->mark_board(1);
	REQUIRE(false == board->game_over());
	board->mark_board(4);
	REQUIRE(false == board->game_over());
	board->mark_board(5);
	REQUIRE(false == board->game_over());
	board->mark_board(6);
	REQUIRE(false == board->game_over());
	board->mark_board(9);
	REQUIRE(false == board->game_over());
	board->mark_board(7);
	REQUIRE(false == board->game_over());
	board->mark_board(13);
	REQUIRE(true == board->game_over());

	REQUIRE("X" == board->get_winner());
	manager.save_game(board);
	manager.get_winner_total(x_test, o_test, t_test);
	REQUIRE(x_test == 1);
	REQUIRE(o_test == 0);
	REQUIRE(t_test == 0);
}

TEST_CASE("Test win by second column 4")
{
	int x_test, o_test, t_test;
	TicTacToeManager manager;
	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();

	board->start_game("X");
	board->mark_board(2);
	REQUIRE(false == board->game_over());
	board->mark_board(3);
	REQUIRE(false == board->game_over());
	board->mark_board(6);
	REQUIRE(false == board->game_over());
	board->mark_board(7);
	REQUIRE(false == board->game_over());
	board->mark_board(10);
	REQUIRE(false == board->game_over());
	board->mark_board(11);
	REQUIRE(false == board->game_over());
	board->mark_board(14);
	REQUIRE(true == board->game_over());

	REQUIRE("X" == board->get_winner());
	manager.save_game(board);
	manager.get_winner_total(x_test, o_test, t_test);
	REQUIRE(x_test == 1);
	REQUIRE(o_test == 0);
	REQUIRE(t_test == 0);
}

TEST_CASE("Test win by third column 4")
{
	int x_test, o_test, t_test;
	TicTacToeManager manager;
	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();

	board->start_game("X");
	board->mark_board(3);
	REQUIRE(false == board->game_over());
	board->mark_board(4);
	REQUIRE(false == board->game_over());
	board->mark_board(7);
	REQUIRE(false == board->game_over());
	board->mark_board(8);
	REQUIRE(false == board->game_over());
	board->mark_board(11);
	REQUIRE(false == board->game_over());
	board->mark_board(12);
	REQUIRE(false == board->game_over());
	board->mark_board(15);
	REQUIRE(true == board->game_over());

	REQUIRE("X" == board->get_winner());
	manager.save_game(board);
	manager.get_winner_total(x_test, o_test, t_test);
	REQUIRE(x_test == 1);
	REQUIRE(o_test == 0);
	REQUIRE(t_test == 0);
}

TEST_CASE("Test win by fourth column 4")
{
	int x_test, o_test, t_test;
	TicTacToeManager manager;
	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();

	board->start_game("X");
	board->mark_board(4);
	REQUIRE(false == board->game_over());
	board->mark_board(5);
	REQUIRE(false == board->game_over());
	board->mark_board(8);
	REQUIRE(false == board->game_over());
	board->mark_board(9);
	REQUIRE(false == board->game_over());
	board->mark_board(12);
	REQUIRE(false == board->game_over());
	board->mark_board(13);
	REQUIRE(false == board->game_over());
	board->mark_board(16);
	REQUIRE(true == board->game_over());

	REQUIRE("X" == board->get_winner());
	manager.save_game(board);
	manager.get_winner_total(x_test, o_test, t_test);
	REQUIRE(x_test == 1);
	REQUIRE(o_test == 0);
	REQUIRE(t_test == 0);
}

TEST_CASE("Test win by first row 4")
{
	int x_test, o_test, t_test;
	TicTacToeManager manager;
	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();

	board->start_game("X");
	board->mark_board(1);
	REQUIRE(false == board->game_over());
	board->mark_board(5);
	REQUIRE(false == board->game_over());
	board->mark_board(2);
	REQUIRE(false == board->game_over());
	board->mark_board(9);
	REQUIRE(false == board->game_over());
	board->mark_board(3);
	REQUIRE(false == board->game_over());
	board->mark_board(13);
	REQUIRE(false == board->game_over());
	board->mark_board(4);
	REQUIRE(true == board->game_over());

	REQUIRE("X" == board->get_winner());
	manager.save_game(board);
	manager.get_winner_total(x_test, o_test, t_test);
	REQUIRE(x_test == 1);
	REQUIRE(o_test == 0);
	REQUIRE(t_test == 0);
}

TEST_CASE("Test win by second row 4")
{
	int x_test, o_test, t_test;
	TicTacToeManager manager;
	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();

	board->start_game("X");
	board->mark_board(5);
	REQUIRE(false == board->game_over());
	board->mark_board(9);
	REQUIRE(false == board->game_over());
	board->mark_board(6);
	REQUIRE(false == board->game_over());
	board->mark_board(3);
	REQUIRE(false == board->game_over());
	board->mark_board(7);
	REQUIRE(false == board->game_over());
	board->mark_board(4);
	REQUIRE(false == board->game_over());
	board->mark_board(8);
	REQUIRE(true == board->game_over());

	REQUIRE("X" == board->get_winner());
	manager.save_game(board);
	manager.get_winner_total(x_test, o_test, t_test);
	REQUIRE(x_test == 1);
	REQUIRE(o_test == 0);
	REQUIRE(t_test == 0);
}

TEST_CASE("Test win by third row 4")
{
	int x_test, o_test, t_test;
	TicTacToeManager manager;
	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();

	board->start_game("X");
	board->mark_board(9);
	REQUIRE(false == board->game_over());
	board->mark_board(5);
	REQUIRE(false == board->game_over());
	board->mark_board(10);
	REQUIRE(false == board->game_over());
	board->mark_board(8);
	REQUIRE(false == board->game_over());
	board->mark_board(11);
	REQUIRE(false == board->game_over());
	board->mark_board(13);
	REQUIRE(false == board->game_over());
	board->mark_board(12);
	REQUIRE(true == board->game_over());

	REQUIRE("X" == board->get_winner());
	manager.save_game(board);
	manager.get_winner_total(x_test, o_test, t_test);
	REQUIRE(x_test == 1);
	REQUIRE(o_test == 0);
	REQUIRE(t_test == 0);
}

TEST_CASE("Test win by fourth row 4")
{
	int x_test, o_test, t_test;
	TicTacToeManager manager;
	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();

	board->start_game("X");
	board->mark_board(13);
	REQUIRE(false == board->game_over());
	board->mark_board(6);
	REQUIRE(false == board->game_over());
	board->mark_board(14);
	REQUIRE(false == board->game_over());
	board->mark_board(8);
	REQUIRE(false == board->game_over());
	board->mark_board(15);
	REQUIRE(false == board->game_over());
	board->mark_board(2);
	REQUIRE(false == board->game_over());
	board->mark_board(16);
	REQUIRE(true == board->game_over());

	REQUIRE("X" == board->get_winner());
	manager.save_game(board);
	manager.get_winner_total(x_test, o_test, t_test);
	REQUIRE(x_test == 1);
	REQUIRE(o_test == 0);
	REQUIRE(t_test == 0);
}

TEST_CASE("Test win by diagonally from top left 4")
{
	int x_test, o_test, t_test;
	TicTacToeManager manager;
	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();

	board->start_game("X");
	board->mark_board(1);
	REQUIRE(false == board->game_over());
	board->mark_board(7);
	REQUIRE(false == board->game_over());
	board->mark_board(6);
	REQUIRE(false == board->game_over());
	board->mark_board(8);
	REQUIRE(false == board->game_over());
	board->mark_board(11);
	REQUIRE(false == board->game_over());
	board->mark_board(2);
	REQUIRE(false == board->game_over());
	board->mark_board(16);
	REQUIRE(true == board->game_over());

	REQUIRE("X" == board->get_winner());
	manager.save_game(board);
	manager.get_winner_total(x_test, o_test, t_test);
	REQUIRE(x_test == 1);
	REQUIRE(o_test == 0);
	REQUIRE(t_test == 0);
}

TEST_CASE("Test win by diagonally from bottom left 4")
{
	int x_test, o_test, t_test;
	TicTacToeManager manager;
	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();

	board->start_game("X");
	board->mark_board(13);
	REQUIRE(false == board->game_over());
	board->mark_board(6);
	REQUIRE(false == board->game_over());
	board->mark_board(10);
	REQUIRE(false == board->game_over());
	board->mark_board(8);
	REQUIRE(false == board->game_over());
	board->mark_board(7);
	REQUIRE(false == board->game_over());
	board->mark_board(2);
	REQUIRE(false == board->game_over());
	board->mark_board(4);
	REQUIRE(true == board->game_over());

	REQUIRE("X" == board->get_winner());
	manager.save_game(board);
	manager.get_winner_total(x_test, o_test, t_test);
	REQUIRE(x_test == 1);
	REQUIRE(o_test == 0);
	REQUIRE(t_test == 0);
}

TEST_CASE("Test TicTacToe 4 manager get winner total")
{
	int x_test, o_test, t_test;
	TicTacToeManager manager;
	unique_ptr<TicTacToe> board = make_unique<TicTacToe4>();
	
	board->start_game("X");
	board->mark_board(13);
	REQUIRE(false == board->game_over());
	board->mark_board(6);
	REQUIRE(false == board->game_over());
	board->mark_board(10);
	REQUIRE(false == board->game_over());
	board->mark_board(8);
	REQUIRE(false == board->game_over());
	board->mark_board(7);
	REQUIRE(false == board->game_over());
	board->mark_board(2);
	REQUIRE(false == board->game_over());
	board->mark_board(4);
	REQUIRE(true == board->game_over());
	REQUIRE("X" == board->get_winner());	

	manager.save_game(board);
	manager.get_winner_total(x_test, o_test, t_test);
	REQUIRE(x_test == 1);
	REQUIRE(o_test == 0);
	REQUIRE(t_test == 0);

	board->start_game("O");
	board->mark_board(13);
	REQUIRE(false == board->game_over());
	board->mark_board(6);
	REQUIRE(false == board->game_over());
	board->mark_board(10);
	REQUIRE(false == board->game_over());
	board->mark_board(8);
	REQUIRE(false == board->game_over());
	board->mark_board(7);
	REQUIRE(false == board->game_over());
	board->mark_board(2);
	REQUIRE(false == board->game_over());
	board->mark_board(4);
	REQUIRE(true == board->game_over());
	REQUIRE("O" == board->get_winner());	

	manager.save_game(board);
	manager.get_winner_total(x_test, o_test, t_test);
	REQUIRE(x_test == 1);
	REQUIRE(o_test == 1);
	REQUIRE(t_test == 0);

	board->start_game("X");
	board->mark_board(1);
	REQUIRE(false == board->game_over());
	board->mark_board(2);
	REQUIRE(false == board->game_over());
	board->mark_board(3);
	REQUIRE(false == board->game_over());
	board->mark_board(4);
	REQUIRE(false == board->game_over());
	board->mark_board(5);
	REQUIRE(false == board->game_over());
	board->mark_board(7);
	REQUIRE(false == board->game_over());
	board->mark_board(6);
	REQUIRE(false == board->game_over());
	board->mark_board(8);
	REQUIRE(false == board->game_over());
	board->mark_board(8);
	REQUIRE(false == board->game_over());
	board->mark_board(9);
	REQUIRE(false == board->game_over());
	board->mark_board(10);
	REQUIRE(false == board->game_over());
	board->mark_board(11);
	REQUIRE(false == board->game_over());
	board->mark_board(12);
	REQUIRE(false == board->game_over());
	board->mark_board(14);
	REQUIRE(false == board->game_over());
	board->mark_board(13);
	REQUIRE(false == board->game_over());
	board->mark_board(16);
	REQUIRE(false == board->game_over());
	board->mark_board(15);
	REQUIRE(true == board->game_over());
	REQUIRE("C" == board->get_winner());	

	manager.save_game(board);
	manager.get_winner_total(x_test, o_test, t_test);
	REQUIRE(x_test == 1);
	REQUIRE(o_test == 1);
	REQUIRE(t_test == 1);

}
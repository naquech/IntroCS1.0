//TicTacToe specification file
/*Write a class called TicTacToe that allows two people to play a game. This class will have a field for a Board object and a field to keep 
track of which player's turn it is. It should have a constructor that takes a char parameter that specifies whether 'x' or 'o' should have 
the first move. It should have a method called play that starts the game. The play method should keep looping, asking the correct player for 
their move and sending it to the board (with makeMove) until someone has won or it's a draw (as indicated by gameState), and then declare 
what the outcome was. Write a main method (in TicTacToe.cpp) that asks the user which player should go first, creates a new TicTacToe object
and starts the game. Input validation: If someone tries to take an occupied square, tell them that square is already occupied and ask for a 
different move.*/

#ifndef TICTACTOE_HPP
#define TICTACTOE_HPP

#include "Board.hpp"

class TicTacToe{
    
    private:
        Board newBoard;
        bool playerX;
    
    public:
        TicTacToe();
        TicTacToe(char player);
        void play();
    
};
#endif
//Board class specification file
/*Write a class called Board that represents a tic-tac-toe board. It should have a 3x3 array as a data member, which will store 
the locations of the players' moves. It should have a default constructor that initializes the 3x3 array to being empty. It should 
have a method called makeMove that takes the x and y coordinates of the move and which player's turn it is as parameters.  
If that location is unoccupied, makeMove should record the move and return true. If that location is already occupied, makeMove 
should just return false. There should be a method called gameState that takes no parameters and returns a value indicating one of 
four possibilities: 'x' has won, 'o' has won, the game is a draw, or the game is still in progress - use an enum for this (the enum 
definition should go in Board.hpp). There should also be a method called print, which just prints out the current board to the 
screen.*/
#ifndef BOARD_HPP
#define BOARD_HPP

enum state {x_won, o_won, draw, in_progress};

class Board{

    private:
        char arrayBoard[3][3];

    public:
        Board();
        bool makeMove(int, int, char);             //xCoord, yCoord, turn(x || o);
        int gameState();
        void print();

   
};
#endif
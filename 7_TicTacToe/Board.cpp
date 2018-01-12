//Board class implementation file
/*Write a class called Board that represents a tic-tac-toe board. It should have a 3x3 array as a data member, which will store the 
locations of the players' moves. It should have a default constructor that initializes the 3x3 array to being empty. It should have 
a method called makeMove that takes the x and y coordinates of the move and which player's turn it is as parameters. If that location 
is unoccupied, makeMove should record the move and return true. If that location is already occupied, makeMove should just return false. 
There should be a method called gameState that takes no parameters and returns a value indicating one of four possibilities: 'x' has won, 
'o' has won, the game is a draw, or the game is still in progress - use an enum for this (the enum definition should go in Board.hpp).  
There should also be a method called print, which just prints out the current board to the screen.*/

#include "Board.hpp"
#include <iostream>


Board::Board(){
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            arrayBoard[i][j] = '*';
        }
        std::cout << std::endl;
    }
}


bool Board::makeMove(int row, int col, char player){
    if (arrayBoard[row][col] != '*'){
        return false;
    }
    if (player == 'x'){
        arrayBoard[row][col] = 'x';
        return true;
    }
    if (player == 'o'){
        arrayBoard[row][col] = 'o';
        return true;
    }
}


int Board::gameState(){
    
    char winner; 
    
    //check for game states (8), or draw 
    //rows
    if((arrayBoard[0][0] == 'x' || arrayBoard[0][0] == 'o') && (arrayBoard[0][0] == arrayBoard[0][1]) && (arrayBoard[0][1] == arrayBoard[0][2])){
        winner = arrayBoard[0][0];
    }
    else if((arrayBoard[1][0] == 'x' || arrayBoard[1][0] == 'o') && (arrayBoard[1][0] == arrayBoard[1][1]) && (arrayBoard[1][1] == arrayBoard[1][2])){
        winner = arrayBoard[1][0];
    }
    else if((arrayBoard[2][0] == 'x' || arrayBoard[2][0] == 'o') && (arrayBoard[2][0] == arrayBoard[2][1]) && (arrayBoard[2][1] == arrayBoard[2][2])){
        winner = arrayBoard[2][0];
    }
        
    //columns
    else if((arrayBoard[0][0] == 'x' ||arrayBoard[0][0] == 'o') && (arrayBoard[0][0] == arrayBoard[1][0]) && (arrayBoard[1][0] == arrayBoard[2][0])){
        winner = arrayBoard[0][0];
    }
    else if((arrayBoard[0][1] == 'x' || arrayBoard[0][1] == 'o') && (arrayBoard[0][1] == arrayBoard[1][1]) && (arrayBoard[1][1] == arrayBoard[2][1])){
        winner = arrayBoard[0][1];
    }
    else if((arrayBoard[0][2] == 'x' || arrayBoard[0][2] == 'o') && (arrayBoard[0][2] == arrayBoard[1][2]) && (arrayBoard[1][2] == arrayBoard[2][2])){
         winner = arrayBoard[0][2];
    }
        
    //diagonals 
    else if((arrayBoard[0][0] == 'x' || arrayBoard[0][0] == 'o') && (arrayBoard[0][0] == arrayBoard[1][1]) && (arrayBoard[1][1] == arrayBoard[2][2])){
        winner = arrayBoard[0][0];
    }
    else if((arrayBoard[0][2] == 'x' || arrayBoard[0][2] == 'o') && (arrayBoard[0][2] == arrayBoard[1][1]) && (arrayBoard[1][1] == arrayBoard[2][0])){
        winner = arrayBoard[0][2];
    }
/*    else {
        return draw;
    }
*/    
    if (winner == 'x'){
        return x_won;
    }
    else if (winner == 'o'){
        return o_won;
    }
    else {
        return in_progress;
    }
}


void Board::print(){
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            std::cout << arrayBoard[i][j];
        }
        std::cout << std::endl;
    }
}
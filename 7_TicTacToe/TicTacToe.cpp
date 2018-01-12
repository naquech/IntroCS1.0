//TicTacToe class function implementation file
#include <iostream>
#include "TicTacToe.hpp"
#include "Board.cpp"

using namespace std;


TicTacToe::TicTacToe(){
    playerX = true;
}


TicTacToe::TicTacToe(char playerTurn){
    if (playerTurn == 'x'){
        playerX = true;
    }
        else{
        playerX = false;
        }
}


void TicTacToe::play(){
    
   newBoard.print();
   
   int rowIn,       //x coordinate from user
       colIn;       //y coordinate from user
   
   while(newBoard.gameState() == in_progress){
       if (playerX){
           cout << "X enter your move: ";
           cin >> rowIn;
           cin >> colIn;
           
           if (!newBoard.makeMove(rowIn, colIn, 'x')){
               cout << "Square already taken!" << endl;
           }
           else{
               playerX = false;
           }
       }
       else{
           cout << "O enter your move: ";
           cin >> rowIn;
           cin >> colIn;
           
           if (!newBoard.makeMove(rowIn, colIn, 'o')){
               cout << "Square already taken!" << endl;
           }
           else{
               playerX = true;
           }
       }
       
       newBoard.print();
   }//end of while
   
   //check here for game state
   if (newBoard.gameState() == x_won){
       cout << "Player X wins!" << endl;
   }
   else if (newBoard.gameState() == o_won){
       cout << "Player O wins!" << endl;
   }
   else if (newBoard.gameState() == draw){
       cout << "This game is a draw!" << endl;
   }
   
}//end of play()



int main(){
    
    char first;
    
    cout << "Please enter wich player will play first ('x' or 'o'): ";
    cin >> first;
    
    TicTacToe game(first);
    
    game.play();
    
    return 0;
}
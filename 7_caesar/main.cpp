/*Natalia Q.E CS_161
Write a main method that asks the user to input a string and an offset and then passes them to the function.
Ypu can ssume the string will be no longer than 100 characters in length.*/

#include <iostream>
#include <cstring>

using namespace std;


void encipher(char [], int);


int main(){
    
    const int size = 100;
    char str[size];
    int offsetNum;
    
    cout << "Please enter a string: ";
    cin.getline(str, size);
    cout << "Please enter an offset number: ";
    cin >> offsetNum;
    
    encipher(str, offsetNum);


    return 0;
    
}

/* encipher()
Parameters: string, offset
prints out an enciphered form of the message*/

void encipher(char message[], int num){
    for (int i = 0; message[i] != '\0'; i++){
        if (message[i] >= 'A' && message[i] <= 'Z') {                   //upper case
        message[i] = (((message[i] + num) - 65) % 26) + 65;
       }
       else if(message[i] >= 'a' && message[i] <= 'z'){                 //lower case
           message[i] = (((message[i] + num) - 97) % 26) + 97;
       }
    }
    
    cout << message;
    
}
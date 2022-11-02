/*
 Owen Neros
 C++ Fall 2022
 Lab 5
 */

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void rnum( int &x);
void inum( int &y );
void resp();
void win();
void ask();

int main() {
    cout << "Welcome to the random number guessing game! You will have 20 attempts to guess a random number between 1 and 100 inclusive." << endl << endl;
    
    srand (time(0));
    
    int x;
    int y;
    int r;
    int w = 0;
    int l = 0;
    
    rnum(x);
    inum(y);
    do {
    int t = 1;
    while (t < 20){
        if (x == y){
            win();
            w++;
            break;
        }
        else{
            resp();
            inum(y);
        }
        t++;
    }
    
    if (t > 19){
        if (x == y){
            win();
            break;
        }
        else{
            resp();
            l++;
        }
    }
        ask();
        cout << "Enter '1' for yes or '2' for no: ";
        cin >> r;
        
        if(r == 1){
            cout << "Awesome! Let's play again." << endl;
            rnum(x);
            inum(y);
        }
        else{
            cout << "Okay. Thanks for playing! Your W/L record is: " << w << "/" << l << endl;
        }
    
    }while(r == 1);
    return 0;
}

void rnum( int &x ){
    x = 1 + (rand() % 100);
    
    cout << x << endl;
    
}

void inum( int &y ){
    cout << "Please enter a guess: ";
    cin >> y;
}

void resp(){
    
    int z=0;
    z = 1 + (rand() %  10);
    
    switch (z) {
        case 1:
            cout << "Not quite. Try again" << endl;
            break;
        case 2:
            cout << "That is not what the number is dummy." << endl;
            break;
        case 3:
            cout << "Nope. Try again." << endl;
            break;
        case 4:
            cout << "That is just not right." << endl;
            break;
        case 5:
            cout << "Not even within 0.1" << endl;
            break;
        case 6:
            cout << "Dummy headed idiot. Not the number" << endl;
            break;
        case 7:
            cout << "That ain't it chief." << endl;
            break;
        case 8:
            cout << "Nah, I do not like that number." << endl;
            break;
        case 9:
            cout << "Just... no." << endl;
            break;
        case 10:
            cout << "Noooooooo. Please guess better." << endl;
            break;
    }
}
void win(){
    
    int w=0;
    w = 1 + (rand() %  10);
    
    switch (w) {
        case 1:
            cout << "Correct!" << endl;
            break;
        case 2:
            cout << "Yep! You have won." << endl;
            break;
        case 3:
            cout << "Congratulations! You have won the game!" << endl;
            break;
        case 4:
            cout << "WOOOOHOOOO! correct" << endl;
            break;
        case 5:
            cout << "yes, you win" << endl;
            break;
        case 6:
            cout << "We have a smarty pants. You guessed it correctly" << endl;
            break;
        case 7:
            cout << "It seems that you have won the game boss" << endl;
            break;
        case 8:
            cout << "Yes, yes, and yes." << endl;
            break;
        case 9:
            cout << "Just... yes. You won" << endl;
            break;
        case 10:
            cout << "Alright that is correct.... did you cheat?" << endl;
            break;
    }
}

void ask(){
    int h=0;
    h = 1 + (rand() %  10);
    
    switch (h) {
        case 1:
            cout << "Wanna play again?" << endl;
            break;
        case 2:
            cout << "Another game?" << endl;
            break;
        case 3:
            cout << "Give it another go?" << endl;
            break;
        case 4:
            cout << "Let us play again, shall we?" << endl;
            break;
        case 5:
            cout << "Play another game or you are dumb... yeah?" << endl;
            break;
        case 6:
            cout << "Play again. Do it. DO IT!" << endl;
            break;
        case 7:
            cout << "Alrighty, you should play again. No?" << endl;
            break;
        case 8:
            cout << "Would you like to partake in another game?" << endl;
            break;
        case 9:
            cout << "Mhm, I see. Would you like to play again?" << endl;
            break;
        case 10:
            cout << "Would you like to keep playing this cool game?" << endl;
            break;
    }
}

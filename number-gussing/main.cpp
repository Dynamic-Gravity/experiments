#include <iostream>
#include <cstdlib>//needed for the random number generator

//declare namespaces
using namespace std;

//protptypes
int isEqual(int, int);
void findGuess(int, int);

int main(){

        int guess, randomNum;

        //generate random seed
        srand (time(NULL));

        //generate random number between 1 and 1000
        randomNum = rand() % 1000 + 1;

        cout << "Welcome to my number guessing game.\nPlease enter a number between 1-1000\n> ";
        cin >> guess;

        //main loop
        while(isEqual(guess, randomNum)) {
                findGuess(guess, randomNum);
                cout << "> ";
                cin >> guess;
        }

        cout << "Congratz! You win!!!\n";

        return 0;
}

/**
 * [isEqual checks if input is equal to the ran number]
 * @param  in  [user input]
 * @param  ran [the generated random nummber]
 * @return     [true if equal, false if not]
 */
int isEqual(int in, int ran){
        if(in == ran) { return 0; }
        else { return 1; }
}

/**
 * [findGuess determines if user input is too high or low compared to random]
 * @param  in  [user input]
 * @param  ran [the generated random nummber]
 */
void findGuess(int in, int ran){

        //if diff is positive, guess was too low,
        //if diff is negative, guesss was too high.
        //include cases for assignment specific feedback.
        int diff = ran - in;

        if(diff > 0) {
                switch(diff) {
                case 800: cout << "800 too low\n";
                        break;
                case 600: cout << "600 too low\n";
                        break;
                case 400: cout << "400 too low\n";
                        break;
                case 200: cout << "200 too low\n";
                        break;
                case 100: cout << "100 too low\n";
                        break;
                default: cout << "too low\n";
                }
        } else {
                switch(diff) {
                case -800: cout << "800 too high\n";
                        break;
                case -600: cout << "600 too high\n";
                        break;
                case -400: cout << "400 too high\n";
                        break;
                case -200: cout << "200 too high\n";
                        break;
                case -100: cout << "100 too high\n";
                        break;
                default: cout << "too high\n";
                }
        }
}

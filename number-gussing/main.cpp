#include <iostream>
#include <cstdlib>

using namespace std;

int isEqual(int, int);
void findGuess(int, int);

int main(){

        int guess, randomNum;

        //generate random seed
        srand (time(NULL));

        randomNum = rand() % 1000 + 1;

        cout << "Welcome to my number guessing game.\nPlease enter a number between 1-1000\n> ";
        cin >> guess;

        while(isEqual(guess, randomNum)) {
                findGuess(guess, randomNum);
                cout << "> ";
                cin >> guess;
        }

        cout << "Congratz! You win!!!\n";

        return 0;
}

int isEqual(int in, int ran){
        if(in == ran) { return 0; }
        else { return 1; }
}

void findGuess(int in, int ran){
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

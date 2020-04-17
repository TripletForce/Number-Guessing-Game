#include <iostream>
#include <stdlib.h>     /* srand, rand */
using namespace std;

int randomNumber() {
  return rand() % 100 + 1; //returns a random number 1 to 10
}

int main() {
  //create new random number and inform user
  int number=randomNumber();
  cout << "\n Created a new random number.";
  //have user guess number
  while (true){
    //get guessed number from user
    int guess;
    cout << "\n Guess the random number: ";
    cin >> guess;
    //if statements for the numeric response
    if(guess>number){
      cout << "\n Guess is too high. Try again.";
    }
    else if(guess<number){
      cout << "\n Guess is too low. Try again.";
    }
    else if(guess==number){
      cout << "You guessed the number!";
      number=randomNumber();
      cout << "\n Created a new random number. \n";
    }
  } 
}

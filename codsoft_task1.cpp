// Create a program that generates a random number and asks the
// user to guess it. Provide feedback on whether the guess is too
// high or too low until the user guesses the correct number.

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){

    srand(time(nullptr));
    int n = (rand() % 100) + 1;
    int guess = 0;
    bool var;

    while(guess!=n){
        cout<<"Enter the Guess : ";
        cin>>guess;
        while(guess)
        {
            if(guess < n){
               cout<<"Guess Higher"<<endl;
               break;
            }
            else if(guess > n){
               cout<<"Guess Lower"<<endl;
               break;
            }
            else{
                cout<<"You Win!!"<<endl;
                break;
            }
        }
    }


}


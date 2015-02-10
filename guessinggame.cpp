#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;


int main(){

srand(time(NULL));
int number = rand()%100+1;
int guess;
int tries = 0;
bool correct = false;

  cout << "Thinking of a number (1-100).  Guess? ";
  while(correct == false)
{
        cin >> guess;
        tries++;

          if (number == guess){
                  cout << "You got it in " << tries << " tries. Good job." << endl;
                  correct = true;
          }  else if (number < guess){
                  cout << "Your guess is too high. Try again:" << endl;
          } else {
                  cout << "Your guess is too low. Try again:" << endl;
          }
        
  }

}



#include <stdio.h>
#include <stdlib.h>


//function here
//https://www.codewars.com/kata/sum-without-highest-and-lowest-number/train/

int sum(int* numbers, int numbersCount)
{
  //for minimal array case
  if (numbersCount < 3) {return 0;}

  
  int least = *numbers;
  int greatest = *numbers;
  int sum = 0;
  while (numbersCount > 0) {
      if (*numbers < least) { least = *numbers; }
      if (*numbers > greatest ) { greatest = *numbers;}
      sum = sum + *numbers;

      *numbers++;
      numbersCount--;
  }
  sum = sum - least - greatest;

  return sum;
}


int main() {

    int array1[] = { 6, 2, 1, 8, 10 };
    sum(array1, 5);  
    return 0;
}
#include <stdio.h>

/*
    Your fizzbuzz implementation should initialize a counter, then
    iterate n times. If the ith iteration is divisible by 3, print
    "Fizz". If it's divisible by 5, print "Buzz". If it's divisible
    by both 3 and 5, print "FizzBuzz". Increment the counter variable
    every time that nothing gets printed and return the counter.
    Don't forget to include newlines '\n' in your printf statements!
*/
int fizzbuzz(int n)
{
  int counter = 0;

  while (n < counter) {
    if (n % 15 == 0) {
      printf("FizzBuzz");
      counter++;
    } else if (n % 5 == 0) {
      printf("Buzz");
      counter++;
    } else if (n % 3 == 0) {
      printf("Fizz");
      counter++;
    } else 
      printf("The counter is currently at %d\n", counter);
  }
}

#ifndef TESTING
int main(void)
{
    fizzbuzz(20);

    return 0;
}
#endif

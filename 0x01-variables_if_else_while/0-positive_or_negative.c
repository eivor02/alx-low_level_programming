#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description: Determine if a random number is positive, negative or zero and print it.
 * Return: 0
 */

int main(void)
{
	int n;

srand(time(0));

n = rand() - RAND_MAX / 2;
  if (n > 0) {
        printf("is positive\n");
    } else if (n == 0) {
        printf("is zero\n");
    } else {
        printf("is negative\n");
    }

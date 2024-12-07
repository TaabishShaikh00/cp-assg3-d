/*
  Roll No.: 47
  Student Name: SHAIKH MOHD TAABISH
  Program Title: WAP to find if the entered number is a
                 prime number or not.

  Task Given By:
    - Roll No. of Assignee: 60
    - Assignee Name: MITHA UMAR
*/


#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is less than 2 (not prime)
    if (num <= 1) {
        isPrime = 0;
    }

    // Check divisibility from 2 to sqrt(num)
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            isPrime = 0;  // Number is divisible by i, so it's not prime
            break;
        }
    }

    // Print the result
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}

/* OUTPUT

17 is a prime number.

*/

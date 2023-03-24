#include <stdio.h>


int main(void)
{
    unsigned long long int n = 612852475143;  // the number to find the largest prime factor of
    unsigned long long int i;

    // divide out all factors of 2
    while (n % 2 == 0) {
        n /= 2;
    }

    // now check odd factors up to the square root of n
    for (i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            n /= i;
        }
    }

    // if n is still greater than 2, it is the largest prime factor
    if (n > 2) {
        printf("%llu\n", n);
    } else {
        printf("%llu\n", i - 2);
    }

    return 0;
}


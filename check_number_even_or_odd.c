#include <stdio.h>

int main(void)
{
    // declare the variables for number and count
    long long n;
    int count = 0;

    printf("Enter a number to get the digit count: ");
    scanf("%lld", &n);

    // divide by 10 until 0 and get count
    while (n > 0)
    {
        n /= 10;
        count++;
    }

    printf("Number is: %lld\n", n);
    printf("Count: %d\n", count);

    return 0;
}

// recursion
#include<stdio.h>
int factNumbers(int n);
int main() {
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    printf("Factorial: %d", factNumbers(n));
    return 0;
}

int factNumbers(int n) {
    if (n>=1)
        return n*factNumbers(n-1);
    else
        return 1;
}

/*n=5  return 5*(5-1)
        return 4*(4-1)
        return 3*(3-1)
        return 2*(2-1)
n=1 return 1/

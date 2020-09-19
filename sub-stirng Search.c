

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
  int size, i, j;
  //printf("Enter the size of string: ");
 // scanf("%d", &size);
  char str[20], check[5];
  printf("Enter the any word: ");
  gets(str);
  fflush(stdin);
  printf("\nEnter the check letter: ");
  scanf("%s", check);
  int m= 0, n = 0, a;
  while (str[m] != '\0'){
        m++;
  }
  while (check[n] != '\0'){
        n++;
  }
    for (i = 0; i <= m - n; i++)
    {
        for (j = i; j < i + n; j++)
        {
            a = 1;
            if (str[j] != check[j - i])
            {
                a = 0;
                break;
            }
        }
        if (a == 1)
            break;
    }
    if (a == 1)
        printf("\nYes");
    else
        printf("\nNo");
 
    return 0;
}

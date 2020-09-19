#include<stdio.h>

int main()
{
    int size, i, a[10];


    printf("\nEnter the size of array : ");
    scanf("%d", &size);

    printf("\nEnter the array elements: ");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    int  even_sum=0, sum = 0;
    for(i = 0; i < size; i ++)
    {
        if(a[i] % 2 == 0)
        {
            even_sum = even_sum + a[i];
        }

    }



    int count=0, c, j;
    for(i=0; i<size; i++)
    {
        c=0;
        for(j=2; j<a[i]; j++)
        {
            if(a[i]%j==0)
            {
                c=1;
                break;
            }
        }
        if(c==0)
        {
            sum=sum+a[i];
            count++;

        }

    }

    if(even_sum>sum)
    {
        printf("Larger even sum: %d", even_sum);
    }
    else
    {
        printf("Larger prime sum: %d", sum);

    }


}


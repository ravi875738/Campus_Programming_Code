#include<stdio.h>
int main()
{
    int n,i,even=0,odd=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        if(i%2==0)
        {
          even=even+arr[i];
        }
        else
        {
            odd=odd+arr[i];
        }
    }
    printf("Sum of Even:%d\n",even);
    printf("Sum of Odd :%d",odd);
    return 0;
}


#include<stdio.h>
int main()
{
    int n,count=0,i,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<i; j++)
        {
            if(arr[i]==arr[j])
                break;
        }
        if(i==j)
        count++;
    }
    printf("%d",count);
    return 0;
}

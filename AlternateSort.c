#include<stdio.h>
int main()
{
    int n,temp=0,i,j;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    /*for( i=0; i<n; i++)
    {
        for( j=0; j<n; j++)
        if(arr[i]>arr[j])
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }*/
    for(i=0;i<n;i++)
    if(i%2==0)
    printf("%d ",arr[i]);
    return 0;
}

#include<stdio.h>

int main()
{
    int i,N,sum;
    scanf("%d",&N);
    sum=0;
    for(i=1;i<=N;i++)
        sum= sum+ i*i;
    printf("%d\n",sum);

    return 0;
}

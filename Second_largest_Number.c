#include<stdio.h>
int main()
{
    int n,a,i,j,temp;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
     scanf("%d",&arr[i]);
    }
    int t=2;
    for(i=0; i<t; i++)
    {
        for(j=i+1; j<n; j++)
			{
				if(arr[i]<arr[j])
				{
					temp = arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}

    }
    printf("%d\n",arr[t-1]);
    return 0;
}


#include<stdio.h>
int main()
{
    int n,t,k,i,temp,j;
    int arr[100];
    scanf("%d\n",&t);
    scanf("%d %d",&n, &k);
    for(i=0;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<=n-1;i++)
    {
    printf("%d ",arr[(i+n-k)%n]);
   }
}

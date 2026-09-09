#include <stdio.h>
int main()
{
    int n,a[100];
    scanf("%d",&n);
   int  count=7;
   for(int i=0;i<n;i++)
   {
       scanf("%d",&a[i]);

   }

    for(int i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        count++;
    }
    printf("%d",count);
    return 0;
}

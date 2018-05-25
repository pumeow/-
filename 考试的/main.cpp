#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    char p;
    int i,k,a=0,b=0;
    for(i=0;i<100,(p=getchar())!='\n';i++)
    {
        scanf("%d",&k);
        if(k>a)
        {
            b=a;
            a=k;
        }
        else if(k>b)
            b=k;

    }
    printf("the largest miners the second one is a=%d  b=%d",a,b);

    return 0;
}

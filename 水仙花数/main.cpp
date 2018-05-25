#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    int i,j,k,m;
    for(i=1;i<=9;i++)
    {
        for(j=0;j<=9;j++)
        {
            for(k=0;k<=9;k++)
            {
                m=100*i+10*j+k;
                if(m==i*i*i+j*j*j+k*k*k)
                    printf("%d 是水仙花数\n",m);
            }
        }
    }
    return 0;
}

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
int a,b,i,j=0;
int detect(int m);
    cout << "enter two years" ;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=a;i<=b;i++)
        {if(detect(i)==1)
        {printf("%d  ",i);
        j++;}
        if(j%6==0)
            cout<<"\n";
        }
    return 0;
}

int detect(int m)
{
    if(m%4==0)
    {
        if(m%100==0)
        {
            if(m%400==0)
                return 1;
            else return 0;
        }

      return 1;

    }
    else return 0;
}

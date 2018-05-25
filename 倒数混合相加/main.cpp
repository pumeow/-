#include <iostream>
#include <stdio.h>

using namespace std;

/*int main()
{
    int n,demo=1;
    float m;
    float ans=0.0;
    float caculate(float i);
    cout << "please enter a number " ;
    scanf("%f",&m);
    for(n=1;n<=m;n++)
    {
        ans=ans+demo*caculate(n);
        demo=demo*(-1);
    }

    printf("the answer is %2.5f",ans);

    return 0;
}

float caculate(float i)
{
    return 1.0/i;
}
方法有些复杂了，多余，看看是否有简单的
*/

int main()
{
    int sign=1,m;
    double deno=1.0,sum=0.0,term;
    scanf("%d",&m);
    while(deno<=m)
    {
        term=sign/deno;
        sum=sum+term;
        sign=-sign;
        deno=deno+1;
    }
    printf("%f",sum);

}

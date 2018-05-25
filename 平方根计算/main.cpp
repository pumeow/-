#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    float x1=1.0,x2,x0=0,a;
    scanf("%f",&a);
    while(fabs(x1-x0)>1e-5)
    {
        x0=x1;
        x2=0.5*(x1+a/x1);
        x1=x2;
    }
    printf("%f",x1);

return 0;
}

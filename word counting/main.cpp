#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    cout << "please enter some words divided by space." << endl;
    char a[100];
    int word=0,num=0;
    int i;
    char c;
    gets(a);
    for(i=0;(c=a[i])!='\0';i++)
    {
        if(c==' ')
            word=0;
        else if(word==0)
        {

            word=1;
            num++;
        }
    }
     printf("there are %d word in this sentence.\n",num);


    return 0;
}

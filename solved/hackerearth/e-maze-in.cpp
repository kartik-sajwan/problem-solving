/*https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/e-maze-in-1aa4e2ac/*/
#include<stdio.h>

int main()  {
    int i=0;
    int x=0, y=0;
    char str[200];
    scanf("%s", str);
    while(str[i])    {
        if(str[i] == 'L')   {
            x=x-1;
        }
        else if(str[i] == 'R')   {
            x=x+1;
        }
        else if(str[i] == 'U')   {
            y=y+1;
        }
        else if(str[i] == 'D')  {
            y=y-1;
        }
        i++;
    }
    printf("%d %d", x, y);
}

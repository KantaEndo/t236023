#include <stdio.h>

int main(void)
{
    int totle=0;
    
    for(int i =1; i <= 10;i++)
    {
        totle = totle + i;
    }
    printf("1から10までの和は%dです\n",totle);
    
    return 0;
}
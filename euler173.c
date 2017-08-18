#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>


    unsigned long int foo(unsigned long int tile, unsigned long int hole)
    {
    return (long)((double)tile/hole - hole)/2;
    }
int main() {

    unsigned long int sum =0;
    unsigned long int tile =0;
    unsigned long int temp =0;
    
    scanf("%ld", &tile);
    
    for(int hole =2;hole<sqrt(tile);hole+=2)
        {
        temp = foo(tile,hole);
        if(temp>0)
            {
            sum+=temp;
        }
    }
    printf("%ld",sum);
}
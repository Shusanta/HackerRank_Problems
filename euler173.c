#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

//https://www.hackerrank.com/contests/projecteuler/challenges/euler173/problem

   /*We shall define a square lamina to be a square outline with a square "hole" so that the shape possesses vertical 
and horizontal symmetry. For example, using exactly thirty-two square tiles we can form two different square laminae
With one-hundred tiles, and not necessarily using all of the tiles at one time, it is possible to form forty-one 
different square laminae.Using up to  tiles how many different square laminae can be formed*/

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

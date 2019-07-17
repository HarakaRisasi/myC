#include<stdio.h>
#include<sys/cdefs.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<time.h>

//Logarithm - это операция обратная возведению в степень.

int main(){
    int i = 0, j = 0, k = 0;

    for(k; k < 4; k++){ //amount loops
    	for(i; i < 4; i++)//string (*_)
	    printf("* ");
	i = 0;
	printf("\n");
	for(j; j < 4; j++)//string (_*)
	    printf(" *");
	printf("\n");
	j = 0;
    }
    return 0;
}
  	

#include<stdio.h>
#include<sys/cdefs.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

//Logarithm - это операция обратная возведению в степен

//table n²
//1² = 1;
//2² = 4;
//...
int main(){
    int n = 1, x = 1;// base, exponent;

    for(n; n <= 10; n++){
	x *= 2;
    	printf("%i) 2^%i = %i\n", n, n, x);
    }

    return 0;
}





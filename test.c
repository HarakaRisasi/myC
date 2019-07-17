#include<stdio.h>
#include<sys/cdefs.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<time.h>
#include<stdbool.h>

//Logarithm - это операция обратная возведению в степень.
//255₁₀ == 1111 1111₂
int main(){
    int n, c, k;
    
    printf("Enter an integer in decimal number system\n");
    scanf("%d", &n);
    
    printf("In binary 32-bit system is:\n", n);
    
    for (c = 31; c >= 0; c--)
    {
	k = n >> c;
	
	if (k & 1)
	    printf("1");
	else
	    printf("0");
    }
    
    printf("\n");
    
    return 0;
}

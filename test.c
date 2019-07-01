#include<stdio.h>
#include<sys/cdefs.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

//Logarithm - это операция обратная возведению в степен
//sum = 1 + 3 + 5 + 7 + .... + n;
int main(){
    int n;
    int sum;
    int i;
    
    printf("Amount of digits = ");
    scanf("%i",&i);
    
    for(int y = 1; y <= i; n++, y++){
	n++;
	sum += n;
	printf("%i) n = %i || sum = %i\n",y, n, sum);
    }

    return 0;
}
    	 

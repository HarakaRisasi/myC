#include<stdio.h>
#include<sys/cdefs.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<time.h>

//Logarithm - это операция обратная возведению в степен
#define LB -4
#define HB 4
#define DX 0.5

int main(){
	float x,y;
	int n;
	int i;
	
	printf("\nTable of values of function y = |x| \n");
	n = (HB - LB) / DX + 1;
	x = LB;

	for(i = 1; i <= n; i++){
		y = fabs(x);
		printf("%.2f %.2f\n", x, y);
		x += DX;
	}

	return 0;
}

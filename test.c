#include<stdio.h>
#include<sys/cdefs.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<time.h>

//Logarithm - это операция обратная возведению в степень.

#define LB -4 //low range level the change of argument
#define HB 4 //high range level the chengae of argument
#define DX 0.5 //argument increment

//define - Preprocessor directive.
//	   With it, you can create so-called named constants.
/*	   С директивой define препроцессор работает следующим образом. 
	   В тексте программы находятся все места, где встречается имя, 
	   указанное в директиве define. 
	   После этого вместо этого имени подставляется значение, указанное в 
	   директиве define.
*/
// define {name}{value};

int main(){
    float x, y; //argument; value of function
    int n; //dots amount
    int i; //loops counter
    
    printf("\nTable the function values y = |x| \n");
    n = (HB - LB) / DX + 1;
    x = LB;
    for(i = 1; i <= n; i++){
	y = abs(x); //abs - absolute value calculation
	printf("%.2f %.2f\n", x, y);
	x += DX;
    }   
}   


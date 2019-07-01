#include<stdio.h>
#include<sys/cdefs.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

//Logarithm - это операция обратная возведению в степен

//inch to mm.
//1 inch = 2.54 cm
int main(){
    float i, c; // inch range, centimeter
    float s; // step
    float cm, inch, mm;

    int x; // to calculate

    printf("Inch range(0 to ...) = ");
    scanf("%f", &i);
    printf("Step = ");
    scanf("%f", &s);


    for(inch = 0; inch < i; inch = inch + s){    
	cm = inch * 2.54;
    	mm = cm * 10;

	printf("Inch = %.2f || mm = %.2f\n", inch, mm);
    }
    return 0;
}

	
		



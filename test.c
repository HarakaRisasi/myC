#include<sys/cdefs.h>
#include<math.h>
#include<string.h>
#include<time.h>
#include<stdbool.h>
#include<stdio.h> //for getchar();
#include<stdlib.h> //for system("");
#include <unistd.h> //for sleep();
//output value of function
//y = -2.4x² + 5x - 3;
//range x: -2 >>> 2;
int main(){
    system("clear");
    int i = 1;
    float y, x;
    x = -2.0;
    
    printf("     X        Y\n");
    while(x <= 2){
    	y = -2.4 * x*x + 5 * x - 3;
    	printf("#%i > %.2f    %.2f\n",i++, x, y);
	sleep(1);
	x += 0.5;
	
    }
  
    getchar(); 
    system("clear");
    return 0;
}

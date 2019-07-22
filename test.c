#include<sys/cdefs.h>
#include<math.h>
#include<string.h>
#include<time.h>
#include<stdbool.h>
#include<stdio.h> //for getchar();
#include<stdlib.h> //for system("");
#include <unistd.h> //for sleep();

//>input n - numbers;
//>n + n₁ + n₂ + ....
//>average n;
int main(){
    system("clear");
    float n, sum, counter, avg;
    
    n = sum = counter = avg = 0;

    printf("Enter number: \n");
    printf("To stop input any number < 1\n");
    do{
	printf(">> ");
	scanf("%f", &n);
	if(n > 0){
	    sum += n;
	    counter++;
	}
    }
    while(n > 0);

    avg = sum / counter;

    printf("Amount of input number: %.1f\n", counter);
    printf("Summa of input numbers: %.1f\n", sum);
    printf("Average: %.2f\n", avg);

    getchar();

    return 0;
}


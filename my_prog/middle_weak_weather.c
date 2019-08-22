#include<sys/cdefs.h>
#include<math.h>
#include<string.h>
#include<time.h>
#include<stdbool.h>
#include<stdio.h> //for getchar();
#include<stdlib.h> //for system("");
#include <unistd.h> //for sleep();


//Высокомерие или чистейшая вера в себя???

//condition:
/*
   Sun >> 1
   Mon >> 2
   Tue >> 3
   Wed >> 4
   Thu >> 5
   Fri >> 6
   Sat >> 7
   -------------------------------
   Avg. weather: 4.00
*/   

//char arr[NUMBER_OF_STRING][MAX_STRING_SIZE]

#define NUM 7
int main(){
    system("clear");

//Initialization
    int arr[NUM];
    char weak[NUM][5] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    int *ptr[NUM];
    int i;
    float avg, sum = 0;
    int count = 0;

//Calculation    
    printf("Enter %d num.(no less than 3)\n", NUM);
    for(i = 0; i < NUM; i++){
	scanf("%d", &arr[i]);
	ptr[i] = &arr[i];
	sum += *ptr[i];
	count++;
    }

    avg = sum / count;

//Output
    system("clear");

    for(i = 0; i < NUM; i++){
	printf("%s >> ", weak[i]); 
	printf("%d\n", *ptr[i]);
    }
    
    printf("-------------------------------");
    printf("\nAvg. weather: %.2f\n", avg);    
}


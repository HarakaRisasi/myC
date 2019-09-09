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
   Entered digits: 1 2 3 2 1 3 4 5
   Quantity of repeating elements: 3
*/

#define NUM 8 
int main(){
    system("clear");
    
    int i, j;
    int arr[NUM];
    int sec_arr[NUM];
    int tmp = 0, count = 0;
    
    printf("Enter %d numbers:\n", NUM);
    printf("The array must not have more than three identical numbers\n");
    for(i = 0; i < NUM; i++){
	scanf("%d", &arr[i]);
	sec_arr[i] = arr[i];
    }
    
    system("clear");
    
    for(j = 0; j < NUM; j++){
	
	for(i = 0; i < NUM; i++){
	    if(sec_arr[j] == arr[i]){
		//	    printf("ptr = %d; arr = %d | ", sec_arr[j], arr[i]);
		arr[i] = 0;
		count++;
	    }	    
	    //	    printf("count = %d\n", count);
	    if(count == 2){
		tmp++;
		break;
	    }	    
	}
	//	printf("\n\n");	
	count = 0;
    }

    printf("Entered digits:");
    for(i = 0; i < NUM; i++)
	printf(" %d", sec_arr[i]);
    
    printf("\nQuantity of repeating elements: %d\n", tmp);
    
    return 0;
}


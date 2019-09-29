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
   Input:
   a[0] = 1
   a[1] = 3
   a[2] = 2
   a[3] = 4
   a[4] = 21
   a[5] = 6
   a[6] = 5
   a[7] = 3
   a[8] = 2
   a[9] = 4

   Output:
   1 2 2 3 3 4 4 5 6 21 
*/

#define NUM 10

void bubbleSort(int *num, int size){
    for(int i = 0; i < size - 1; i++){
	for(int j = (size - 1); j > i; j--){
    	    if(num[j - 1] > num[j]){
    		int temp = num[j - 1];
    		num[j - 1] = num[j];
    		num[j] = temp;
    	    }
    	}
    }
}

int main(){
    system("clear");
    
    int i;
    int a[NUM];

    //Ввод значения элементов массива
    for(i = 0; i < NUM; i++){
	printf("a[%d] = ", i);
	scanf("%d", &a[i]);
    }
    bubbleSort(a, 10); //Вызов функции сортировки
    
    //Вывод отсортированных элементов массива
    for(i = 0; i < NUM; i++)
	printf("%d ", a[i]);

    printf("\n");

    return 0;
}


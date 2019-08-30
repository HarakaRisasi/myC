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
   You input:  1 2 3 4 5
   Sort array:  5 4 3 2 1
   Both arrays, not equal in descending order
   or
   Both arrays, equal in descending order
*/
#define NUM 5
int main(){
    system("clear");
    int i,j;
    int arr[NUM];
    int arr_compare[NUM];
    int *ptr;
    int min, tmp;
    int count = 0;

    //инициализация массива
    for(i = 0; i < NUM; i++){
	printf("%d/%d >> ", i + 1, NUM); 
	scanf("%d", &arr[i]);
    }
        
    //создание копии массива
    ptr = arr;
    for(i = 0; i < NUM; i++){
    	arr_compare[i] = *ptr;
	ptr++;
    }

    //сортировка скопированного массива
    for(j = 0; j < NUM; j++){
	min = j;
	for(i = 0; i < NUM; i++){
	    if(arr_compare[min] > arr_compare[i]){
		tmp = arr_compare[min];
		arr_compare[min] = arr_compare[i];
		arr_compare[i] = tmp;
	    }
	}
    }

    //сравнение двух массивов
    for(i = 0; i < NUM; i++)
	if(arr[i] == arr_compare[i])
	    count++;

   //Вывод
    system("clear");

    printf("You input: ");
    for(i = 0; i < NUM; i++)
	printf(" %d", arr[i]);

    printf("\nSort array: ");
    for(i = 0; i < NUM; i++)
	printf(" %d", arr_compare[i]);

    printf("\n");

    if(count == NUM)
	printf("Both arrays, equal in descending order\n");
    else
	printf("Both arrays, not equal in descending order\n");

     return 0;
}

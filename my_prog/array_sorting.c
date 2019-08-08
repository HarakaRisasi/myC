#include<sys/cdefs.h>
#include<math.h>
#include<string.h>
#include<time.h>
#include<stdbool.h>
#include<stdio.h> //for getchar();
#include<stdlib.h> //for system("");
#include <unistd.h> //for sleep();


//Высокомерие или чистейшая вера в себя???

#define NUM 5
int main(){
    system("clear");

    int num[NUM];
    int  i, j, min, tmp;

    //Чтобы принять значения n, требуется цикл for.

    for(i = 0; i < NUM; i++){
	printf("Mark %d / %d >> ", i + 1, NUM);
    	scanf("%d", &num[i]);
    }

    /*
       !Перед сортировкой массива всегда лучше сохранить оригинальный массив.
       -Поэтому можно обьявить другой массив, и элементы первого скопировать
	в него.
    */

    //Array_Backup 
    int desnum[NUM];
    for(i = 0; i < NUM; i++)
	desnum[i] = num[i];

    //Sorting:
    for(j = 0; j < NUM; j++){
	min = j;

	for(i = 0; i < NUM; i++){
	    if(num[min] > num[i]){
		tmp = num[min]; //store
		num[min] = num[i];
		num[i] = tmp;
	    }
	}
    }
    system ("clear");

    for(i = 0; i < NUM; i++)
	printf("%d ", num[i]);

    printf("\n");

    return 0;
}

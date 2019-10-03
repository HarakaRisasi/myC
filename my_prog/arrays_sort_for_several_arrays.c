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
   first_array
   a[0] = 4
   a[1] = 5
   a[2] = 6
   a[3] = 7
   a[4] = 8
   second_array
   b[0] = 1
   b[1] = 3
   b[2] = 2
   b[3] = 1
   b[4] = 3

   Output:
   1 1 2 3 3 4 5 6 7 8
*/

#define NUM 5

void bubbleSort(int *num, int size){

    for(int i = 0; i < (size - 1); i++){
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
    
    int i,k;
    int z = NUM * 2; //двойка это кол-во массивов для слияния
    int a[NUM], b[NUM], res[z];

    //Ввод значения элементов первого массива
    //Копирование значений в общий массив
    printf("first_array\n");
    for(i = 0; i < NUM; i++){
	printf("a[%d] = ", i);
	scanf("%d", &a[i]);
	res[i] = a[i];
    }

    //Ввод значения элементов второго массива
    //Копирование значений в общий массив
    printf("second_array\n");
    for(k = 0; k < NUM; k++, i++){
	printf("b[%d] = ", k);
	scanf("%d", &b[k]);
	res[i] = b[k];
    }

    //i-тая еденица используется как счетчик.

    bubbleSort(res, i); //Вызов функции сортировки
    
    //Вывод отсортированных элементов массива
    
    printf("\n");

    for(i = 0; i < z; i++)
	printf("%d ", res[i]);

    printf("\n");

    return 0;
}


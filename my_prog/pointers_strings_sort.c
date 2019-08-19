#include<sys/cdefs.h>
#include<math.h>
#include<string.h>
#include<time.h>
#include<stdbool.h>
#include<stdio.h> //for getchar();
#include<stdlib.h> //for system("");
#include <unistd.h> //for sleep();


//Высокомерие или чистейшая вера в себя???

#define NUM 6

int main(){
    system("clear");
//init. five strings pointers in array.
//объявлен массив из пяти указателей на строки.
    char *ptr[NUM]; 

//make five strings. Apropriate for them the value.
    int i;
    char cpyptr1[NUM][10]; //I create 5 lines. 10 columns (letters in each)
    for(i = 0; i < NUM; i++){
	printf("\nEnter a string: ");
	scanf("%s", cpyptr1[i]); //The fill the each strings

	//The asign to each element of pointers, each element of a string array
	ptr[i] = cpyptr1[i];
    }


//Preparation for sort
    char cpyptr2[NUM][10];
    for(i = 0; i < NUM; i++)
	//strcpy() - The copies a string array to another string array;
	//#include < string.h > // Для strcpy;
	//copy from array cpy1 to cpy2;
	strcpy(cpyptr2[i], cpyptr1[i]);

//The sort
    int j;
    char *temp;
    for(j = 1; j < NUM; j++){
	for(i = 0; i < NUM; i++){
	    //strcmp – сравнение строк.
	    //Функция побайтно сравнивает коды символов двух строк, 
	    //	на которые указывают аргументы функции.
	    if(strcmp(ptr[i], ptr[j]) > 0){
		temp = ptr[i];
		ptr[i] = ptr[j];
		ptr[j] = temp;
	    }
	}
    }

//The out to screen
    system("clear");

    printf("\nTheOriginal list is ");
    for(i = 0; i < NUM; i++)
    	printf("\n%s", cpyptr2[i]);
    printf("\n");
    printf("\nThe Sorted list is ");
    for(i = 0; i < NUM; i++)
	printf("\n%s", ptr[i]);

    printf("\n");
}

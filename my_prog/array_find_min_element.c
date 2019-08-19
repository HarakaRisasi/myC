#include<sys/cdefs.h>
#include<math.h>
#include<string.h>
#include<time.h>
#include<stdbool.h>
#include<stdio.h> //for getchar();
#include<stdlib.h> //for system("");
#include <unistd.h> //for sleep();

//Высокомерие или чистейшая вера в себя???

#define AMO 4 //the array's space.
int main(){
    system("clear");

    int a[AMO],i, n, min;

    while(i < AMO){
	printf("%d / %d >> ", i + 1, AMO);
    	scanf("%d", &a[i]);
	i++;
	system("clear");
    }

    i = 0;

    min = 0;//Присвоить 0-й ячейке массива, статус минимального числа
    /*
       !!! Важно.
       При работе с элементами массива, использовать специфику синтаксиса,
       свойственную только работе внутри массива.
       
       Пример:
       Без массива, эта же задача выглядела бы так:
       min = n;
       if(min > n)
	  min = n; 
    
    */

    for(i = 1; i < AMO; i++){ //i = 1; так как min = 0;
			      //тоесть a[0] начнет сравниваться с a[1];
	
	if(a[min] > a[i])//if TRUE
	    min = i;//than a[0] apropriate (i) or a[i]
	    //example:
	    //if   a[min = 0] = 4 && a[i = 1] = 3
	    //than a[min = 1] = 3

    }

    printf("Min array's element: %d\n", a[min]);

    return 0;
}

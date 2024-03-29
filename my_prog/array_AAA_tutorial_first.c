#include<sys/cdefs.h>
#include<math.h>
#include<string.h>
#include<time.h>
#include<stdbool.h>
#include<stdio.h> //for getchar();
#include<stdlib.h> //for system("");
#include <unistd.h> //for sleep();

//Высокомерие или чистейшая вера в себя???

//Arrays in C

//Discription:
/*- массив — это структура данных, представляющая собой совокупность
    элементов одного типа;
  - В инструкции объявления массива указывается количество
    элементов массива;
  - Элементы массива нумеруются с нуля;
  - Доступ к элементу массива осуществляется путем указания
    индекса (номера) элемента. 
    В качестве индекса можно исполь­зовать константу, переменную 
    или выражение целого типа.
  - Индекс может меняться от 0 до n - 1, где n — число элементов массива;
  - Доступ к элементам массива можно осуществить при помощи указателя;
  - В инструкции объявления массива удобно использовать именованную константу,
    объявленную в директиве #define;
  - Для ввода, вывода и обработки массивов удобно использовать 
    инструкции циклов (for, while);
  - Типичной ошибкой при работе с массивами является обращение
    к несуществующему элементу, т. е. выход индекса задопустимые пределы значений.
*/
//Syntax:
/*
  1D array;
  type name[amount of elements];
  >>  int n[10];

  2D Array;
  type name[am_of_el_1][am_of_el2];
  >> int n[10][12]
*/

//Condition:
/*
a[0] -> 4
a[1] -> 5
a[2] -> 3
a[3] -> 2
a[4] -> 1
a[5] -> 8
a[6] -> 9
a[7] -> 7
a[8] -> 5
a[9] -> 4
*/
//Solution:
#define AMOUNT 3 //the array's space.
int main(){
    system("clear");

    int a[AMOUNT], n, i;
    int avg, sum = 0; //for average

    for(i; i < AMOUNT; i++){
	printf("a[%d/%d] = ", i, AMOUNT);
	scanf("%d", &n);
	a[i] = n;

	//average
	sum += n;

	system("clear");
    }
    
    i = 0; //drop counter for to reuse

    while(i < AMOUNT){
	printf("a[%d] -> %d\n", i, a[i]);
	i++;
    }
    
    //average module
    avg = sum / AMOUNT;
    printf("\nSumma = %d\n", sum);
    printf("(int)Average = %d\n", avg);

    return 0;
}

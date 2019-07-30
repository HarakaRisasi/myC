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
//-> 23 0 45 -5 12
//Min. element of array: -5
//!Use Pointers to access to elements

//Slution:
//!define space of array
#define AMO 4 //the array's space.
int main(){
    system("clear");

    int a[AMO]; //array;
    int *min; //number min. element;
    int *p; //array's element pointer;
    int i;

    p = a;

    for(i = 1; i <= AMO; i++){
	printf(">> ");
	scanf("%d", p++);
	system("clear");
    }
    for(i = 0; i < AMO; i++){
	printf("-> %d;\n", a[i]);
    }

    min = a; //min = a[0];
    p = a + 1;    
    
    for(i = 2; i <= AMO; i++){
	if(*p < *min) min = p;
	p++;
    }
    printf("\nMin element of array: %d\n", *min);
}

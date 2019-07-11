#include<stdio.h>
#include<sys/cdefs.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<time.h>

//Logarithm - это операция обратная возведению в степень.

//Pythagorean square
/*
   Суть квадрата Пифагора в том, что это своеобразная таблица умножения,
  которая читается как построчно так и по колонно.
  Суть же каждой из строк или колонн в том, что они являются результатом
  перемножения чисел. 
  Т.Е. Число 1, перемножается в диапазоне от 1 до 9
       Затем 2, 3, ... 9.
  Так как, программа пишется построчно, то и уделять внимание стоит,
  написанию цикла в строку, но не в колонну.
*/

int main(){
    int i, j;

    printf("    "); //the first space

    for(i = 1; i <= 9; i++) //the first string
	printf("%4i", i);
    printf("\n\n");

    for(i = 1; i <= 9; i++){ //the numbers of string
	printf("%4i", i);
	
	for(j = 1; j <= 9; j++){ //sequences (j * i)
	    printf("%4i", j * i);
	}
	printf("\n");

    }
    
    return 0;
}


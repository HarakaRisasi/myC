#include<stdio.h>
#include<stdlib.h>
/*
   - Указатель в c является адресом, который является числовым значением.
   - Существует четыре арифметических оператора, которые можно использовать 
     в указателях: ++, -, + и -.
*/

int main(){
    system("clear");

    int var = 1000, a;

    //Просмотр ячеек памяти.
    //Так как *ptr - это указатель на целочисленное местоположение
    //	, то есть возможность, сместить указатель на 4 байта.
    
    //0x7ffd3345dee4;

    //ptr++; - Эта операция переместит указатель на следующую ячейку памяти, 
    //	       не влияя на фактическое значение в ячейке памяти.


    //0x7ffd3345dee8;


    int *ptr;
    ptr = &var;

    while(a < 8){
	printf("%i >> ", a);
    	printf("%p >> ", ptr);
    	printf("%d\n\n", *ptr);
    	ptr++;
	a++;
    }

    a = 0;
    printf("--------------------------\n");

    //Работа с массивом
    //Указатель *ptr - сдвигается на одну ячейку памяти(ptr++)
    //	и показывает ее содержимое.

    int var_i[] = {1,2,3,4,5};
    ptr = var_i; //инициализация указателя без (&), так как это массив
		 // и указатель присваивает не один адресс,
		 // а адресс первого элемента массива (var_i[0]);

    for(a; a < 8; a++){
	printf("%i >> ", a);
    	printf("%p >> ", ptr);
	printf("%d\n\n", *ptr);
	ptr++;
    }
}

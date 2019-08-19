#include<sys/cdefs.h>
#include<math.h>
#include<string.h>
#include<time.h>
#include<stdbool.h>
#include<stdio.h> //for getchar();
#include<stdlib.h> //for system("");
#include <unistd.h> //for sleep();


//Высокомерие или чистейшая вера в себя???

/*
- Указатель обеспечивает доступ к переменной без прямого обращения к ней.
- Указатель может указывать на переменные другого основного типа:
    int;
    char;
    double;
  Также на (Агрегаты данных),такие как (массивы).
  !!!Агрегат - Структурированная совокупность элементов данных.

-Когда используют указатели:
    >>Когда необходимо, чтобы функция возвращала более одного значения.
    >>Для более удобной передачи массивов и строк из одной функции в др.
    >>Для упрощения работы с массивами путем перемещения указателей на массивы
      (или фрагменты массивов) вместо перемещения самих массивов.
    >>Для распределения памяти и последующего доступа к ней
      (Динамическое распределение памяти).

  !!!
  >>Исходный тип указателя определяет, на переменные какого типа может
     ссылаться объявленный указатель.
  >>Формально любой тип указателя может указывать на произвольный адрес памяти.
  >>Но, (Адресная арифметика) зависит полностью от исходного типа указателя.

  !!!Два специальных оператора для указателей
  >>(*) - присваивает переменной свойства указателя.
    temp = *var2;
    - переменной присваивается значение, что и у переменной "по адресу" var2.

  >>(&) - возвращает адрес памяти операнда.
    int var1, *var2;
    var1 = 500; - была проинициализированна переменная. 
    var2 = &var1; - указатель var2 присвоил адрес переменной var1;
*/


int main(){

/*
    system("clear");

    int var = 500;
    int var2 = 600;
    int *ptr1 = 0;
    int *ptr2;
    int test;

    ptr1 = &var;
    test = *ptr1;

    //address
    printf("The address variable(var) is %p\n", ptr1);
    //apropriate value with pointer help by (var1) to variable (test)
    printf("The variable (test) apropriate value %d from (var)\n", test);
    //output value variable before operation with pointer
    printf("Before (var2) apropriate value from (*ptr) |var2 = %d\n", var2);
    //pointer apropriate address (var2)
    ptr2 = &var2;
    //in to address to pointer initialization the new value.
    *ptr2 = 10;
    //print variable(var2) with a new value from pointer
    printf("Var2 apropriate value from pointer (*ptr2) |var2 = %d\n", var2);
}
*/

/*Присваивание значений указателям:
  >> ptr = &var;
  >> ptr2 = ptr;
  >> ptr = 0;
*/

//Адресная арифметика с указателями
    system("clear");

//example:

    printf("Increment & Decrement variable value\n");
    int var = 500, *ptr_var;
    ptr_var = &var;
    printf("(%d) after decrement & address %p\n", *ptr_var, ptr_var);
//  ++*ptr_var; //инкрементирует переменную var на 1;
    --*ptr_var; //декрементирует переменную var на 1;
    var = *ptr_var;
    printf("(%d) before decrement & address %p\n", *ptr_var, ptr_var);

    printf("\nPointers indicates on previous/next cell\n");
//  ptr_var++ & ptr_var--; //указывает влево/вправо на одну ячейку памяти
    int var_arr[] = {1, 2};
    int *ptr_arr;
    ptr_arr = var_arr; //the write without (&) because is it first element of array.
    printf("(%d) is a cell value & cell address %p\n", *ptr_arr, ptr_arr);
    ptr_arr++;
    printf("(%d) is a cell value & cell address %p\n", *ptr_arr, ptr_arr);

    printf("\nPointers indicates on previous/next \"i\" numbers of cell\n");
    printf("or Addition & subtraction in pointers\n");
//  ptr_var++ & ptr_var--; //указывает влево/вправо на одну ячейку памяти
    int var_arr_1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr_arr_1;
    ptr_arr_1 = var_arr_1; //write without (&) because is it first element of array.
    printf("(%d) is a cell value & cell address %p\n", *ptr_arr_1, ptr_arr_1);
    ptr_arr_1 += 5;
    printf("(%d) is a cell value & cell address %p\n", *ptr_arr_1, ptr_arr_1);

//Сравнение указателей
    
    //!!! нельзя сравнивать указатели, указывающие на разные типы переменных
    printf("\nCompare of pointers\n");
    int var_cmpr_a = 34, var_cmpr_b = 523;
    int *ptr_a, *ptr_b;
    ptr_a = &var_cmpr_a;
    ptr_b = &var_cmpr_b;

    printf("%d(a) %d(b)\n", *ptr_a, *ptr_b);
    if(ptr_a > ptr_b)
	printf("A > B\n");
    else
	printf("A < B\n");

    //так же можно и с операторами (>, <=, >=, ==, !=, == NULL;)

    ptr_a = NULL; //Указатель указывает на (NULL) тоесть не на что не указывает.

    if(ptr_a == NULL)
	printf("A = NULL / or 0, address %p\n", ptr_a);
    else
	printf("A != NULL / or 0, and address %p\n", ptr_a);

/*  !!!Если ptr_a & ptr_b ссылаются на члены одного массива,
       то выражение		ptr_end - ptr_begin
       дает разность в байтах между ячейками памяти, на которые они ссылаются.
*/	

//Указатели и одномерные массивы

    printf("\nPointers and arrays\n");

    int array[] = {1,2,3,4,5,6,7};
    int *ptr_ary;

    ptr_ary = array; //указывает на первый элемент массива;
    printf("The val. of first el. of arr. is %d and adrs %p\n", *ptr_ary, ptr_ary);

/*
    !!!Символ амперсанда(&) не требуется перед именами массива, так как
       последние и есть адреса памяти.
    !!!Важно, чтобы прочитать отдельный элемент массива потребуется амперсанд.
    
Listing:
    scanf("d", *ary) - for first elemnt of array
    scanf("%d", &ary[2])- for an array element
    scanf("%d", ary++) - for next array elemnt
*/
    ptr_ary = array + 1;
    ptr_ary = &array[2];
    printf("!!!(ptr_ary = array + 1) or (= ary[i])\n");
    printf("The val. of 'i' el. of arr. is %d and adrs %p\n", *ptr_ary, ptr_ary);
}

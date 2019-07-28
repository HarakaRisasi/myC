#include<sys/cdefs.h>
#include<math.h>
#include<string.h>
#include<time.h>
#include<stdbool.h>
#include<stdio.h> //for getchar();
#include<stdlib.h> //for system("");
#include <unistd.h> //for sleep();

//Высокомерие или чистейшая вера в себя???

//Greatest Common Divider (GCD)
int main(){
    system("clear");
    int nod, num_x, num_y , x, y;

    printf("X = "); scanf("%i", &x);
    
    printf("Y = "); scanf("%i", &y);

    //check: X > Y
    if(x > y){
	num_x = x; 
	num_y = y;
    }else{
	num_x = y;
	num_y = x;
    }
    
    //Из большего числа вычитаем меньшее.
    //Если получается 0, то значит, что числа равны друг другу и являются НОД 
    //	(следует выйти из цикла).
    //Если результат вычитания не равен 0, то большее число заменяем на 
    //	результат вычитания.
    //Переходим к пункту 1.
   while(num_y != 0){
	if(num_x % num_y == 0){
    	    printf("END nod is %i\n", num_y);
    	    break;
    	}else
    	    num_y = num_x % num_y;
   }

   return 0;
}

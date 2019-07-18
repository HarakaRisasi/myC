#include<stdio.h>
#include<sys/cdefs.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<time.h>
#include<stdbool.h>

//Logarithm - это операция обратная возведению в степень.

//10 examples
//rand.num >= 0 && rand.num <= 100
//if(rand.num - rand.num) -> ans != -n;
//74 - 73 = ? -> 15 -> NO! Is 1
//53 + 44 = ? -> 97
//Amount of error
//Points:
    //10 / 10       -> Excelent!
    //9 || 8 / 10   -> Good.
    //7 || 6 / 10   -> Normal.
    //6 && less /10 -> Bad.
//Average rating

#define HB 100 // high board

int main(){
    int i, x=0, y=0, z=0, ans, err = 0, mark = 0;
    
    srand(time(NULL));
    for(i = 1; i <= 10; i++){
	x = rand() % HB;
	y = rand() % HB;
	if(x >= y){
	    z = x - y;
	    printf("%i/10 >>> %i - %i = ",i , x, y, ans);
	    scanf("%i", &ans);
	    if(ans != z){
		printf("__________________NO! is %i\n", z);
		err++;
	    }
	}else{
	    z = x + y;
	    printf("%i/10 >>> %i + %i = ",i , x, y, ans);
	    scanf("%i", &ans);
	    if(ans != z){
		printf("__________________NO! is %i\n", z);
		err++;
	    }
	}
    }
    switch(err){
    	case 0: mark = 5; break;
    	case 1: mark = 4; break;
    	case 2: mark = 3; break;
		
    	default: mark = 1; break;
    }
    printf("\nError = %i;\nYour mark is %i;\n", err, mark);

    err = 0;

    return 0;
}

#include<stdio.h>
#include<sys/cdefs.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<time.h>
#include<stdbool.h>

//Logarithm - это операция обратная возведению в степень.

int main(){
    int x, y, i, ans, error = 0, t_er = 0;
    float amount = 0, mark = 0, z = 0;

    for(x = 1; x < 10; x++){
	printf("\nTable #%i\n", x);
    	for(i = 1; i < 10; i++){
    	    y = x * i;

	    printf("%i * %i = ", x, i);
	    scanf("%i", &ans);
	    if(ans != y){
		printf("NO! Right is %i\n", y);
		error++;
		t_er++;
	    }	    
	}
	if(error > 0){
	    printf("\nThe number of errors in the table #%i is %i", x, error);
	    if(error == 1)
		mark += 4;
	    else if(error == 2 || error == 3)
		mark += 3;
	    else
		mark += 1;	    
	}else
	    mark += 5;
	amount++;

	error = 0;	    

	printf("\n");
    }
    printf("Total error: %i\n", t_er);

    z = mark / amount;

    printf("Average mark: %.2f\n", z);
}


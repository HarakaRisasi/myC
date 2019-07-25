#include<sys/cdefs.h>
#include<math.h>
#include<string.h>
#include<time.h>
#include<stdbool.h>
#include<stdio.h> //for getchar();
#include<stdlib.h> //for system("");
#include <unistd.h> //for sleep();

//Высокомерие или чистейшая вера в себя???

//Guess the number 1 to 10;
int main(){
    system("clear");

    int i = 1, x, count, ans;

    srand(time(NULL));
    x = 1 + rand() % 10;
    printf("The computer 'conceived' a number from 1 to 10.\n");
    printf("Enter  number: \n");

    do{
	printf("%i/5 > ", i);
	scanf("%i", &ans);
	
	if(ans == x){
	    printf("YES! You Right it's: %i\n", x);
	    break;
	}else
	    count++;

	i++;
    }
    while(count < 5);
    
    return 0;
}

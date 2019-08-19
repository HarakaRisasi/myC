#include<sys/cdefs.h>
#include<math.h>
#include<string.h>
#include<time.h>
#include<stdbool.h>
#include<stdio.h> //for getchar();
#include<stdlib.h> //for system("");
#include <unistd.h> //for sleep();

//Высокомерие или чистейшая вера в себя???

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

#include<stdio.h>
#include<stdlib.h>

#define N 11
int main(){
    
    system("clear");
/*
    int var[] = {11, 100, 200};
    int i;

    for(i = 0; i < MAX; i++){
	printf("value of var [%d] = %d\n", i, var[i]);
    }

    return 0;
}
*/
    char a_char[N];
    int i;

    scanf("%s", a_char);

    for(i = 0; i < N; i++)
        printf("symbol %c = ASCII #%i\n",a_char[i], a_char[i]);
    
}

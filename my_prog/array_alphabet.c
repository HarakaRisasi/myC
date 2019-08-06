#include<stdio.h>
#include<stdlib.h>

int main(){
    
    system("clear");

    char alpha[26];
    int i, j;
    for(i = 65, j = 0; i < 91; i++, j++){
	alpha[j] = i;
	printf("%c ", alpha[j]);
    }
    printf("\n");
}

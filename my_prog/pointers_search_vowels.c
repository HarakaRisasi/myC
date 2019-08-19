#include<sys/cdefs.h>
#include<math.h>
#include<string.h>
#include<time.h>
#include<stdbool.h>
#include<stdio.h> //for getchar();
#include<stdlib.h> //for system("");
#include <unistd.h> //for sleep();


//Высокомерие или чистейшая вера в себя???

//Vowels letters:
//A,E,I,O,U,Y(sometimes);

//Consonants letters:
//B,C,D,F,G,H,J,K,L,M,N,P,Q,R,S,T,V,W,X,Y(sometimes),Z;

int main(){
    system("clear");
    int vowel[] = {65, 69, 73, 79, 85, 97, 101, 105, 111, 117};
    int *ptr_vl;
    int i, j; //loops counter;
    int count; //counter of vowels;
    char *ptr_wd;
    char word[100];


    printf("Enter word: ");
    scanf("%s", word);

    ptr_vl = vowel;
    ptr_wd = word;
    
    for(i = 0; i < strlen(word); i++){
	for(j = 0; j < 10; j++){
	    if(*ptr_vl == *ptr_wd){
		printf("%c ",*ptr_wd);
		count++;
	    }
	    ptr_vl++;
	}	
	ptr_vl = vowel;
	ptr_wd++;
    }
    printf("\n");
    printf("The number of vowels in the word is: %d\n", count);

    return 0;
}

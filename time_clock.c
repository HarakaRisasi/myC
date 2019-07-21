#include<stdio.h>
#include<sys/cdefs.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<time.h>
#include<stdbool.h>
/*
   Puts in command line:
   "%a, %d %b %y %T %z"
*/
int main(int argc, char *argv[]){
    char outstr[200];
    time_t t;
    struct tm *tmp;
    
    t = time(NULL);
    tmp = localtime(&t);
    if (tmp == NULL) {
	perror("localtime");
	exit(EXIT_FAILURE);
    }
    
    if (strftime(outstr, sizeof(outstr), argv[1], tmp) == 0) {
	fprintf(stderr, "strftime returned 0");
	exit(EXIT_FAILURE);
    }
    
    printf("Result string is \"%s\"\n", outstr);
    exit(EXIT_SUCCESS);
}

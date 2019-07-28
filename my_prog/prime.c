#include<stdio.h>

int main(){
    for(int i = 1; i <= 13/2; i++){
	float z = 13 % i;
	printf("%.2f\n", z);
    }
}

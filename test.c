#include<stdio.h>
#include<sys/cdefs.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

//Logarithm - это операция обратная возведению в степен

//n, n¹, n², ..., nⁿ;
//n += nⁿ - 1;
/*0 + 0 = 0 || sum = sum + i 
  0 + 1 = 1 || sum = sum + i 
  1 + 2 = 3
  3 + 3 = 6
  6 + 4 = 10
*/

int main(){
    int n;
    int sum;
    int i;

    scanf("%i", &n);

    for(int i; i <= n; sum += i, i++){
//	sum = sum + i;
	printf("%i) %i + %i = %i\n", i, sum, i, sum);

    }

    return 0;
}



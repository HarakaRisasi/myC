#include<stdio.h>
#include<sys/cdefs.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<time.h>

//Logarithm - это операция обратная возведению в степен

//Price and weght range by 100 - n(gr)
//100 gr = 1.65
//200 gr = 3.30
//... gr = n
int main(){
    int w, mw;// w - weight(gramm); max.weight(gramm);
    float p, sum;// p - price(100 gramm);

    printf("Price 100(gr) = ");
    scanf("%f", &p);
    printf("Max.weight(gr) = ");
    scanf("%i", &mw);

    for(w; w <= mw; w += 100){
	 sum = p * (w / 100);
	 printf("Weight = %i || Price = %.2f\n", w, sum);
    }
    
    return 0;
}
    	

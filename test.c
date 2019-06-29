32#include<stdio.h>
#include<sys/cdefs.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

//Logarithm - это операция обратная возведению в степен
    int main(){
	float s, fp; //credit amount; final pay;
	float pr, p; //rate; 1/12 rate
	int m; //month
	float x, e; //month pay; for_power_of_num_function;
	float sp;//sum of percent on month
	float tsp;//sum of percent total
	float base, r;
	int exponent;
	int i;
	
	printf("Sum = ");
	
	scanf("%f", &s); 
	printf("Rate = ");
	scanf("%f",&pr);
	printf("Month = ");
	scanf("%i", &m); 
	
	if(m > 0 && m <= 60){ 
	    //Exponentiation 
	    
	    //Пока я еще не знаю как вычислять степень числа функцией.
	    //Поэтому взял данный код для этих целей.
	    
	    p = (pr / 12) / 100; //(1/12) процентной ставки
	    //Требуется для формулы определения платежа
	    
	    e = p + 1;//e - base of exponenta
	    //часть формулы(аннуитетного платежа) требуется возв-ти в степень
	    
	    base = e; 
	    r = 1; 
	    exponent = m; 
	    i = 1;          
	    while(i <= exponent)
	    {
		r *= base;
		i++; 
	    }
	    
	    //End of exponentation
	    
	    x = s * (p + (p / (r - 1)));//ежемесячный платеж
	    
	    //Сумма процентов
	    //d - дней в месяце(5 лет)
	    int d[]={31,28,31,30,31,30,31,31,30,31,30,31, 31,28,31,30,31,30,31,31,30,31,30,31, 31,28,31,30,31,30,31,31,30,31,30,31, 31,28,31,30,31,30,31,31,30,31,30,31, 31,28,31,30,31,30,31,31,30,31,30,31};
	    
	    printf("\nSchedule\n");
	    printf("Debt amount | Interest amount\n\n");
	    
	    fp = s;//инициировано для сохранения значения оригинала суммы.
	    
	    for(int i = 0; i < m; i++){
		sp = (s * pr * d[i]) / (100 * 365);
		tsp += sp;
		printf("%i -> %.2f | %.2f\n", i+1, s, sp); 
		s = s - (x - sp); 
	    }
	    
	    s = fp + tsp; //Final payout
	    
	    printf("\nMonth pay = %.2f\n", x);
	    printf("Overpayment Amount (Interest Amount) = %.2f\n", tsp);
	    printf("Final payout = %.2f\n", s);
	    																															     
	}
	else
	    printf("The term must be less than 60 months.\n");
	return 0;
    }


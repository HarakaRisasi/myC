//Пропущено из-за непонимания процесса программы:
//ex.138
//ex.139
//ex.151
//ex.153

#include<stdio.h>

//ex.1
	float a, b; //width and height of rectangle
	float s;    //area of rectangle
//ex.8
	float Cena_Tetr;
	int Kol_Tetr;
	float Cena_Kar;
	int Kol_Kar;
	float Cena_Lin;
	int Kol_Lin;

//ex.9
	int x = 1.5;

//ex.10
	int summa = 0;

//ex.11
	int n = 0;
	n++;

//ex.12
	int counter = n;
	counter -= 2;

//ex.13
	int x1, x2;
	avg = (x1 + x2) / 2;

//ex.14
	//y = -2.7x³+0.23x² - 1.4
	int x = n;
	float y = -2.7* x*x*x + 0.23* x*x - 1.4

//ex.15
	int dx = n;
	int x += dx;

//ex.16
	float kg = f * 0.4059;

//ex.17
	int km = km * 1000;
	float versta = km / 1066.8;

//ex.18
	//S rec = height * width;
	int s = h * w;

//ex.19	
	float a;
	float b;
	float s = (1 * a * h)/2;

//ex.20
	float a;
	float b;
	float h;
	float s = ((a + b) / 2) * h;

//ex.21
	//#include<math.h>
	//S = Π * r²
	float r;
	float s = M_PI * r*r;

//ex.22
	//s = 2 * Π * r(h + r)
	//v = Π * r² * h
	#include<math.h>
	float r;
	float h;
	float s = 2 * M_PI * r(h + r);
	float v = M_PI * r*r * h;

//ex.23
	float h;
	float a;
	float b;
	float v = h * a * b;

//ex.24
	//v = 3/4 * Π * r³
	//s = 4 * Π * r²
	
	#include<math.h>
	float r;
	float v = (3 * M_PI * r*r*r)/4;
	float s = 4 * M_PI * r*r;

//ex.25
	//v = Π * r² * h;
	
	#include<math.h>
	float r;
	float h;
	float v = M_PI * r*r * h;

//ex.26
	//v = Π * h(r₁² - r₂²)
	
	#include<math.h>
	float h;
	float r1;
	float r2;
	float v = M_PI * h * ((r1 * r1) - (r2 * r2));

//ex.27
	//s = 1/3 * Π * r² * h;
	
	#include<math.h>
	float r;
	float h;
	float s = (1 * M_PI * r*r * h) / 3;

//ex.28
	//C = 5/9(F-32)
	
	float f;
	float c = (5 * (f - 32)) / 9;

//ex.29
	//I = U / R
	float u;
	float r;
	float i = u / r;

//ex.30
	//R = U / I
	float u;
	float i;
	float r = u / i;

//ex.31 
	//R = R₁ + R₂ + R₃
	float r1;
	float r2;
	float r3;
	float r = r1 + r2 + r3;

//ex.32
	//r = (r₁ * r₂) / (r₁ + r₂)
	float r1;
	float r2;
	float r = (r1 * r2) / (r1 + r2);

//ex.33
	//Om to KOm
	float Om;
	float KOm = Om * 1000;

//ex.34
	//price
	float tet;
	float obl;
	float car;
	//amount
	int ncar;
	int ntet;

	float summ = ntet * (tet + obl) + ncar * car;

//OUTPUT(printf, puts)

//ex.36	
	int main(){
		printf("Aleksandr\nVladimirovich\nAndriyanov\n");
	}

//ex.37
	int main(){
		printf("Унылая пора! Очей очарованье!\n");
		printf("Приятна мне твоя прощальная краса —\n");
		printf("Люблю я пышное природы увяданье,\n");
		printf("В багрец и золото одетые леса.\n\n");
		printf("\t\t\tА. С. Пушкин\n");
	}

//ex.38	
	float a;
	float b;
	float c;
	/*
	 * 	%6.2f :- means output will be in 6 columns
	 * 	Here, a = 1.28999;
	 * 	So after applying %6.2f it will print 
	 * 	two spaces before 1 and .2f means two digits after dot. 
	 * 	Include dot also in count it 
	 * 	also requires space to get stored.
	*/
	printf("a = %5.3f\n, b = %5.3f\n, c =  %5.3f\n", a, b, c);

//ex.39
	int h;
	int l;
	printf("height = %.2f cm\n, long = %.2f cm\n", h, l);

//ex.40
	int m;
	int n;
	printf("m = %i, n = %i\n", m, n);

//ex.41
	int a;
	int b;
	int c;
	printf("a = %i\nb = %i\nc= %i\n", a, b, c);

//ex.42
	float x1;
	float x2;
	printf("x1 = %.2f\nx2 = %.2f\n", x1, x2);

//ex.43	
	//gcc name.c -lncurses
	#include<ncurses.h>
	
	int main()
	{
		initscr();// Переход в curses-режим
		
		start_color();
		//	BLACK BLUE CYAN GREEN PURPLE RED WHITE YELLOW

		init_pair(1, COLOR_WHITE, COLOR_BLUE);
		
		attron(COLOR_PAIR(1));
		
		printw("Storm has set the heavens scowling,\n");
		printw("Whirling gusty blizzards wild,\n");
		printw("Now they are like beasts a-growling,\n");
		printw("Now a-wailing like a child;\n");
		printw("\n");
		printw("\t\t\tA.S.Pushkin.\n");
		
		refresh();// Вывод приветствия на настоящий экран
		getch();// Ожидание нажатия клавиши пользователем
		endwin();// Выход из curses-режима. Обязательная команда.
		
		return 0;
	}

//ex.44
	#include<ncurses.h>
	
	int main()
	{
		initscr();

		start_color();

		init_pair(1, COLOR_RED,    COLOR_BLACK);
		init_pair(2, COLOR_YELLOW, COLOR_BLACK);
		init_pair(3, COLOR_GREEN,  COLOR_BLACK);
		init_pair(4, COLOR_CYAN,   COLOR_BLACK);
		init_pair(5, COLOR_BLUE,   COLOR_BLACK);
		init_pair(6, COLOR_MAGENTA,COLOR_BLACK);
		init_pair(7, COLOR_WHITE,  COLOR_BLACK);

		attron(COLOR_PAIR(1));
		printw("A\n");
		attron(COLOR_PAIR(2));
		printw("A\n");
		attron(COLOR_PAIR(3));
		printw("A\n");
		attron(COLOR_PAIR(4));
		printw("A\n");
		attron(COLOR_PAIR(5));	
		printw("A\n");
		attron(COLOR_PAIR(6));
		printw("A\n");
		attron(COLOR_PAIR(7));
		printw("A\n");

		refresh();
		getch();
		endwin();

		return 0;
	}

//ex.45
	int kol;
	scanf("%i", &kol);	

//ex.46
	float radius;
	scanf("%f", %radius);

//ex.47
	float u, r;
	scanf("%f", &u);
	scanf("%f", &r);

//ex.48
	float u, r;
	scanf("%f %f", u, r);
//ex.49
	#include<math.h>

	//v = Π * r² * h
	
	float r, h;
	float v;
	printf("radius = ");
	scanf("%f", &r);
	printf("height= ");
	scanf("%f", &h);

//ex.50
	//profit = sum(1 +((rate * period)/100))
	//!!! float sum, int per... in scanf("%f" "%i", &sum, &period)
	//!!!do not confuse types
	float sum;
	int period;
	float rate;
	float profit;
	float value; //total sum + profit;

	printf("summa = ");
	scanf("%f", &sum);
	printf("period = ");
	scanf("%i", &period);
	printf("rate = ");
	scanf("%f", &rate);

//ex.51
	int main()
	{
		int l;
		int h;
		int s;
		printf("enter long: ");
		scanf("%i", &l);
		printf("enter hight: ");
		scanf("%i", &h);
		
		s = l * h;

		printf("S = %i\n", s);

		return 0;
	}

//ex.52
	//S = a * h
	int main()
	{
		int a;
		int h;
		int s;
		s = a * h;
		printf("S = %i\n", s);

		return 0;
	}

//ex.53
	//S = h * l * w
	int main()
	{
		int h;
		int l;
		int w;
		int s;

		s = h * l * w;

		printf("S = %i\n", s);

		return 0;
	}

//ex.54
	//S = 2(ab * bc * ac)
	int main()
	{
		int a;
		int b;
		int c;
		int s;
		
		s = a*b + b*c + a*c * 2;
		
		printf("S = %i\n", s);

		return 0;
	}

//ex.55
	//S = h * l * w
	int main()
	{
		int e;
		int s;

		scanf("%i", &e);

		s = e * e * e;

		printf("S = %i\n", s);

		return 0;
	}

//ex.56
	#include<math.h>

	int main()
	{
		float r, h, v;

		scanf("%f", &r);
		scanf("%f", &h);	

		v = 2 * M_PI * r*r * h;

		printf("%.2f\n", s);

		return 0;
	}

//ex.57
	int main()
	{
		float tetr;
		int kol_tetr;
		float car;
		int kol_car;
		float sum;

		scanf("%f %i %f %i", &tetr, &kol_tetr, &car, &kol_car);

		sum = (tetr * kol_tetr) + (car * kol_car);

		printf("%.2f\n", sum);

		return 0;
	}

//ex.58
	int main()
	{
		float tetr;
		float obl;
		int n;
		float sum;

		scanf("%f %f %i", &tetr, &obl, &n);

		sum = n * (tetr * obl);

		printf("%.2f\n", sum);

		return 0;
	}
	
//ex.59
	int main()
	{
		float price_kg;
		float weight;
		float sum;

		scanf("%f %f", &price_kg, &weight);

		sum = price_kg * weight;

		printf("%.2f\n", sum);

		return 0;
	}

//ex.60
	//S = 1/2 * h * b;
	
	int main()
	{
		float b;
		float h;
		float s;

		scanf("%f %f", &b, &h);

		s = (h * b) / 2;

		printf("%.2f\n", s);

		return 0;
	}

//ex.61
	#include<math.h>

	/* 
	 * s=a*h/2, где a - основание, h - высота.
	 * h - может быть вычислена по формуле h=b*sin(u).
	 * Аргумент функции sin должен быть выражен в радианах.
	 * 1 рад. = 180/pi, где pi - число "ПИ").
	 * s = a*b*sin(u*M_PI/180)/2;
	 */
	int main()
	{
		float a, b;// длины сторон
		float u;   // величина угла, выраженная в градусах
		float s;   // площадь треугольника

		scanf("%f %f", &a, &b, &u);

		s = a * b * sin(u * M_PI / 180) / 2;

		printf("%.2f\n", s);

		return 0;
	}	

	
//ex.62
	//r = r1 * r2 / r1 + r2
	int main()
	{
		float r1;
		float r2;
		float r;

		scanf("%f %f", &r1, &r2);

		r = r1 * r2 / (r1 + r2);

		printf(".2f\n", r);

		return 0;
	}

//ex.63	
	int main()
	{
		float r1;
		float r2;
		float r;

		scanf("%f %f", &r1, &r2);
		
		r = r1 + r2;

		printf("%.2f\n", r);

		return 0;
	}

//ex.64
	//I = U / R

	int main()
	{
		int u, r;
		float i;
		
		scanf("%i %i", &u, &r);
		i = u / r;

		printf("%.2f\n" , i);

		return 0;
	}

//ex.65
	//scale 1:120
	//distance "A" to "B" = 3.5cm
	//x = 3.5 * 120
	
	int main(){
		int scal = 120;
		float dist = 3.5;
		float x;

		x = dist * scal;
		printf("%.2f\n", x);

		return 0;
	}

//ex.66
	//distance 67
	//fuel 8.5 / 100 km
	//price 19.20/L
	//trip cost = ?
	
	int main(){
		int dist = 67;
		float fu = 8.5;
		float pr = 19.20;
		float cost;

		cost = (fu / 100) * dist * pr;
	       	
		printf("%.2f\n", cost);
		
		return 0;
	}

//ex.67
	int main(){
		float dist; //in(meter)
		float time; //in(minut.second)
		float speed;//in(km/h)

		scanf("%f", &dist);
		scanf("%f", &time);

		int min = time;//catch only min.
		int sec = (time - min) * 100;//catch only sec.
		int all_sec = min * 60 + sec;//all seconds together

		float x = dist / all_sec;//speed in (m/s)
		speed = (x * 3.6);
		/*
		 * 3.6 is 3600 sec/h => 3600sec / 1000m = 3.6 s/m
		 * 1km/h = 1m/3.6sec
		 */
		printf("%.2fkm/h\n", speed);
		
		return 0;
	}

//ex.68
	//V = ΠR² * h
	#include<math.h>
	int main(){
		float r;
		float h;
		float v;

		v = M_PI * r*r * h;

		printf("%.2f\n", v);

		return 0;
	}	

//ex.69

	//С = 2ΠR
	//S = 2ΠR * h
	#include<math.h>
	int main(){
		float r;
		float h;
		float s;
		float с;

		с = 2 * M_PI * r;
		s = с * h;

		printf("%.2f\n", s);

		return 0;
	}

//ex.70
	//V = l * w * h
	int main(){
		float l, w, h;
		float v;

		scanf("%f %f %f", &l, &w, &h);

		v = l * w * h;

		printf("%.2f cm³\n", v);
		
		return 0;
	}	
		
//ex.71
	//1 mile = 1600.94 meter
	int main(){
		float m;
		float x;
		float km;

		x = 1600.94 / 1000;
		km = x * m;

		printf("%.2f mile is %.2f km\n", m, km);

		return 0;
	}

//ex.72
	//1 lb = 0.453592 kg
	int main(){
		float lb;
		float kg;
		float x;

		x = 453.592 / 1000;
		kg = x * lb;

		printf("%.2f lb is %.3f kg\n", lb, kg);

		return 0;
	}

//ex.73	
	//profit formula
	/*
	 * P = (Sum * i * t / y) / 100
	 *
	 * P - profit
	 * sum - deposit
	 * i - percent
	 * t - total time of deposit(in days)
	 * y - amount day's in year(365 always)
	 * 
	 * 30.416 = 365 days / 12 months
	 */
	int main(){
		float sum = 25000 //sum
		float i = 10; //percent rate
		float n = 6; //month
		float t;//conv. months in days
		float p;//profit
		float td;//total deposit

				      
		t = 30.416 * n;
		p = (sum * i * t / 365) / 100;
		td = p + sum;

		printf("profit is %.2f\n", p);
		printf("total deposit is %.2f\n", td);

		return 0;
	}

//ex.74
	//1 hour = 60 minuts
	int main(){
		int min = 150; 
		float hour;

		int y = min / 60; //conv. total min in hours
		float x = min % 60; //remainder by the total minuts
		x = x / 100;
		hour = y + x;
		
		if(hour < 1)
			printf("%i minuts is %.2f minuts\n",min, hour);
		else
			printf("%i minuts is %.2f hours\n",min, hour);

		return 0;
	}

//ex.75
	//12.6 rub => 12 rub 60 cop;
	int main(){
		float sum;

		scanf("%f", &sum);

		int x = sum * 100; //shift left by two signs
		int y = x % 100; //define fractional part
		int z = x / 100; //remove fractional part
		/*
		 * int z = 1260;
		 * int z = 1260 / 100 = 12.60;
		 * but if type INT
		 * int z = 12;
		 */

		printf("%.2f rub. is %i rub. %i cop.\n", sum, z, y);

		return 0;
	}

//ex.76
	//1 lb = 453.592 grams
	int main(){
		float lb;
		float eq_gr = 0.453592; //equivalent

		scanf("%f", &lb);
		float kg = lb * eq_gr; //conv. lb to kg
		int x = kg * 1000; //shift left by 3 signs
		int y = x % 1000; //define fractional part
		int z = x / 1000; //remove fractional part

		printf("%.2f lb = %i kg %i gr\n", lb, z, y);

		return 0;
	}

//ex.77
	//S = ½ * |(x₂ - x₁)*(y₃-y₁)-(x₃-x₁)*(y₂-y₁)|
	//abs - function returns the absolute value.(modulo)
	int main(){
		int x1 = -2, x2 = 1, x3 = 5;
		int y1 =  5, y2 = 7, y3 = -3;
		float s;

		s = abs((x2 - x1)*(y3 - y1) - (x3 - x1)*(y2 - y1)) / 2;

		printf("S = %.2f\n", s);

		return 0; 
	}

//ex.78
	//R = R₁ + R₂
	//R = (R₁ * R₂) / (R₁ + R₂) - !is true if only two resisters.
	int main(){
		float r1 = 15, r2 = 27.3;
		float r;
		int t;
		
		scanf("%i", &t);
		
		if(t == 1){
			r = r1 + r2;
			printf("%.2f Om\n", r);
		}else{
			r = (r1 * r2) / (r1 + r2);
			printf("%.2f Om\n", r);
		}
		
		return 0;
	}

//ex.79
	//	profit = sum(1+((i * u) / 100));
	//also: profit = (sum * i * t * y) / 100;
	
	/*
	 * p - profit
	 * sum - deposit
	 * i - percent rate
	 * t - total time in deposit(in days)
	 * y - amount day's in year(365 always)
	 *
	 * 30.416 = 365 days / 12 month
	 */
	int main(){
		float sum;
		float i1 = 10, i2 = 13;
		float cd = 30.416; // count days
		float t = 12;
		int y = 365;
		float p;
		
		scanf("%f", &sum);
		float x = t * cd; //conv. months in days
		
		if(sum < 5000){
			p = (sum * i1 * x / y) / 100;
			float z = p + sum;
			
			printf("10% Profit = %.2f\n", p);
			printf("Amount = %.2f\n", z);
		}else{
			p = (sum * i2 * x / y) / 100;
			float z = p + sum;	
			
			printf("13% Profit = %.2f\n", p);
			printf("Amount = %.2f\n", z);
		}
		return 0;
	}
//ex.80
	//	profit = sum(1+((i * u) / 100));
	//also: profit = (sum * i * t * y) / 100;
	
	/*
	 * p - profit
	 * sum - deposit
	 * i - percent rate
	 * t - total time in deposit(in days)
	 * y - amount day's in year(365 always)
	 *
	 * 30.416 = 365 days / 12 month
	 */
	int main(){
		float sum;
		float i1 = 9, i2 = 11, i3 = 13;
		float cd = 30.416; // count days
		float t = 6;
		int y = 365;
		float p;
		
		scanf("%f", &sum);
		float x = t * cd; //conv. months in days
		
		if(sum < 5000){
			p = (sum * i1 * x / y) / 100;
			float z = p + sum;
			
			printf("9% Profit = %.2f\n", p);
			printf("Amount = %.2f\n", z);

		}else if(sum > 4999 && sum < 10000){
			p = (sum * i2 * x / y) / 100;
			float z = p + sum;	
			
			printf("11% Profit = %.2f\n", p);
			printf("Amount = %.2f\n", z);

		}else{
			p = (sum * i3 * x / y) / 100;
			float z = p + sum;	
			
			printf("13% Profit = %.2f\n", p);
			printf("Amount = %.2f\n", z);
		}

		return 0;
	}
//ex.81
	int main(){
		int pf; //photo format
		int ap;//number of photos
		float price;
		float amount;
		
		scanf("%i %i", &pf, &ap); //enter numbers of photo.
		
		if(pf == 1 && ap > 0){
			price = 2.5;
			amount = price * ap;
			printf("price by photo 9x12 = 2.5\n");
			
			if(ap > 10){			
				amount = amount * 0.95;
				printf("number of photos :%i\n", ap);
				printf("price with %5 sale %.2f\n", amount);
			}else{	
				printf("number of photos :%i\n", ap);
				printf("total price: %.2f\n", amount);
			}
			
		}else if (pf == 2 && ap > 0){
			price = 3.2;
			amount = price * ap;
			printf("price by photo 10x15 = 3.2\n");
			
			if(ap > 10){			
				amount = amount * 0.95;
/				printf("number of photos :%i\n", ap);
				printf("price with %5 sale %.2f\n", amount);
			}else{	
				printf("number of photos :%i\n", ap);
				printf("total price: %.2f\n", amount);
			}
		}
		else
			return 0;	
	}

//ex.82
	//How many current cunsumed by the device
	//Check U != 0;
	//I = P / U (A)
	//P = U * I (W)
	//U = P / I (V)
	int main(){
		float I, P, U;

		scanf("%f %f", &P, &U);

		I = P / U;

		if(U != 0){
			I = P / U;
			printf("Current is %.2f A\n", I);

		}else
			puts("Error! Current can't be zero!\n");

		return 0;
	}

//ex.83
	//S = Πr²
	//check r !> real r
	#include<math.h>
	int main(){
		float r1, r2, s; //r1 - outer(r1) and inner(r2) radius
		
		scanf("%f %f", &r1, &r2);
		s = M_PI * r1*r1;

		if(r2 < r1)
			printf("Space of ring = %.2f\n", s);
		else
			puts("Error! Inner rad. is larger than outer");
	
		return 0;
	}

//ex.84
	//1 min = 60sec
	//1 hour = 3600 sec.

	/*
	* mind map:
	* 2.90 => 2.90 (2) (.90) => if sec > 60 => than error
	* 2.60 (2) (.60) => 2 * 60 && .60 * 100 => a + b
	*/
	int main(){
		float t;
		int m, s, x;
		int ts; //total sec.
		
		scanf("%f", &t);
		
		m = t;
		x = t * 100;
		s = x % 100;
		
		if(s < 61 && t > -1){
			ts = m * 60 + s;
			printf("%.2f min/sec = %isec.\n", t, ts);
		}else
			printf("Error! In 1min. = 60sec. NOT %i\n", s);
		
		return 0;
	}
//ex.85
    //leap year
    /*algorithm:
      if year % 4 == 0
      &&
      year % 100 != 0
      or
      year % 400 == 0     
      thah year is leap
     */
    int main(){
    	int y;
	
	scanf("%i", &y);
	
	if(((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0)) 
	    printf("Year %i is leap\n", y); 
	else
	    printf("Year %i is'n leap\n", y); 

	return 0;
    }

//ex.86
    //square equation: ax²+bx+c = 0 && a != 0;
    //root of euqation: x = (-b ± sqrt(D)) / 2a;
    //discriminant: D = b² - 4ac;
    /*if:
      D > 0, than 2 roots
      D == 0, than 1 root
      D < 0, no solution
     */
    int main(){
	float a, b, c;
	float x1, x2;
	float d;
	
	scanf("%f %f %f", &a , &b, &c);
	
	d = b*b - 4* a * c;
	x1 = (-b + sqrt(d)) / (2 * a);
	x2 = (-b - sqrt(d)) / (2 * a);
	
	if(d < 0)
	    printf("D < 0 is no solution(");
	else{
	    printf("X₁ = %.2f\n", x1);
	    printf("X₂ = %.2f\n", x2);
	}

	return 0;
    }

//ex.87
    //if price > 1000, than %10 sale;
    int main(){
	float p;
	
	scanf("%f", &p);
	
	if(p > 1000){
	    float s = p - (p * 0.90);
	    printf("summa = %.2f\n", p);
	    printf("sale  = %.2f\n", s);  
	    printf("total = %.2f\n", p - s);
	}else{
	    printf("summa = %.2f\n", p);
	    printf("total = %.2f\n", p);
	}

	return 0;
    }   

//ex.88
    //if summ > 500 => -3%, if summ => 1000 == -5%
    int main(){
	float sum;
	
	scanf("%f", &sum);
	
	if(sum > 500 && sum < 1001){
	    sum = sum * 0.97;
	    printf("total with %3 = %.2f\n", sum);
	}else if(sum > 1000){
	    sum = sum * 0.95;
	    printf("total with %5 = %.2f\n", sum);
	}else
	    printf("total = %.2f\n", sum);

	return 0;
    }

//ex.89
    //sience St.Petersburg 1703
    int main(){
	int sp_b = 1703;
	int ans;
	
	scanf("%i", &ans);
	
	if(ans != sp_b)
	    puts("You wrong, St.Petersburg was founded in 1703\n");
	else
	    puts("You right!!! Congratulations!!!\n");

	return 0;
    }

//ex.90
    //start World WAR II in 1939
    int main(){
	int w_w2 = 1939;
	int ans;
	
	scanf("%i", &ans);
	
	if(ans != sp_b)
	    puts("You wrong, World War II was started in 1939\n");
	else
	    puts("You right. But is holiday with tears in eyes\n");

	return 0;
    }

//ex.91
    //Quiz:
    //Architect St. Isaac's Cathedral?
    //3 answers: Domenico Trezini
    //           Oguist Montherran
    //           Karl Rossi

    #include<string.h>

    int main(){
    	char arch[21] = "1.Oguist Montherran";
    	char ans[2];
    	
    	puts("\nArchitect St. Isaac's Cathedral?\n");
	puts("Answears is:\n");
	puts("> 1.Oguist Montherran\n");
	puts("> 2.Domenico Trezini\n");
	puts("> 3.Karl Rossi\n");       
	puts("Enter, answer 1, 2 or 3");
	
	scanf("%c", ans);
	
	if(ans[0] == arch[0])
	    puts("Yes!!!\n");
	else{       
	    puts("No!!!\n");
	    printf("Right is #%s\n\n" ,arch);
	}

	return 0;
    }

//ex.92
    //Quiz
    //Nevskiy prospect gets its name?
    //3 ans: by river name the Neva
    //       in memory on the famous comander A.Nevsky
    //       by the name of the monastery Alexandro Nevskaya laurels
    #include<string.h>
    int main(){
	char arch[21] = "1.In memory A.Nevsky";
	char ans[2];
	
	puts("Architect St. Isaac's Cathedral?\n\n");
	puts("Answears is:\n");
	puts("> 1.In memory A.Nevsky\n");
	puts("> 2.By river name Neva\n");
	puts("> 3.By the name of monastery Alexandro Nevskaya laurels\n");    
	puts("Enter, answer 1, 2 or 3");
	
	scanf("%c", ans);
	
	if(ans[0] == arch[0])
	    puts("Yes!!!\n");
	else{
	    puts("No!!!\n");
	    printf("s %s\n" ,arch);
	}

	return 0;
    }

//ex.93
    //To compare the two nums
    int main(){
	float a, b;
	
	scanf("%f %f", &a, &b);
	
	if(a > b)
	    printf("%.2f is larger than %.2f\n", a, b);
	else if (a == b)
	    printf("%.2f is equal %.2f\n", a, b);
	else
	    printf("%.2f is smaller than %.2f\n", a, b);
	
	return 0;
    }

//ex.94
    #include<stdlib.h>// для доступа к srand
    #include<ctime>// для доступа к time
    int main(){
	
	srand(time(NULL));
	
	int a = rand() % 10 + 1;
	int b = rand() % 10 + 1;
	int ans;
	
	printf("%i X %i = ", a, b);
	
	scanf("%i", &ans);
	
	int c = a * b;
	
	if(c == ans)
	    puts("Yes!\n");
	else
	    printf("No!\n%i X %i = %i\n", a, b, c);
	
	return 0;
    }

//ex.95
    #include<stdlib.h>
    #include<time.h>
    int main(){
	
	srand(time(NULL));
	
	int a = rand() % 100 + 1;
	int b = rand() % 100 + 1;
	int ans;
	
	if(a > b){    
	    printf("%i - %i = ", a, b);
	    
	    scanf("%i", &ans);
	    
	    int c = a - b;
	    
	    if(c == ans)
		printf("Yes!\n");
	    else
		printf("No!\n%i - %i = %i\n", a, b, c);
	}
	else
	    printf("Try again! A < B\n");

	return 0;
    }
  
//ex.96 
    //even num
    int main(){
	int a;
	
    	scanf("%i", &a);
	
	if(a % 2 == 0 && a > 0)
	    printf("%i is even\n", a);
	else if(a == 0)     
	    printf("Error! %i is zero\n", a);
	else if(a % 2 != 0 && a > 0)
	    printf("%i is odd\n", a);
	else
	    printf("%i is negative number\n", a);
	
	return 0;
    }

//ex.97
    //n % 3 == 0
    int main(){
	int n;
	
	scanf("%i", &n);
	
	if(n % 3 == 0){
	    int x = n / 3;
	    printf("%i, than %i / 3 = %i\n", n, n, x);
	}else
	    printf("%i not devide by 3((\n", n);
	
	return 0;
    }

//ex.98
    //if call in mon. to fri, sale is 0%
    //if call in sat. to sun, sale is 20%
    int main(){
	int n, a; // n - data, a - minuts
	/*data:
	  1-mon
	  2-tue
	  ...
	  7-sun
	 */
	float p = 2.3; // price
	float sum, sale; // total summ, sale
	
	scanf("%i %i", &n, &a);
	
	sum = a * p;
	sale = sum - (sum * 0.8);
	
	if(n > 0 && n < 6){
	    printf("price %.1f/min\n", p);
	    printf("sale 0\n");    
	    printf("total sum = %.2f\n", sum);
	}else{    
	    printf("price %.1f\n", p);    
	    printf("sale %20 = %.2f\n", sale);    
	    printf("total sum = %.2f\n", sum - sale);
	}
    }

//ex.99
    //predicted_weight = height(cm) - 100;
    //weight < p_weight >>> 
    //  rec = p.weight - weight; >>>
    //  reomendation: "you nead up to %rec
    int main(){
    	float pw, h, w, r;
    	
    	scanf("%f %f", &h, &w);
	
	pw = h - 100;
	
	if(pw > w){
	    r = pw - w;
	    printf("recomendation: you need up to %.2f kg\n", r);
	}else if(pw == w)
	    printf("You weight is normal!\n");
	else{
	    r = w - pw;
	    printf("recomendation: you need down to %.2f kg\n", r);
	}
	
	return 0;
    }

//ex.100
    //12 >>> 02 - is winter
    //03 >>> 05 - is spring
    //06 >>> 08 - is summer
    //09 >>> 11 - is outumn
    int main(){
	int m;
	
	scanf("%i", &m);

	if(m < 13){    
	    if(m > 11 || m < 3)
		printf("%i month is winter\n", m);
	    
	    else if(m > 2 && m < 6)
		printf("%i month is spring\n", m);
	    
	    else if(m > 5 && m < 9)
		printf("%i month is summer\n", m);
	    
	    else
		printf("%i month is outumn\n", m);
	}   
	else
	    printf("%i is not calendar month\n", m);

	return 0;
    }  

//ex.101
    //mon. to fri. >>> work weak;
    //sat. or sun. >>> weakend;
    int main(){
	int d;
	
	scanf("%i", &d);
	
	if(d > 0 && d < 6)
	    printf("Is work day\n");
	
	else
	    printf("HEY!!! It's weakend))\n");
	
	return 0;
    } 

//ex.102
    //1 - рубль
    //2, 3, 4 - рубля
    //0, 5, ..., 10, ..., 19  - рублей
    //!r = not more than 1000!
    int main(){    
	int r, x;
	
	for(r = 0; r < 106; r++){   
	    if(r > 99)      
		x = r % 100;    
	    else    
		x = r;
	    
	    if(x > 10 && x < 15)    
		printf("%i рублей\n", r);    
	    
	    else{
		x = x % 10;
		
		if(x == 1)
		    printf("%i рубль\n", r);
		
		else if(x > 1 && x < 5) 
		    printf("%i рубля\n", r);
		
		else
		    printf("%i рублей\n", r);    
	    }    
	}
    }

//ex.103
    //1 - копейка
    //2,3,4 - копейки
    //0, 5, ..., 20 - копеек
    //исключение 11, 12, 13, 14
    int main(){
	int c, x;
	
	printf("Enter not more than 99 cop.\n");
	scanf("%i", &c);
	
	if(c > 99) 
	    return 0;
	else
	    x = c;
	
	if(x > 10 && x < 15)
	    printf("%i копеек\n", c);
	else{
	    x = x % 10;
	    
	    if(x > 0 && x < 2)
		printf("%i копейка\n", c);
	    else if(x > 1 && x < 5)
		printf("%i копейки\n", c);
	    else
		printf("%i копеек\n", c);
	    
	    return 0;
	}   
    }

//ex.104
    //Happy new year - хоть сегодня 25 июля 2019.
    //Надеюсь Александр ты уже достиг, своей цели.
    //И тот опыт, что ты получил печатая этот код
    //весе эти годы, тебе по праву пригодился.
    //Ты сегодня кстати получил свой 3D printer, помнишь
    //Носорога и Руку ОК.

    //if 31.12.2019 >>> tomorow is 01.01.2020
    //if today dd.mm.yyyy >>> than tomorom is 01.mm.yyyy
    //msg: today is last day of month
    //msg: tomorow is dd.mm.yyyy
    //if year % 4 == 0 >>> february is 29 not 28
    //31 days: 1,3,5,7,8,10,12
    //30 days: 4,6,9,11
    //28 - 29: 2
    int main(){
	int d, m, y;// day, month, year
	int x;
	int t, tm;// today, tomorow
	
	scanf("%i %i %i", &d, &m, &y);
	
	// 12 11 1989
	
	if((m == 4 || m == 6 || m == 9 || m == 11) && (d == 30))
	    
	    x = 1;
	else if((y % 4 != 0) && (d == 28))
	    x = 1;
	else if((y % 4 == 0) && (d == 29))
	    x = 1;
	else if(d == 31)
   	    x = 1;
    	else{
	    
    	    printf("this not data\n");
    	    return 0;
    	}
	
    	if(x = 1){
	    printf("The last day of month!\n");
	    d = 1;
	    
    	    if(m == 12){
    		printf("Happy New Year!!!\n");
    		m = 1;
    		y++;
    	    }else
    		m++;
    	}
    	else
	    d++;
	
    	printf("Tomorow %i.%i.%i\n", d, m, y);
    }

//ex.105
    //Switch 
    //blinds store
    int main(){
    	float w, h; //width, height in (cm)
    	int m; //material
	//1 - plastic, textile, alluminium
    	float p; //price (1m²)
    	float s; //space (1cm²)
    	float sum; //summa
	
    	printf("\nBlinds\n");
    	printf("Width > ");
    	scanf("%f", &w);
    	printf("Height > ");
    	scanf("%f", &h);
	
    	printf("Materials:\n");
    	printf("1 - plastic\n");
    	printf("2 - textile\n");
    	printf("3 - alluminium\n");
    	printf("Your choice > ");
    	scanf("%i", &m);
	
    	switch(m){
	    case 1: p = 200; break;
	    case 2: p = 250; break;
	    case 3: p = 350; break;
		    
	    default: p = 0; break;
	}
	
    	if(p != 0){
	    s = (w * h) / 10000; //10000 or 1m² > 100 cm * 100 cm
	    sum = s * p;	    
    	    
	    printf("price to m² = %.2f$\n", p);
	    printf("space m² = %.2f\n", s);
    	    printf("amount = %.2f\n", sum);
    	}else
    	    printf("\nyou don't choice material\n");
    }

//ex.106
    //data:
    //format photo 9x12 10x15 18x24
    //amount of photo
    //if > 10 >>> sale 10%
    int main(){
	int f, n;// format, amount
	float sum, p, x;// summa, price, sale
	
	printf("1 - 9X12\n");
	printf("2 - 10X15\n");
	printf("3 - 18X24\n");
	printf("input format of photo > "); 
	scanf("%i", &f);
	
	printf("Iput amount of photo > ");
	scanf("%i", &n);
	
	switch(f){
	    case 1: p = 3.50; break;
	    case 2: p = 5.00; break;
	    case 3: p = 8.50; break;
		    
	    default: p = 0; break;    
	}
	
	sum = n * p;
	x = sum - (sum * 0.9);
	
	if(n > 10){    
	    printf("TOTAL CHECK: %i photo in format %i\n", n, f);
	    printf("Summa with %10 sale = %.2f\n", x);
	    printf("%.2f\n", sum);
	}else{
	    printf("TOTAL CHECK: %i photo in format %i\n", n, f);
	    printf("%.2f\n", sum);
	}

	return 0;
    } 

//ex.107
    //fuel:
    //92 = 17.50
    //95 = 20.30
    //98 = 25.40
    //DT = 18.50
    int main(){
	int f, l;
	float p, sum;
	
	printf("\nFUEL\n");
	printf(">1 92 = 17.50\n");
	printf(">2 95 = 20.30\n");
	printf(">3 98 = 25.40\n");
	printf(">4 DT  = 18.50\n");
	printf("Input fuel > ");
	scanf("%i", &f);
	
	printf("Input amount litres > ");
	scanf("%i", &l);
	
	switch(f){
	    case 1: p = 17.5; break;
	    case 2: p = 20.3; break;
	    case 3: p = 25.4; break;
	    case 4: p = 18.5; break;
		    
	    default: p = 0; break;
	}
	
	sum = l * p;
	
	printf("Total L = %i\n", l);
	printf("Summa = %.2f\n", sum);
	
	return 0;
    }

//ex.108
    //1 - mon
    //2 - tue
    //3 - wed
    //4 - thu
    //5 - fri
    //6 - sat
    //7 - sun
    int main(){
	int n;
	
	scanf("%i", &n);
	
	switch(n){  
	    case 1: puts("Monday\n"); break;
	    case 2: puts("Tuesday\n"); break;
	    case 3: puts("Wednesday\n"); break;   
	    case 4: puts("Thursday\n"); break;  
	    case 5: puts("Friday\n"); break;
	    case 6: puts("Saturday\n"); break;
	    case 7: puts("Sunday\n"); break;
		    
	    default: puts("It's not a day number\n"); break;
	}
	
	return 0;
    }

//ex.109
    //term of deposit
    //3m = 9%
    //6m = 11.5%
    //12m = 13.5%
    //18m = 15%
    //24m = 18%
    //36m = 24%
    //profit = (sum * i * t / 365) / 100
    //30.416 = 365 / 12
    int main(){
	int t; //month
	float sum, p, i;//summa, profit, percent
	
	printf("Summa = ");
	scanf("%f", &sum);
	
	printf("Input term of deposit\n");
	printf("3m = 9%\n");
	printf("6m = 11.5%\n");
	printf("12m = 13.5%\n");
	printf("18m = 15%\n");
	printf("24m = 18%\n");
	printf("36m = 24%\n");
	
	printf("Term of deposit = ");
	scanf("%i", &t);
	
	switch(t){
	    case 3: i = 9; break;
	    case 6: i = 11.5; break;
	    case 12:i = 13.5; break;
	    case 18:i = 15; break;
	    case 24:i = 18; break;
	    case 36:i = 24; break;
		    
	    default: puts("it incorrect period"); break;    
	}
	if(t < 37){
	    p = (sum * i * t / 365) / 100;    
	    float ts = p + sum;
	    
	    printf("If deposit on %i months >>> profit: %.2f\n", t, p);
	    printf("TOTAL SUM: %.2f\n", ts);
	}
	return 0;
    }

//ex.110
    //phone codes by cityes and price by 1 min.
    //423 - Vladivostok = 2.2
    //495 - Moscow = 1
    //815 - Murmansk = 1.2
    //846 - Samara = 1.4
    int main(){
    	int c, m;//code, min
	float p, sum;//price, summa
	printf("423 - Vladivostok\n");
	printf("495 - Moscow\n");
	printf("815 - Murmansk\n");
	printf("846 - Samara\n");
	
	printf("Phone code: ");
	scanf("%i", &c);
	
	switch(c){
	    case 423: p = 2.2; break;
	    case 495: p = 1; break;
	    case 815: p = 1.2; break;
	    case 846: p = 1.4; break;
		      
	    default: puts("ERROR! Is not a phone code"); break;
	}
	
	if(c == 423 || c == 495 || c == 815 || c == 846){
	    
	    printf("Minuts: ");
	    scanf("%i", &m);
	    
	    sum = p * m;
	    
	    printf("Your phone code: %i\n", c);
	    printf("Price / min: %.2f\n", p);
	    printf("TOTAL SUMMA: %.2f\n", sum);
	}
	else        
	    return 0;
    }

//ex.111
    /*Вопрос о реформе календаря стал обсуждаться ещё в XIX веке, когда были названы указанные недостатки действующего календаря. Однако из-за астрономически определённой длины солнечного (тропического) года в сутках, выражающейся не кратным 7 и даже нецелым числом, составить универсальный календарь, который подходил бы на каждый год как трафарет, невозможно.
     */
    //if dd.mm.yyyy(26.06.2019) >>> wednesday
    //day formula:
    //dw = (d + y + y/4 - y/100 + y/400 + (31 * m)/12) % 7;
    //(d + [1/5(13m-1)] + y + [y/4] + [c / 4] - 2c + 777) mod 7 - ancient Rome calendar!!
    //
    //output is: day of weak: 1 - mon, 2 - tue, 3, 4, 5, 6, 7 - sun
    int main(){
	int d, m, y, x, dw;
	
	printf("Day ");    
	scanf("%i", &d);
	printf("Month ");
	scanf("%i", &m);
	printf("Year ");
	scanf("%i", &y);    
	
	if(d > 0 && d < 32)
	    if(m > 0 && m < 13)
		if(y > 1582){ 
		    x = (14 - m) / 12;
		    y = y - x; 
		    m = m + 12 * x - 2;

		    dw = (d + y + y/4 - y/100 + y/400 + (31 * m)/12) % 7;
		    
		    printf("\nIt's ");
		    
		    switch(dw){ 
			case 1: puts("Monday\n"); break;
			case 2: puts("Tuesday\n"); break;
			case 3: puts("Wednesday\n"); break;
			case 4: puts("Thursday\n"); break;
			case 5: puts("Friday\n"); break;
			case 6: puts("Saturday\n"); break;
			case 7: puts("Sunday\n"); break;
				
			default: printf("Error dw > 7 %i\n", dw); break;
		    }
		    
		    //dw = (d + (1*(13*m - 1) / 5) + y + y / 4 + c / 4 - 2*c + 777) % 7;
		}else
		    printf("Error! It's not a data\n");
	return 0;
    }

//ex.112
    //10 times >>> name;
    #include<string.h>
    int main(){
	char name[20];
	scanf("%s", name);
	printf("\n");
	
	for(int i = 1; i < 11; i++)
	    printf("%i> %s\n",i ,name);

	return 0;
    } 

//ex.113
    //output val. of function in range -2 to 2, step 0.5
    //y = -2.4x²+5x-3
    /*
       x        y
       -2       -22.6
       -1.5     -15.9
       ...      ...
       1.5     -0.9
       2       -2.6
     */
    int main(){ 
    	float y, x;
	
	for(x = -2; x < 2.5; x = x + 0.5){
	    y = -2.4*x*x + 5*x -3;  
	    printf("if x = %.2f than y = %.2f\n", x, y);
	}
	return 0;
    } 

//ex.114
    //if n = 2 >> n² = 4 table of square num
    //range 1 to 10
    int main(){
	int n, x;
	
	for(n = 1; n < 11; n++){
	    x = n * n;
	    
	    printf("N = %i | N² = %i\n", n, x);
	}
	return 0;
    }

//ex.115
    //if N % 2 != 0 >>> N²
    int main(){
	int n, x;
	
	for(n = 1; n < 10; n++){
	    if(n % 2 != 0){
		x = n * n;          
		printf("N = %i | N² = %i\n", n, x);
		n++;
	    }
	}
	return 0;
    }

//ex.116
    //acceleration of gravity
    //speed free fall, after evry  0.5 second.
    //v = g * t 
    //g = 9.8 m/s²
    int main(){
	float v, t;
	float g = 9.8;//m/s²
	
	for(t = 0; t < 11; t = t + 0.5){
	    v = g * t;
	    
	    printf("Free fall = %.2f sec | V = %.2f\n", t, v);
	}

	return 0;
    }

//ex.117
    //Платеж=(сумма кредита/срок в месяцах)+(остаток × процентная ставка/12)
    //Формула Аннуетентного платежа
    //x = S * (P + (P / ((1+P)*n*n - 1)));
    //
    //Формула суммы процентов:
    //!!!Отдельный счет каждый месяц.
    //Сумма процентов = Долг * Ставка * Дни / 365 (366) / 100;
    //Сумма процентов = 1 000 000 руб * 12 * 31 / 365 / 100 = 10 191 руб 78 коп;
    //....
    //Сумма процентов = 998 191 руб 78 коп * 12 * 29 / 365 / 100 = 9 517 руб 01 коп; 
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

//ex.118
    //celsius to fahrenheit conversion formula f = (c * 9/5) + 32
    int main(){    
	float celsius, fahrenheit;
	
	for(celsius = 0; celsius < 11; celsius++){
	    fahrenheit = (celsius * 9 / 5) + 32;
	    printf("C⁰ = %.2f | F⁰ =  %.2f\n", celsius, fahrenheit);
	}                   
	return 0;
    }

//ex.119
    //inch to mm.
    //1 inch = 2.54 cm
    int main(){
    	float i, c; // inch range, centimeter
    	float s; // step
	float cm, inch, mm;
	
	int x; // to calculate
	
	printf("Inch range(0 to ...) = ");
	scanf("%f", &i);
	printf("Step = ");
	scanf("%f", &s);
	
	
	for(inch = 0; inch < i; inch = inch + s){    
	    cm = inch * 2.54;    
	    mm = cm * 10;
	    
	    printf("Inch = %.2f || mm = %.2f\n", inch, mm);
	}
	return 0;
    }

//ex.120
    //n, n¹, n², ..., nⁿ;
    //>>sum += nⁿ;
    //>>n + 1;
    int main(){
	int n;
	int sum;
	int i;
	
	printf("N = ");
	scanf("%i", &n);
	
	for(i; i <= n; i++)
	    sum += i;
	
	printf("Summa first (n) positiv numbers = %i\n", sum);
	
	return 0;
    }

//ex. 121
    //n * 2 - чтобы сумма именно n четных чисел, а не n/2(половины).
    //i % 2 == 0
    //sum += i;
    int main(){             
	int n;                      
	int sum;                            
	int i;                           
	
	printf("N = ");
	scanf("%i", &n);   
	
	n = n * 2;// так как сумма именно n четных чисел.
	
	for(i; i <= n; i++)             
	    if(i % 2 == 0)  
		sum += i;
	
	printf("Summa first (n) positiv numbers = %i\n", sum);                      
	return 0;
    }  

//ex.122
    //sum = 1 + 3 + 5 + 7 + .... + n;
    int main(){
	int n;
	int sum;
	int i;
	
	printf("Amount of digits = ");
	scanf("%i",&i);
	
	for(int y = 1; y <= i; n++, y++){
	    n++;         
	    sum += n;
	    printf("%i) n = %i || sum = %i\n",y, n, sum);
	}
	
	return 0;
    }

//ex.123
    //sum = 1 + ½ + ⅓ + ¼ + .... + 1/n;
    int main(){
	float n, dd = 1, dr = 1; //number, devidend, devider;
	float sum;
	int i;
	
	printf("Amount of digits = ");
	scanf("%i",&i);
	
	
	for(int y = 1; y <= i; dr++, y++){
	    n = (dd / dr) + 1;
	    sum += n;
	    printf("%i) n = %.4f || sum = %.3f\n",y, n, sum);
	}
	
	return 0;
    }

//ex.124
    //table 2^n
    //1² = 1;
    //2² = 4;
    //...
    int main(){
	int n = 1, x = 1;// base, exponent;
	
	for(n; n <= 10; n++){
	    x *= 2;
	    printf("%i) 2^%i = %i\n", n, n, x);
	}
	
	return 0;
    }

//ex.125
    //!n - factorial
    //!n = n * (n - 1);
    int main(){
	int a = 1, b = 1, c;
	int n;
	
	printf("Range of factorial: ");
	scanf("%i", &n);
	
	for(b; b <= n; b++){
	    c = a * b;
	    a = c;
	    printf("%i\n", c);      
	}
	
	return 0;
    }

//ex.126
    //The arithmetic mean
    //1 + 2 + 3 + 4 + 5 >> average = 3;
    int main(){
	int i;
	float n, sum;
	
	printf("Enter five numbers\n");
	
	for(i = 1; i < 6; i++){
	    printf("#%i number > ", i);
	    scanf("%f", &n);
	    sum += n;
	}   
	
	sum = sum / 5;
	
	printf("Average = %.2f\n", sum);
	
	return 0;
    }

//ex.127
    //The arithmetic mean
    //Input with keyboard:
    //1)amount of numbers
    //2)numbers
    //1 + 2 + 3 + 4 + 5 >> average = 3;
    int main(){
	int i, a; //i - counter; a - amount of input numbers;
	float n, sum; //n - input number; sum - summa for calculate;
	
	printf("Enter amount of numbers to calculate: ");
	scanf("%i", &a);
	
	printf("Enter five numbers\n");
	
	for(i = 1; i < (a + 1); i++){
	    printf("#%i number > ", i);
	    scanf("%f", &n);
	    sum += n;
	}   
	
	sum = sum / 5;
	
	printf("Average = %.2f\n", sum);
	
	return 0;
    }

//ex.128
    //The arithmetic mean
    //Input with keyboard:
    //1)amount of numbers
    //2)numbers
    //Output n - times:
    //summa = n || Average = avg
    int main(){
	int i, a; //i - counter; a - amount of input numbers;
	float n, sum, avg; //n - number; sum - sum for calc; avg - calc avg;
	
	printf("Enter amount of numbers to calculate: ");
	scanf("%i", &a);
	
	printf("Enter five numbers\n");
	
	for(i = 1; i < (a + 1); i++){
	    printf("#%i number > ", i);
	    scanf("%f", &n);
	    sum += n;
	    avg = sum / i;
	    printf("Summa = %.2f || Average = %.2f\n", sum, avg);
	    
	}   
	return 0;
    }
// ex. 129
    //Спорная задача, но я пока выхода лучше не нашел.
    //Выхода где надо найти min max из введенных через терминал чисел.
    //The arithmetic mean
    //Input with keyboard:
    //1)amount of numbers
    //2)numbers
    //Output n - times:
    //summa = n || Average = avg
    int main(){             
	int i = 1, a; //i - counter; a - amount of input numbers;
	float n, sum, avg; //n - number; sum - sum for calc; avg - calc avg;
	float max, min;
	
	printf("Enter amount of numbers to calculate: ");   
	scanf("%i", &a);
	
	printf("#%i number > ", i);
	scanf("%f", &n);
	
	/*
	   - вне цикла вводиться первое число, что станет началом вычисления
	   - min & max вне цикла присваивают себе значение первого числа,
	   введенного пользователем.
	   - внутри цикла for введенные числа будут сравниваться с прототипом
	   - sum выведен за цикл for, так как было введено число и присвоено n,
	   соответственно внутри цикла for к нему будут добавляться др. числа
	   из n !по условию задачи.
	 */
	min = n;   
	max = n;
	sum = n;
	//   здесь введены все числа начиная i + 1
	for(i = 2; i < (a+1); i++){
	    printf("#%i number > ", i);  
	    scanf("%f", &n);                                                                                                                  
	    sum += n;
	    if(n < min)
		min = n;
	    if(n > max)
		max = n;
	}

	avg = sum / i;
	
	printf("Summa = %.2f || Average = %.2f\n", sum, avg);
	printf("Max = %.2f\n", max);
	printf("Min = %.2f\n", min);
	return 0;
    }

//ex.130
    //The sum of random numbers
    int main(){
	int n, max;
	float sum, avg;
	
	printf("Enter max. amount of rand. num.: ");
	scanf("%i", &max);
	
	//число от которого вычисляется рандом
	//srand(4);
	//время в сек. от кот. вычисл. рандом
	srand(time(NULL));
	
	for(int i = 1; i <= max; i++){
	    n = rand() % max; //%10 это максимальное число в рандоме
	    printf("%i) %i\n", i, n);
	    
	    sum += n;//сумма рандомных чисел
	}
	
	avg = sum / max;
	printf("Sum. %i num. = %.2f && Average %i num = %.2f\n", max, sum, max, avg);
	
	return 0;
    }

//ex.131
    //n Loops.
    //The sum of n random numbers
    int main(){
	int n, max, i, j, loop;
	float sum, avg;
	
	printf("Enter max. amount of LOOP: ");
	scanf("%i", &loop);
	
	printf("Enter max. amount of rand. num.: ");
	scanf("%i", &max);
	
	//число от которого вычисляется рандом
	//srand(4);
	//время в сек. от кот. вычисл. рандом
	srand(time(NULL));
	
	for(i = 1; i <= loop; i++){
	    for(j = 1; j <= max; j++){
		n = rand() % max; //%10 это максимальное число в рандоме
		printf("%i ", n);
		
		sum += n;//сумма рандомных чисел
	    }
	    avg = sum / max;   
	    printf("\nSum. %i num. = %.2f && Average %i num = %.2f\n", max, sum, max, avg);
	    sum = 0;
	    printf("\n");
	    
	}    
	
	return 0;
    }

//ex.132
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

//ex.133
    #define LB -4 //low range level the change of argument
    #define HB 4 //high range level the chengae of argument
    #define DX 0.5 //argument increment

    //define - Preprocessor directive.
    //         With it, you can create so-called named constants.
    /*         С директивой define препроцессор работает следующим образом. 
    	       В тексте программы находятся все места, где встречается имя, 
	       указанное в директиве define. 
	       После этого вместо этого имени подставляется значение, указанное в 
	       директиве define.
     */
    // define {name}{value};
    int main(){
	float x, y; //argument; value of function
	int n; //dots amount
	int i; //loops counter
	
	printf("\nTable the function values y = |x| \n");
	/*
	   Диапазон данной функции равен
	   (верхний предел - нижний предел) : шаг + 1 
	   +1 - так как ноль.
	*/
	n = (HB - LB) / DX + 1;
	x = LB;
	for(i = 1; i <= n; i++){
	    y = abs(x); //abs - absolute value calculation
	    printf("%.2f %.2f\n", x, y);
	    x += DX;
	}   
    }  

//ex.134
    // value of function:
    //y = |x - 2| + |x + 1|;
    //range -> -4 to 5;
    //step -> 0.5;

    #define HB 5
    #define LB -4
    #define DX 0.5
    int main(){
	float x, y;
	int n;
	int i;
	
	n = (HB - LB) / DX + 1;
	x = LB;
	
	for(i = 1; i <= n; i++){
	    y = abs((x - 2) + (x + 1));
	    printf("%.2f %.2f\n", x, y);
	    x += DX;
	}
	
	return 0;
    }

//ex.135
    //Multiplication table
    
    #define MU 7
    int main(){
	int x, y, z;
	
	x = MU;    
	
	for(y = 1; y <=  10; y++){
	    z = x * y;
	    printf("%i * %i = %i\n", x , y, z);
	}
	
	return 0;
    }

//ex.136
    //Pythagorean square
    /*
       Суть квадрата Пифагора в том, что это своеобразная таблица умножения,
       которая читается как построчно так и по колонно.
       Суть же каждой из строк или колонн в том, что они являются результатом
       перемножения чисел. 
       Т.Е. Число 1, перемножается в диапазоне от 1 до 9
       Затем 2, 3, ... 9.
       Так как, программа пишется построчно, то и уделять внимание стоит,
       написанию цикла в строку, но не в колонну.
     */
    int main(){
	int i, j;
	
	printf("    "); //the first space
	
	for(i = 1; i <= 9; i++) //the first string
	    printf("%4i", i);
	printf("\n\n");
	
	for(i = 1; i <= 9; i++){ //the numbers of string
	    printf("%4i", i);
	    
	    for(j = 1; j <= 9; j++){ //sequences (j * i)
		printf("%4i", j * i);
	    }
	    printf("\n");
	    
	}
	
	return 0;
    }

//ex.137
    //Pi calculation
    //the compile with <math.h> and command with key -lm
    //gcc name.c -lm
    //lybrary Math.h is not a compile g++ and gcc
    /*
       Вычисление числа ПИ, в данном случае будет происходить по
       алгоритму связанному с вычислением бесконечного ряда(суммы) Эйлера:
       
       n          
       ====        2
       \      1   π 
        \    -- = --
        /     2    6
       /     i      
       ====         
       i = 1        
     */
    int main(){
	long double pi, x, i;
	
	for(i = 1; i < 1000000000; i++){ //такое кол-во циклов необходимо для приближения
			                 //до 8 знаков после запятой.
	    x += (1 / (i*i));
	}
	
	pi = x * 6; //pi^2 / 6, соответственно умножаю на 6    
	printf("%.9lf\n", sqrt(pi)); //вычисляю корень из результата.
	
	return 0;
    }

//ex.138

//ex.139

//ex.140
    //* * * *
    // * * * *
    //* * * *
    // * * * *
    //* * * *
    // * * * *
    //* * * *
    // * * * *
    int main(){
	int i = 0, j = 0, k = 0;
	
	for(k; k < 4; k++){ //amount loops
	    for(i; i < 4; i++)//string (*_)
		printf("* ");
	    i = 0;
	    printf("\n");
	    for(j; j < 4; j++)//string (_*)
		printf(" *");
	    printf("\n");
	    j = 0;
	}
	k = 0;
	return 0;
    }

//ex.141
    //Побитовые операторы
    //C программирование поддерживает 6 побитовых операторов:
    /*
       ~    Комплимент      Используется для включения / выключения
       >>   Сдвиг вправо    Используется для сдвига бита вправо
       <<   Сдвиг влево     Используется для сдвига бита влево
       AND, OR, XOR - это три основных побитовых оператора на языке программирования 
       C.AND оператор используется для маскировки конкретных битов. 
       input: AND OR XOR
       0 0    0   0  0
       0 1    0   1  1
       1 0    0   1  1
       1 1    1   1  0
       
       &    Побитовое И     
       |    Побитовое ИЛИ
       ^    Побитовый XOR
     */

    /*
       Операций сдвига две – битовый сдвиг влево (оператор <<) 
       и битовый сдвиг вправо (оператор >>). 
       Битовый сдвиг вправо сдвигает биты числа вправо, дописывая слева нули. 
       Битовый сдвиг влево делает противоположное: сдвигает биты влево, 
       дописывая справа нули. 
       Вышедшие за пределы числа биты отбрасываются.
       
       Например, сдвиг числа 5 влево на 2 позиции
       00000101 << 2 == 00010100
       
       Сдвиг числа 19 вправо на 3 позиции    
       00010011 >> 3 == 00000010
       
       Независимо от архитектуры (g-endian, или little-endian, или middle-endian) 
       числа в двоичном виде представляются слева направо, 
       от более значащего бита к менее значащему. Побитовый сдвиг принимает 
       два операнда – число, над которым необходимо произвести сдвиг, 
       и число бит, на которое необходимо произвести сдвиг.
     */
    /*
       n = 56;
       
       128 64 32 16 8 4 2 1
       0   0  0  0  0 0 0 0
       
       k = 56 >> 7
       7)0011 1000 7>> 0000 0000 -> 0&1(0000 0000 &
       0000 0001) = 0
       6)0011 1000 6>> 0000 0000 -> 0&1(0000 0000 &
       0000 0001) = 0
       5)0011 1000 5>> 0000 0001 -> 1&1(0000 0001 &
       0000 0001) = 1
       4)0011 1000 4>> 0000 0011 -> 3&1(0000 0011 &
       0000 0001) = 1
       3)0011 1000 3>> 0000 0111 -> 7&1(0000 0111 &
       0000 0001) = 1
       2)0011 1000 2>> 0000 1110 ->14&1(0000 1110 &
       0000 0001) = 0
       1)0011 1000 1>> 0001 1100 ->28&1(0001 1100 &
       0000 0001) = 0
       0)0011 1000 0>> 0011 1000 ->56&1(0011 1000
       0000 0001) = 0
     */
    //255₁₀ == 1111 1111₂
    int main(){
	int n, c, k;
	
	printf("Enter an integer in decimal number system\n");
	scanf("%d", &n);
	
	printf("In binary 32-bit system is:\n");
	
	for (c = 7; c >= 0; c--){
	    k = n >> c;
	    
	    if (k & 1)
		printf("1");
	    else
		printf("0");
	}
	
	printf("\n");
	
	return 0;
    }

//ex.142
    //Multiply table;
    //Table with pointers to errors;
    //Scoring for each table, as well as the overall average rating;
    int main(){
	int x, y, i, ans, error = 0, t_er = 0;
	float amount = 0, mark = 0, z = 0;
	
	for(x = 1; x < 10; x++){
	    printf("\nTable #%i\n", x);
	    for(i = 1; i < 10; i++){
		y = x * i;
		
		printf("%i * %i = ", x, i);
		scanf("%i", &ans);
		if(ans != y){
		    printf("NO! Right is %i\n", y);
		    error++;
		    t_er++;
		}
	    }
	    if(error > 0){
		printf("\nThe number of errors in the table #%i is %i", x, error);
		if(error == 1)
		    mark += 4;
		else if(error == 2 || error == 3)
		    mark += 3;
		else
		    mark += 1;
	    }else
		mark += 5;
	    amount++;
	    
	    error = 0;
	    
	    printf("\n");
	}
	printf("Total error: %i\n", t_er);
	
	z = mark / amount;
	
	printf("Average mark: %.2f\n", z);

	return 0;
    }

//ex.143
    //10 examples
    //rand.num >= 0 && rand.num <= 100
    //if(rand.num - rand.num) -> ans != -n;
    //74 - 73 = ? -> 15 -> NO! Is 1
    //53 + 44 = ? -> 97
    //Amount of error
    //Points:
    //10 / 10       -> Excelent!
    //9 || 8 / 10   -> Good.
    //7 || 6 / 10   -> Normal.
    //6 && less /10 -> Bad.
    //Average rating

    #define HB 100 // high board
    int main(){
	int i, x=0, y=0, z=0, ans, err = 0, mark = 0;
	
	srand(time(NULL));
	for(i = 1; i <= 10; i++){
	    x = rand() % HB; 
	    y = rand() % HB;
	    if(x >= y){ 
		z = x - y;
		printf("%i/10 >>> %i - %i = ",i , x, y, ans);
		scanf("%i", &ans);
		if(ans != z){ 
		    printf("__________________NO! is %i\n", z);
		    err++;
		}   
	    }else{
		z = x + y;
		printf("%i/10 >>> %i + %i = ",i , x, y, ans);
		scanf("%i", &ans);
		if(ans != z){ 
		    printf("__________________NO! is %i\n", z);
		    err++;
		}   
	    }   
	}   
	switch(err){
	    case 0: mark = 5; break;
	    case 1: mark = 4; break;
	    case 2: mark = 3; break;
		    
	    default: mark = 1; break;
	}   
	printf("\nError = %i;\nYour mark is %i;\n", err, mark);
	
	err = 0;
	
	return 0;
    }

//ex.144
    /*
       Буфер - это емкость в оперативной памяти, которая хранит файлы в ожидании
	       копирования либо перемещения.
       Функция fflush сбрасывает в связанный с потоком данных файл данные, 
       находящиеся в буфере. 
       Если аргумент stream имеет значения: 
       - NULL, то сбрасываются буферы всех открытых в данный момент потоков данных; 
       - stdout, то сбрасывается буфер стандартного потока вывода.
     */
    /*
       Функция sleep приостанавливает работу потока, в котором она 
       была вызвана, на указанное в аргументе время или до 
       поступления сигнала по которому вызывается функция обработки
       сигналов или программа завершает свою работу. 
       
       Продолжительность остановки потока управления указывается 
       в секунду и не может быть меньше указанного времени, если остановка 
       не была прервана сигналом. Однако время приостановки может 
       быть больше, указанного времени из-за накладных расходов или 
       если в момент окончания приостановки работал более приоритетный поток.
       
       Приостановка потока с помощью функции sleep () 
       не оказывает влияния на обработку сигналов.
     */
    //#include <stdlib.h> - for system() - system call function
    //#include <unistd.h> - for sleep() function.
    int main(){
    	int hour, minute, second;
	
	hour=minute=second=0;
	//change variant:
	// while(1) //1)24-hours clock;
	for(int i = 0; i <= 10; i++){ //1)Second counter;
	    //clear output screen
	    system("clear");
	    
	    //print time in HH : MM : SS format
	    printf("%02d : %02d : %02d ",hour,minute,second);                                
	    //clear output buffer in gcc
	    fflush(stdout);
	    
	    //increase second
	    second++;
	    
	    //update hour, minute and second
	    if(second==60){
		minute+=1;
		second=0;
	    }
	    if(minute==60){
		hour+=1;
		minute=0;
	    }
	    if(hour==24){
		hour=0;
		minute=0;
		second=0;
	    }
	    sleep(1);   //wait till 1 second
	}
	return 0;
    }
//ex.145
    #include<stdio.h> //for getchar();
    #include<stdlib.h> //for system("");
    #include <unistd.h> //for sleep();
    //output value of function
    //y = -2.4x² + 5x - 3;
    //range x: -2 >>> 2;
    int main(){
	system("clear");
	int i = 1;
	float y, x;
	x = -2.0;
	
	printf("     X        Y\n");
	while(x <= 2){
	    y = -2.4 * x*x + 5 * x - 3;
	    printf("#%i > %.2f    %.2f\n",i++, x, y);
	    sleep(1);
	    x += 0.5;	    
	}
	
	getchar(); 
	system("clear");
	return 0;
    }

//ex.146
    #include<stdio.h> //for getchar();
    #include<stdlib.h> //for system("");
    #include <unistd.h> //for sleep();
    //F⁰ = 5/9 * C⁰ + 32
    int main(){
	system("clear");
	
	float c, f;
	
	printf("Fahrenheit to Celsius converting\n\n");
	printf("  F⁰      C⁰   \n");
	do{    
	    f = c * 1.8 + 32;
	    printf("%.2f || %.2f\n", f, c);
	    c++;
	} 
	while(c <= 10);	
	
	printf("\nPress Enter to close ");
	getchar();
	system("clear");
	
	return 0;
    }

//ex.147
    //>input n - numbers;
    //>n + n₁ + n₂ + ....
    //>average n;
    int main(){
	system("clear");
	float n, sum, counter, avg;
	
	n = sum = counter = avg = 0;
	
	printf("Enter number: \n");
	printf("To stop input any number < 1\n");
	do{ 
	    printf(">> ");	    
	    scanf("%f", &n);
	    if(n > 0){      
		sum += n;     
		counter++;
	    }    
	}    
	while(n > 0);
	
	avg = sum / counter;
	
	printf("Amount of input number: %.1f\n", counter);
	printf("Summa of input numbers: %.1f\n", sum);
	printf("Average: %.2f\n", avg);
	
	getchar();  
	
	return 0;
    }

//ex.148
    //Max. number from positive flow;
    //input n;
    //if n > n_1
    //max = n;
    int main(){
	system("clear");
	int n, max, counter;
	
	printf("To stop input any number < 1\n");    
	printf("Enter the number:\n\n");
	do{
	    printf(">> ");
	    scanf("%i", &n);
	    if(n >= 0){
		if(max < n){
		    max = n;
		}
		counter++;
	    }
	}
	while(n >= 0);      
	printf("Total input numbers is: %i\n", counter);
	printf("The largest number is: %i\n", max);    
    }

//ex.149
    //Min. number from positive flow;
    //input number;
    //apropriate first input number  like min;
    //if min < n
    //min = n;
    int main(){
	system("clear");
	int n, min, counter;
	
	printf("To stop input any number < 1\n");
	printf("Enter the number:\n\n");
	do{
	    printf(">> ");
	    scanf("%i", &n);
	    if(n >= 0){ 
		min = n; //the first num. is min    
		if(min < n){
		    min = n; 
		}
		counter++;
	    }
	}
	while(n >= 0);
	printf("Total input numbers is: %i\n", counter);
	printf("The smallest number is: %i\n", min); 
    }

//ex.150
    //Prime number;
    //Число p является простым, если p>1 и p не делится ни на какое число, 
    //меньшее p и отличное от 1;
    /*Задача: Программа будет вычислять простое число из введенных вариантов.
      Алгоритм:
      >В программе будет два цикла с условиями:
      > 1)Определяет кол-во итераций(диапазон предложенных чисел);
      > 2)Определяет кол-во итераций для проверки делимости заданного числа
      >   на числа не соответствующие условию(простого числа).
      >   ex:
      >num = 13;
      >13/2 ~= 6 //определено кол-во итераций;a
      ?
      Почему Num/2. Птому, что нет смысла делить 
      num на числа в диапазоне от 1 до Num. 
      Так как Num не может быть результатом перемножения чисел 
      большего значения чем Num/2.
      ?
      >1)13 % 1 = 0; //TRUE - p / 1 без остатка, соответствует условию
      >2)13 % 2 = 1; //FALSE
      >3)13 % 3 = 1; //FALSE
      >4)13 % 4 = 1; //FALSE
      >5)13 % 5 = 3; //FALSE
      >6)13 % 6 = 1; //FALSE
      >13(is prime) 
      > Фильтрует простые числа от всех целых.
     */
    int main(){
    	system("clear");
	int n, d, r;
	
	for(n = 2; n <= 30; n++){
	    d = 2;
	    do{
		r = n % d;
		if(r != 0)
		    d++;
	    }
	    while(r != 0);
	    
	    if(d == n)
		printf("%i\n", n);
	}
	getchar();
	system("clear");
	
	return 0;
    }
//ex.151

//ex.152
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

//ex.153

//ex.154
    //Write all value of function y = 2x² - 5x - 8 in range x = -4 to 4;
    int main(){
    	system ("clear");
	
	float x, y;
	
	x = -4;
	
	printf("All values of function y = 2x² - 5x - 8;\n");
    	printf("Range x = -4 to 4;\n");
	printf(" X        Y\n--------------\n");
	
	while(x <= 4){
	    y = 2 * x*x - 5*x - 8;
	    printf("%.2f || %.2f\n", x, y);
	    x += 0.5;
	}
	
	printf("\nEnter to close");
	getchar();
	system("clear");
	
	return 0;
    }

//ex.260

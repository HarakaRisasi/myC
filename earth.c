#include<stdio.h>
#include<math.h>

//360⁰ ~= 24 hours or (15.041686403⁰/1h)
//radius earth = 63781370000mm
//earth perimetr = 40750166855.8112mm
//zero Lt = 90⁰or -90⁰
//zero Lg = 180⁰ or -180⁰

int main(){
    float Lt, Lg; //Latitude, Longitude
    long double r_ea = 63781370000; //radius earth(mm)
    long double dgr = 708681888.88889; //one degrees(1⁰)(mm)
    long double x; 
    long double V_earth; 

    
    printf("Latitude = ");
    scanf("%f", &Lt);

    x = Lt * dgr;
     
    printf("Segment from 90⁰ to Lt %f⁰ = %Lf\n", Lt, x);

    //Speed calculate
    V_earth = ((2*M_PI * x) / 360) * 15.0410686403;
    printf("Speed of earth around it's axis in Lt %f⁰ = %Lf\n", Lt, V_earth);


   return 0;
}

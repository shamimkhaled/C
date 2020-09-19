
#include<stdio.h>
#include<math.h>
double perim(double a, double b, double c);
double area(double a, double b, double c);
double read_input();
double print_value(double val);
int main()
{
    double a, b, c;

    printf("\nPlease Enter three sides of triangle: ");
    scanf("%lf %lf %lf",&a,&b,&c);

   // printf("Perimeter: %.2lf\n", perim(a,b,c));
    //printf("Area: %.2lf", area(a,b,c));

    double result = print_value(a,b,c);


    return 0;
}

double perim(double a, double b, double c)
{
    return  a+b+c;
}
double area(double a, double b, double c)
{
    double w, x, y, s, Area;
    s = (a+b+c)/2;
    w=s-a;
    y=s-b;
    x=s-c;
    Area = sqrt(s*w*y*x);
    return Area;

}
double print_value(double val, double a, double b, double c){
    printf("Perimeter: %.2lf\n", perim(a,b,c));
    printf("Area: %.2lf", area(a,b,c));

}




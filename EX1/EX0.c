#include<stdio.h>
float cal_area(float radius);
float cal_circumference(float radius);

int main()
{
	float radius,a,b;
	printf("Enter the radius of the circle:");
	scanf("%f",&radius);

	a=cal_area(radius);
	b=cal_circumference(radius);

	printf("Area of the circle: %.2f\n",a);
	printf("Circumference of the circle: %.2f\n",b);
	return 0;
}

float cal_area(float radius){
	float area =3.14*radius*radius;	
	return area;
}

float cal_circumference(float radius){
	float circum = 2*3.14*radius;
	return circum;
}



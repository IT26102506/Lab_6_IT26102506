#include<stdio.h>
#include<math.h>
int bin_dec(int bin1, int bin2, int bin3);

int main()
{
	int bin1, bin2, bin3;
	printf("Enter 3 digit binary number:\n");
	scanf("%d %d %d",&bin1, &bin2, &bin3);

	int a = bin_dec(bin1,bin2,bin3);\
	printf("Decimal value of the %d%d%d is:%d\n",bin3,bin2,bin1,a);
}

int bin_dec(int bin1, int bin2, int bin3){
	int dec = bin3*pow(2,2)+bin2*pow(2,1)+bin1*pow(2,0);
	return dec;
}

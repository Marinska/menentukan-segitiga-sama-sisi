#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Masukan sisi pertama : ");
	scanf("%d",&a);
	printf("Masukan sisi kedua : ");
	scanf("%d",&b);
	printf("Masukan sisi ketiga : ");
	scanf("%d",&c);
	if(a==b==c)
	{
		printf("Segitiga tersebut adalah segitiga sama sisi");
	}else{
		printf("Segitiga tersebut bukan segitiga sama sisi");
	}
}

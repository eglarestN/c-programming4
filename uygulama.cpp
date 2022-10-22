#include<stdio.h>

int main()
{
	int num1, num2, num3;
	printf("lutfen karsilastimam icin bana 3 sayi ver:");
	scanf("%d %d %d", &num1, &num2, &num3);

	
	if(num1 > num2 && num1 > num3){
		printf("en buyuk sayi %d", num1);
	}
	else if(num2 > num1 && num2 > num3){
		printf("en buyuk sayi %d", num2);
	}
	else if(num3 > num1 && num3 > num2){
		printf("en buyuk sayi %d", num3);
	}
	
	
	return 0;
}

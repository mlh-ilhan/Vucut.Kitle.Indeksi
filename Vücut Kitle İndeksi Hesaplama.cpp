#include <stdio.h>
#include <iostream>
#include <windows.h>
int main()
{
	char ad[50]; char soyad[50];
	float kilo, boy, boykare, indis;
	printf("Vucut kitle indeksinizi hesaplamak icin asagidaki adimlari izleyin.\n");
	printf("\nLutfen adinizi giriniz : "); scanf("%s",&ad);
	printf("Lutfen soyadinizi giriniz : "); scanf("%s",&soyad);
	printf("Lutfen kilonuzu kg cinsinden ondalikli olarak giriniz (Ornek: 64.8) : "); scanf("%f",&kilo);
	printf("Lutfen boyunuzu metre cinsinden ondalikli olarak giriniz (Ornek: 1.73) : "); scanf("%f",&boy);
	boykare=boy*boy;
	indis=kilo/boykare;
	
	Sleep(1000);
	
	if(indis<18.5)
	{
		printf("\nSayin %s %s vucut indisiniz : %.2f\n",ad,soyad,indis);
		printf("\tOlmasi gerektiginden daha zayifsiniz. Dikkat edin!\n");
	}
	
	else if(indis>=18.5 && indis<=24.9)
	{
		printf("\n\tSayin %s %s vucut indeksiniz : %.2f\n",ad,soyad,indis);
		printf("\tTebrikler. Kilonuz boyunuza gore normal.\n");
	}
	
	else if(indis>24.9 && indis<30)
	{
		printf("\n\tSayin %s %s vucut indeksiniz : %.2f\n",ad,soyad,indis);
		printf("\tOlmasi gerektiginden daha cok kilonuz var. Dikkat edin!\n");
	}
	
	else if(indis>=30)
	{
		printf("\n\tSayin %s %s vucut indeksiniz : %.2f\n",ad,soyad,indis);
		printf("\tObezite grubuna dahilsiniz! Diyetisyen kontrolune girmeniz onerilir.\n");
	}
	
	printf("\n\n\n");
	
	
	
	
	
	system("pause");
	return 0;
}

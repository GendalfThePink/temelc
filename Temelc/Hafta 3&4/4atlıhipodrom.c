#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
/************************
Ganyan bayiine Hoşgeldiniz
*************************/
//Fonksiyonları tanımladığım yer



void uyut(int milisaniye)
{
	Sleep(milisaniye);
}

void Ekranitemizle()
{
 system("@cls||clear");	
}

void basaal()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos = {0, 0};
    SetConsoleCursorPosition(hConsole, pos);
}

int atkosar(int konum)
{
	int a = rand()%100 +1 ;
	int hareket ;

	if(a>50)
	{
		hareket = 3 ; 
	}
	else
	{
		hareket = 1 ; 
	}
	return konum+hareket ; 
}
void yazdir(int konum)
{
	int hipodrom[50]= {0} ; 
	hipodrom[konum]= 1 ; 
	int i ; 
	for (i=0 ; i<50 ; i++)
	{
		if(hipodrom[i]==0)
		{
			printf("_");
		}
		else
		{
			printf("AT");
		}
	}
	printf("\n");
}

void main() {
	time_t t;
	 srand((unsigned) time(&t));
	int para=100;
	while(1)
	{
		 int k1 = 0 ; 
	int k2 = 0 ; 
	int k3 = 0 ; 
	int k4 = 0 ;
	
	printf("bahsinizi yatırınız \n");
	int bahis;
	scanf("%d",&bahis);
	printf("\n Hangi at kazanır ? \n");
	int at ;
	scanf("%d",&at);
	
	Ekranitemizle();
	printf("Yarıs baslıyor.");
	uyut(1000);
	printf(".");
	uyut(1000);
	printf(".");
	uyut(1000);
	printf(".");
	uyut(1000);
	printf(".");
	Ekranitemizle();
	 while(k1<50 && k2<50 && k3<50 && k4<50)
	 {

	
	k1 = atkosar(k1);
	k2 = atkosar(k2);
	k3 = atkosar(k3);
	k4 = atkosar(k4);
	
	printf ("%d %d %d %d \n",k1,k2,k3,k4);
	
	yazdir(k1);
	yazdir(k2);
	yazdir(k3);
	yazdir(k4);
	
	uyut(100);
	if(k1>50)
	{
		if(at==1)
		{ 
		para=para+bahis*2;
		}
			else
		{
			para = para-bahis;
		}
			printf("1. at kazandı !! yeni paranız : %d",para);	
	}
	if(k2>50)
	{
		if(at==2)
		{ 
		para=para+bahis*2;
		}
			else
		{
			para = para-bahis;
		}
		
		printf("2. at kazandı !! yeni paranız : %d",para);
		
	}
		if(k3>50)
	{
		if(at==3)
		{ 
		para=para+bahis*2;
		}
			else
		{
			para = para-bahis;
		}
			printf("3. at kazandı !! yeni paranız : %d",para);
		
	}
		if(k4>50)
	{
		if(at==4)
		{ 
		para=para+bahis*2;
		}
		else
		{
			para = para-bahis;
		}
			printf("4. at kazandı !! yeni paranız : %d",para);
	}
	
	printf("devam etmek icin bir tusa basiniz");
	getch();
	basaal();
	}

	Ekranitemizle();
	
	
	}
	

}



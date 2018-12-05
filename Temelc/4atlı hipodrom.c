#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* Atlar Koşusu için hazırlanıyor.*/


void atkosar (int *basladigikonum)
{
  int hareket;
  time_t t ;
  srand((unsigned) time(&t));
  int sans = rand() % 101;

  if(sans < 30)
  {
    hareket = 3 ;
  }
  if (sans >= 30 && sans < 50)
  {
    hareket = 4;
  }
  if (sans >= 50 && sans < 67)
  {
    hareket = 6;
  }
  if (sans >= 67 && sans < 80)
  {
    hareket = 2;
  }
  if (sans >= 80 && sans < 100)
  {
    hareket = 1;
  }


  *basladigikonum += hareket ;


}
void hipodromcizdir(int hipodrom[] , int *konum , char atismi)
{
  hipodrom[*konum] = 1 ;
  for(size_t i = 0 ; i<50;i++ )
  {
    if(*konum==i)
    {
      printf("%c",atismi);
    }
    else
    {
      printf("_");
    }

  }
   printf("\n");
}
int hipodromkosusu(int *konum , int hipodrom[],char atismi)
{

  atkosar(&*konum) ;
  if(*konum >= 50)
  {
    *konum=49;

  }

int konumx = *konum;
hipodromcizdir(hipodrom , &*konum , atismi);




 if(*konum==49)
 {return 50;}
 hipodrom[*konum] = 0 ;



}

void x49 (int *x)
{
  if(*x>49)
  {
    *x=49;
  }
}
#define gotoxy(x,y) printf("\033[%d;%dH", (x), (y))

int main ()
 {

  int konum1 = 0 ;
  int konum2 = 0 ;
  int konum3 = 0 ;
  int konum4 = 0 ;
  int hipodrom1[50] = {0} ;
  int hipodrom2[50] = {0} ;
  int hipodrom3[50] = {0} ;
  int hipodrom4[50] = {0} ;
    printf("\033[H\033[J");
  while  (1) {
    if (konum1>=49 || konum2>=49 || konum3>=49 || konum4>=49) {
      x49(&konum1);
      x49(&konum2);
      x49(&konum3);
      x49(&konum4);
      gotoxy(0, 0);
      hipodromcizdir(hipodrom1 , &konum1 , 'A');
        printf("\nkonum1 %d \n\n",konum1);
      hipodromcizdir(hipodrom2 , &konum2 , 'B');
        printf("\nkonum2 %d \n\n",konum2);
      hipodromcizdir(hipodrom3 , &konum3 , 'C');
        printf("\nkonum3 %d \n\n",konum3);
      hipodromcizdir(hipodrom4 , &konum4 , 'D');
        printf("\nkonum4 %d \n\n",konum4);

      break;
    }
     hipodromkosusu(&konum1,hipodrom1,'A');
  printf("\nkonum1 %d \n\n",konum1);
 usleep(100000);
 if (konum1>=49 || konum2>=49 || konum3>=49 || konum4>=49) {
   x49(&konum1);
   x49(&konum2);
   x49(&konum3);
   x49(&konum4);
   gotoxy(0, 0);
   hipodromcizdir(hipodrom1 , &konum1 , 'A');
     printf("\nkonum1 %d \n\n",konum1);
   hipodromcizdir(hipodrom2 , &konum2 , 'B');
     printf("\nkonum2 %d \n\n",konum2);
   hipodromcizdir(hipodrom3 , &konum3 , 'C');
     printf("\nkonum3 %d \n\n",konum3);
   hipodromcizdir(hipodrom4 , &konum4 , 'D');
     printf("\nkonum4 %d \n\n",konum4);
printf("\n\n\n\n\n");
   break;
 }
     hipodromkosusu(&konum2,hipodrom2,'B');
printf("\nkonum2 %d \n\n",konum2);
usleep(100000);
if (konum1>=49 || konum2>=49 || konum3>=49 || konum4>=49) {
  x49(&konum1);
  x49(&konum2);
  x49(&konum3);
  x49(&konum4);
  gotoxy(0, 0);
  hipodromcizdir(hipodrom1 , &konum1 , 'A');
    printf("\nkonum1 %d \n\n",konum1);
  hipodromcizdir(hipodrom2 , &konum2 , 'B');
    printf("\nkonum2 %d \n\n",konum2);
  hipodromcizdir(hipodrom3 , &konum3 , 'C');
    printf("\nkonum3 %d \n\n",konum3);
  hipodromcizdir(hipodrom4 , &konum4 , 'D');
    printf("\nkonum4 %d \n\n",konum4);
printf("\n\n\n\n\n");
  break;
}
    hipodromkosusu(&konum3,hipodrom3,'C');
printf("\nkonum3 %d \n\n",konum3);
usleep(100000);
if (konum1>=49 || konum2>=49 || konum3>=49 || konum4>=49) {
  x49(&konum1);
  x49(&konum2);
  x49(&konum3);
  x49(&konum4);
  gotoxy(0, 0);
  hipodromcizdir(hipodrom1 , &konum1 , 'A');
    printf("\nkonum1 %d \n\n",konum1);
  hipodromcizdir(hipodrom2 , &konum2 , 'B');
    printf("\nkonum2 %d \n\n",konum2);
  hipodromcizdir(hipodrom3 , &konum3 , 'C');
    printf("\nkonum3 %d \n\n",konum3);
  hipodromcizdir(hipodrom4 , &konum4 , 'D');
    printf("\nkonum4 %d \n\n",konum4);
printf("\n\n\n\n\n");
  break;
}
    hipodromkosusu(&konum4,hipodrom4,'D');
printf("\nkonum4 %d \n\n",konum4);
usleep(100000);
if (konum1>=49 || konum2>=49 || konum3>=49 || konum4>=49) {
  x49(&konum1);
  x49(&konum2);
  x49(&konum3);
  x49(&konum4);
  gotoxy(0, 0);
  hipodromcizdir(hipodrom1 , &konum1 , 'A');
    printf("\nkonum1 %d \n\n",konum1);
  hipodromcizdir(hipodrom2 , &konum2 , 'B');
    printf("\nkonum2 %d \n\n",konum2);
  hipodromcizdir(hipodrom3 , &konum3 , 'C');
    printf("\nkonum3 %d \n\n",konum3);
  hipodromcizdir(hipodrom4 , &konum4 , 'D');
    printf("\nkonum4 %d \n\n",konum4);
printf("\n\n\n\n\n");
  break;
}


printf("\n\n\n\n\n");



      gotoxy(0, 0);

  }


   return(0);
}

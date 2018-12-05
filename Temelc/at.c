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


int main () {
  int konum = 0 ;
  int hipodrom[50] = {0} ;
  while  (konum<=50) {
    atkosar(&konum) ;
    printf("\nkonum %d \n\n",konum);
    if(konum >=50)
    {
      konum=49 ;
   }
   hipodrom[konum] = 1 ;

   for(size_t i = 0 ; i<50;i++ )
   {
     if(konum==i)
     {
       printf("A");
     }
     else
     {
       printf("_");
     }

   }
   if(konum==49)
   {
     printf("\n");
     break;
   }
   printf("\n");
   hipodrom[konum] = 0 ;


      usleep(100000);

  }


   return(0);
}

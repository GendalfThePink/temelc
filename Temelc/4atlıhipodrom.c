#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <stdbool.h>
/* Atlar Koşusu için hazırlanıyor.*/


int atkosar (int basladigikonum)
{
  int hareket;

  int sans = rand() % 101;
  hareket=1 ;
  if(sans < 30)
  {
    hareket = 1 ;
  }
  if (sans >= 30 && sans < 50)
  {
    hareket = 2;
  }
  if (sans >= 50 && sans < 67)
  {
    hareket = 3;
  }
  if (sans >= 67 && sans < 80)
  {
    hareket = 4;
  }
  if (sans >= 80 && sans <= 100)
  {
    hareket = 5;
  }


  int yenikonum = basladigikonum + hareket ;

  return yenikonum ;


}


void hipodromcizdir(int konum)
{
      if(konum >= 49)
      {
        konum = 49 ;
      }
      int hipodrom[50]={0};
      hipodrom[konum] = 1 ;
      for(int i = 0 ; i<50;i++ )
      {
            if(konum==i)
            {
              printf("AT");
            }
            else
            {
              printf("-");
            }

      }
      printf("\n\n\n");
      hipodrom[konum] = 0 ;
}


int hipodromkosusu(int konum)
{


      konum = atkosar(konum);

      hipodromcizdir(konum);
      return konum ;
}


int main ()
 {
    srand(time(NULL));
    int k1 = 0 ;
    int k2 = 0 ;
    int k3 = 0 ;
    int k4 = 0 ;

for (int i = 0; i < 10; i++) {

        int konum1 = 0 ;
        int konum2 = 0 ;
        int konum3 = 0 ;
        int konum4 = 0 ;

          printf("\033[H\033[J");
              while  (1)
                {
                  bool win = false ;
                  if (konum1>=49 || konum2 >=49 || konum3>=49 || konum4>=49)
                  {
                    if(konum1>=49)
                    {
                      k1 = k1+1 ;
                    }
                    if(konum2>=49)
                    {
                      k2= k2+1 ;
                    }
                    if(konum3>=49)
                    {
                      k3 = k3+1 ;
                    }
                    if(konum4>=49)
                    {
                      k4 = k4+1 ;
                    }
                      win = true ;
                  }
                    konum1= hipodromkosusu(konum1);

                    konum2= hipodromkosusu(konum2);

                    konum3= hipodromkosusu(konum3);

                    konum4= hipodromkosusu(konum4);

                    usleep(100000);
                    if(win)
                    {
                      usleep(100000);
                      break ;
                    }
                      printf("\033[%d;%dH", (0), (0));


              }

              }

    printf("\n\n\n\n\n\n");
  printf("%d %d %d %d \n",k1,k2,k3,k4);


   return(0);
}

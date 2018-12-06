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
    hareket = 1 ;
  }
  if (sans >= 30 && sans < 50)
  {
    hareket = 10;
  }
  if (sans >= 50 && sans < 67)
  {
    hareket = 8;
  }
  if (sans >= 67 && sans < 80)
  {
    hareket = 20;
  }
  if (sans >= 80 && sans < 100)
  {
    hareket = 5;
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
      {
        return 50;
      }
      hipodrom[*konum] = 0 ;

}

void x49 (int *x)
{
  if(*x>=49)
  {
    *x=49;
  }
  else
  {
    *x=0;
  }
}


int main ()
 {
  char at1 = 'A';
  char at2 ='B';
  char at3 = 'C';
  char at4 = 'D';

int kazananlar[3]={0};
    for (size_t i = 0; i < 10 ; i++) {
      int konum1 = 0 ;
      int konum2 = 0 ;
      int konum3 = 0 ;
      int konum4 = 0 ;
      int hipodrom[50] = {0} ;
        printf("\033[H\033[J");

  while  (1)
    {


          hipodromkosusu(&konum1,hipodrom,at1);
          printf("\nkonum1 %d \n\n",konum1);
          usleep(100000);

          if (konum1>=49)
          {
                              kazananlar[0] += 1;
                             x49(&konum1);
                             x49(&konum2);
                             x49(&konum3);
                             x49(&konum4);
                               printf("\033[%d;%dH", (0), (0));
                             hipodromcizdir(hipodrom , &konum1 , at1);
                               printf("\nkonum1 %d \n\n",konum1);
                             hipodromcizdir(hipodrom , &konum2 , at2);
                               printf("\nkonum2 %d \n\n",konum2);
                             hipodromcizdir(hipodrom , &konum3 , at3);
                               printf("\nkonum3 %d \n\n",konum3);
                             hipodromcizdir(hipodrom , &konum4 , at4);
                               printf("\nkonum4 %d \n\n",konum4);
                          printf("\n\n\n\n\n A KAZANDI \n\n");
                          usleep(400000);
                             break;
           }

          hipodromkosusu(&konum2,hipodrom,at2);
          printf("\nkonum2 %d \n\n",konum2);
          usleep(100000);

          if (konum2>=49)
          {


                              x49(&konum1);
                              x49(&konum2);
                              x49(&konum3);
                              x49(&konum4);
                                printf("\033[%d;%dH", (0), (0));
                              hipodromcizdir(hipodrom , &konum1 , at1);
                                printf("\nkonum1 %d \n\n",konum1);
                              hipodromcizdir(hipodrom , &konum2 , at2);
                                printf("\nkonum2 %d \n\n",konum2);
                              hipodromcizdir(hipodrom , &konum3 , at3);
                                  printf("\nkonum3 %d \n\n",konum3);
                              hipodromcizdir(hipodrom , &konum4 , at4);
                                  printf("\nkonum4 %d \n\n",konum4);
                              printf("\n\n\n\n\n B KAZANDI \n\n");
                              usleep(400000);
                              kazananlar[1] += 1;
                                break;
          }

          hipodromkosusu(&konum3,hipodrom ,at3);
          printf("\nkonum3 %d \n\n",konum3);
          usleep(100000);

          if (konum3>=49)
          {


                                x49(&konum1);
                                x49(&konum2);
                                x49(&konum3);
                                x49(&konum4);
                                  printf("\033[%d;%dH", (0), (0));
                                hipodromcizdir(hipodrom , &konum1 , at1);
                                  printf("\nkonum1 %d \n\n",konum1);
                                hipodromcizdir(hipodrom , &konum2 , at2);
                                  printf("\nkonum2 %d \n\n",konum2);
                                hipodromcizdir(hipodrom , &konum3 , at3);
                                  printf("\nkonum3 %d \n\n",konum3);
                                hipodromcizdir(hipodrom , &konum4 , at4);
                                  printf("\nkonum4 %d \n\n",konum4);
                              printf("\n\n\n\n\n C KAZANDI \n\n");
                              usleep(400000);
                              kazananlar[2] += 1;
                                break;
          }

          hipodromkosusu(&konum4,hipodrom,at4);
          printf("\nkonum4 %d \n\n",konum4);
          usleep(100000);

          if (konum4>=49)
          {

                                  x49(&konum1);
                                  x49(&konum2);
                                  x49(&konum3);
                                  x49(&konum4);
                                    printf("\033[%d;%dH", (0), (0));
                                  hipodromcizdir(hipodrom , &konum1 , at1);
                                    printf("\nkonum1 %d \n\n",konum1);
                                  hipodromcizdir(hipodrom , &konum2 , at2);
                                    printf("\nkonum2 %d \n\n",konum2);
                                  hipodromcizdir(hipodrom , &konum3 , at3);
                                    printf("\nkonum3 %d \n\n",konum3);
                                  hipodromcizdir(hipodrom , &konum4 , at4);
                                    printf("\nkonum4 %d \n\n",konum4);
                                printf("\n\n\n\n\n D KAZANDI\n\n");
                                usleep(400000);
                                kazananlar[3] += 1;
                                  break;
          }

          printf("\n\n\n\n\n");
          printf("\033[%d;%dH", (0), (0));

    }
  }
  printf("%d %d %d %d",kazananlar[0], kazananlar[1],kazananlar[2],kazananlar[3]);


   return(0);
}

#include <stdio.h>
#include <unistd.h>

void main ()
{
  char yazi[7]={'m','e','r','h','a','b','a'};

  char yaziy[7]={'m','e','r','h','a','b','a'};
        printf("\033[H\033[J");
while(1){
       for(int j=0; j<7;j++ )
        {

          if(j+1==6)
          {

            yazi[0]=yaziy[6];
            yazi[j+1]=yaziy[j];

            break;
          }
          yazi[j+1]=yaziy[j];

        }
        for(int i = 0 ; i<7 ; i++)
        {
          printf("%c",yazi[i]);
        }
        printf("\n");
        for(int i=0;i<7;i++)
        {
          yaziy[i]=yazi[i];
        }
        for(int i = 0 ; i<7 ; i++)
        {
          printf("%c",yazi[i]);
        }
        usleep(1000000);
       printf("\033[%d;%dH", (0), (0));
}

}

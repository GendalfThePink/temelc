#include <stdio.h>


int main()
{
  int bilgisayar = 0 ;
  int siz = 0 ;
  char pc;
    char player ;
      for(int i =0 ; i<3 ; i++)
      {

          scanf(" %c",&player);
          //  scanf("%c",&player);BURDAKİ SORUN NE ?
          if(player == 'm' )
          {
            pc = 't';
          }
          if(player == 't' )
          {
            pc='k';
          }
          if(player == 'k' )
          {
            pc = 'm';
          }
          printf("Bilgisayar : %c  //VS\\\\ Siz : %c \n",pc ,player);
          bilgisayar +=1 ;
          printf("Bilgisayar ==> %d \n Siz ==> %d \n",bilgisayar,siz);


      }
}

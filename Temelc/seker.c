#include <stdio.h>

void main()
{
  int sekersayisi = 13 ;
  while(sekersayisi>0)
  {
      if(sekersayisi == 1)
      {
        printf("Son seker size kaldı !\n Kaybettiniz \n" );
        break ;
       }
      printf(" \n lütfen 1 2 veya 3 şeker alınız. \n");
      int siz = 0 ;
      scanf("%d",&siz);
    //  if(kullanıcı != 1 || kullanıcı !=2 || kullanıcı != 3)
    //  {
    //    printf("geçersiz seker sayısı girdiniz.\n", );
    //  }
      sekersayisi -= 4 ;
      printf("Bilgisayar %d Sayıda şeker çekti.\n",(4-siz) );
      printf("kalan seker sayisi = %d \n",sekersayisi );
  }
}

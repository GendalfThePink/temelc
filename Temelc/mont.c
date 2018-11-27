#include <stdio.h>

void main()
{
  int sicakmi =  0;
  int tercih = 0 ;
  int mont = 0 ;
  int ates = 0 ;
  int ev = 0 ;
  int yalitim = 0 ;
  while(1==1){
    printf("Üşüyorsun ! Hava çok soğuk ! Ne yapacaksın ? \n 1-) mont giy \n 2-)ates yak \n 3-)tahta eve sığın \n 4-) yalıtım yap(eve sahipsen) \n");
    scanf("%d",&tercih);
    if(tercih == 1)
    {
            mont += 1 ;
            if(mont > 1)
            {
              printf("İkinci montu üzerine giyerken yırttın !\n") ;
              mont -=1;
            }
            printf("montunu giydin!");
    }
    if(tercih == 2 )
    {
            if(ev == 1)
          {
            printf("Evini yaktın . Artık hayat senin için çok sıcak olacak .") ;
            break ;
          }
            ates += 1 ;
            if(ates > 1)
            {
              printf("Zaten ates yakmıstin\n") ;
              ev -=1;
            }
            printf("ates yaktın !\n") ;
    }
    if(tercih == 3)
    {
      if(ates == 1)
      {
        printf("Yaktığın ateş dışarda kaldı.\n" );
        ates -=1 ;
      }
            ev += 1 ;
            if(ev > 1)
            {
              printf("Zaten evdesin\n") ;
              ev -=1;
            }
            printf("eve sığındın !\n") ;
    }
    if(tercih == 4)
      {
              yalitim +=1;
                if(ev>0)
                {

                  if(yalitim > 1)
                  {
                    printf("Zaten evine yalıtım yaptın \n") ;
                    yalitim -=1;
                  }
                    printf("yalıtımı yaptın !\n") ;
                }
                else
                {
                  printf("Evin yok !");
                  yalitim -=1;
                }
      }
      if ((ev+yalitim+ates+mont)== 3)
      {
              sicakmi = 1 ;
              break;
      }
      else
      {
      printf("Yetmedi.\n \n");
      }



    }
    if(sicakmi ==1)
    {
      printf("ısınmayı başardın !\n" );
    }
    else
    {
      printf("Isınamadın .\n" );
    }
}

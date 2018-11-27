#include <stdio.h>

void main()
{
    int pars = 1 ;
    int tuglasayisi = 0 ;
    printf("Pars ile mars tuğla oyunu . Kaç tuğla olduğunu giriniz.\n" );
    scanf("%d",&tuglasayisi);
    while(tuglasayisi>0)
    {
      tuglasayisi -= pars;
      if(tuglasayisi <= 0 )
      {
        pars += tuglasayisi ;
        printf("%d tuğla daha koyarak pars kazandi\n"  , pars);
        break;
      }
      printf("pars %d Tuğla koydu \n", pars );
      tuglasayisi -=(pars*2);
       if(tuglasayisi <= 0 )
        {
          int mars = pars*2 ;
          mars += tuglasayisi ;
          printf("%d tuğla daha koyarak mars kazandi\n", mars );
          break;
        }
        printf("mars %d tugla koydu \n",(pars*2) );
      pars += 1 ;
    }
}

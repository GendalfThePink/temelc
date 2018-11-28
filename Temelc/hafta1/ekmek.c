#include <stdio.h>

void main()
{
  // Bu kisimda kontrol edeceğimiz değerleri tanimladik.
   int para ;  // paramizi
   int ekmek ; // evdeki ekmek sayisini
   int bakkaldaekmekvarmi ; //Burdakiler ise birer BOOL sorusu , yani bize 0(false) yada 1 (true) olarak cevap verecek.
   int bakkalvarmi ; // burdaki rakamlarin 1 veya 0 olmasina bakarak , cevabin evet veya hayir olduğunu anlayacagiz
   int isvarmi ;
   printf("evdeki ekmek sayisi nedir ? : ") ;
   scanf("%d",&ekmek);//ekmek değerine 'scan' edecegimiz rakami yazacagiz.
   printf("Elinizdeki para miktari nedir ? : ") ;
   scanf("%d", &para); // para yerine 'scan' edecegimiz rakami yazacagiz.
   if (ekmek == 0) //eger ekmek sayisi 0 a esitse .
  {
        printf("evinde ekmek yok !\n  Parana bakiyorsun ..");
        if(para >= 1) //ekmek yok ise , paran varmi ?yani para degerin 1 den büyük veya esitmi ( >= ) ?
        {
              printf("paran var ! \n Bakkal dükkandami ? (1 evet 0 hayir) : ");
              scanf("%d",&bakkalvarmi);//kullaniciden bakkalin olup olmadigi bilgisini al.
              if(bakkalvarmi==1)//bakkal dükkanda ise
              {
                  printf("Bakkal burda! ! \n Ama ekmegi varmi  ? (1 evet 0 hayir) : ");
                  scanf("%d",&bakkaldaekmekvarmi);
                  if(bakkaldaekmekvarmi == 1)//bakkalda ekmek var ise
                  {
                      printf("varmis. Ekmegini aldin.\n");
                      para = para -1 ; //bakkala parayı ver
                      ekmek = ekmek + 1 ; //ekmegini al.
                  }
                  else //bakkalda ekmek yok ise
                  {
                      printf("ekmek olmayan bakkala bakkal demem.Ardına bakmadan Eve döndün.\n");
                  }
              }
              else // bakkal dükkanda degil ise
              {
                   printf("baska bakkal yok ! eve döndün.\n" );
              }
        }
        else //paran varmi if'inin çifti , paran yok ise
        {
              printf("paran yok ! \n is varmi ? (1 evet 0 hayir)");
              scanf("%d",&isvarmi); //kullanici is olup olmadigini girecek.
              if (isvarmi==1)//is olup olmadigini kontrol edecegiz. 1(true) yani varmis
              {
                      printf("isinde calisip evine ekmek götürdün.\n");
              }
              else //is yok ise
              {
                      printf("kizilay sana ekmek verdi.\n");
                      ekmek = ekmek + 1 ;
              }
        }
  }
  else // eger ekmek sayisi 0 dan farklı ise ( ekmek var ise.)
  {
    printf("tmm.s\n") ; // ekmek varsa neden programı calistirdin.
  }

}

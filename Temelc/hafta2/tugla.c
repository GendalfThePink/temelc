#include <stdio.h>

void main()
{
  /*  Burada Pars ile mars tugla koyma oyununu yaptık .

  N sayıda tuğla için Pars tur sayısı kadar , mars is tur sayısının 2 katı kadar tugla koyacak
  yada , pars her tugla koyduğunda , mars bunun iki katını koyacak , pars her mars tugla koyduğunda sayısını 1 arttırıp bidaha tugla koyacak .

  son tuglayı duvara koyan oyunu kazanır.



  */
    int pars = 1 ; // parsın ilk başta çekeceği tugla sayısına 1 dedik .
    int tuglasayisi;  // kullanıcıdan alacağımız N rakamı için bir değişken tanımladık
    printf("Pars ile mars tuğla oyunu . Kaç tuğla olduğunu giriniz.\n" ); // yazdırdık
    scanf("%d",&tuglasayisi); // kullanıcıdan N değerini aldık .
    while(tuglasayisi>0) // tugla sayısı 0'ın altına düşünceye kadar dönecek olan while döngüsü.
    {
        tuglasayisi -= pars; // pard toplam tugladan alıp duvara koydu ( ilk başta 1 )
        if(tuglasayisi <= 0 ) // eğer pars tuğla koyduktan sonra toplam tuğla sayısı sıfırın altında ise pars kazanmıştır.
          {
            pars += tuglasayisi ;// pars = pars + tugla sayısı .
            // toplam tuğla sayımız bize 0 yada '-' bir değer döndürecek .
            // bu '-' yada 0 olan değeri , parsın son aldığı tugla sayısıyla toplarsak
            // elimizde parsın son turda kaç tugla koyduğu kalır .
            printf("%d tuğla daha koyarak pars kazandi\n"  , pars); // buradada pars'ın son turda koyduğu tuğla sayısını buluruz.
            break;// döngüyü kırdık.
          }
        printf("pars %d Tuğla koydu \n", pars ); // if durumu gerçekleşmesse parsın kaç tuğla koyduğunu yazdırdık
        tuglasayisi -=(pars*2); // mars = pars*2 olarak pars toplam tuğladan çekip duvara koydu .
        if(tuglasayisi <= 0 )
          {
            int mars = pars*2 ; // aynı parsata yaptığımızı tekrarlayarak marsın kazanması durumunda kaç tuğla koyduğunu bulduk.
            mars += tuglasayisi ;
            printf("%d tuğla daha koyarak mars kazandi\n", mars );
            break;
          }
        printf("mars %d tugla koydu \n",(pars*2) ); // eğer marsta kazanamamışsa , marsın bu tur aldığı ve duvara koyduğu tugla sayısını yazdık .
        pars += 1 ; // tur bitti , pars artık bi önceki turdan bir fazla tuğla alacak ve döngü baştan başlayacak.
    }
}

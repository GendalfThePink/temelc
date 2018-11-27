#include <stdio.h>

int deneme(int *x){
*x+=2 ;
}
void main()
{
        char a = 'a';
        char cumle[] = "bu bir karakterler dizisidir";
        int s =  1;
        deneme(&s);
        printf("Merhaba %i" , s);
        printf("\n");
        printf("\b");

}

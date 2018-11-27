#include <stdio.h>

int ikiarttir(int *x){
*x+=2 ;
}
void main()
{
        int s =  1;
        ikiarttir(&s);
        printf("%d" , s);
        printf("\n");


}

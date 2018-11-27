#include <stdio.h>
#include <limits.h>
#include <float.h>

void main()
{
  printf("char store values from %d to %d", CHAR_MIN, CHAR_MAX);

   printf("\n unsigned char store values from 0 to %u", UCHAR_MAX);

   printf("\n short store values from %d to %d", SHRT_MIN, SHRT_MAX);

   printf("\n unsigned short store values from 0 to %u", USHRT_MAX);

   printf("\n int store values from %d to %d", INT_MIN, INT_MAX);

   printf("\n unsigned int store values from 0 to %u", UINT_MAX);

   printf("\n long store values from %ld to %ld", LONG_MIN, LONG_MAX);

   printf("\n unsigned long store values from 0 to %lu", ULONG_MAX);

   printf("\n\n smallest non-zero value of type float is %.3e", FLT_MIN);

   printf("\nThe size of the largest value of type float is %.3e", FLT_MAX);

   printf("\nThe size of the smallest non-zero value of type double is %.3e",
                                                         DBL_MIN);
   printf("\nThe size of the largest value of type double is %.3e", DBL_MAX);

   printf("\nThe size of the smallest non-zero value of type long double is %.3e",
                                                        DBL_MIN);
   printf("\nThe size of the largest value of type long double is %.3e\n",
                                                         DBL_MAX);
}

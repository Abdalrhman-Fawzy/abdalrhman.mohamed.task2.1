#include <stdio.h>
#include <stdlib.h>

int main()
{  float num;
   printf("enter a number : ");
   scanf("%f" , &num);
   if(num==(int)num)
   {
       printf("\ninteger");
   }
   else if(num==(float)num)
   {
       printf("\nfloat");
   }



    return 0;
}




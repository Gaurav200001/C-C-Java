#include<stdio.h>

int main()
{
    int i;
    while(sizeof(NULL)) //return 2 value TRUE or FALSE
         {
                 printf("Inside Loop");
                 continue;
                 break; toward break statement the condition is unreachable
         }
   return 0;
}

/*The sizeof(NULL) will returns 2 which is 
non-zero value so the condition is always 
true and control get inside the block. Inside
 that block we have used continue statement
 as well as break statement but here break
 statement is unreachable code. So loop is
 infinite.*/
#include<stdio.h>

int main()
{
int i = 25;// local variable created in function
int j = 21;// give default value
int k = 0;

printf("Enter First Number");
scanf("%d",&i);

printf("Enter Secoond Number");
scanf("%d",&j);

k = i + j;

printf("Addition of two number %d",k);
 

 
return 0;
}

#include<Header9.h>

int Addition(int,int); //function prototype //

int main() // HOme // entry point function
{
// it is good to set the default value to the variable

int iNo1 = 0;  //4 byte for int store zero
int iNo2 = 0; // -||-
int iNo3 = 0;


printf("Enter the 1st number:\n");
scanf("%d",&iNo1); // scan formatted print,yenara, double quootes is a part of syntax
//%d = decimal = without decimal point(non floating point)
//%f = float = with decimal
//%c = character 
//" " = string = the written in double quote is called string
//\n =

printf("Enter the second no :");
scanf("%d",&iNo2);

iNo3 = Addition(iNo1, iNo2);
printf("Addition is: %d",iNo3);

return 0; //convey to OS hows the execution,zero for success
}

///////////////////////////////////////////////////////////////////////
//
//Input : 21 23
//Output : 43
//
///////////////////////////////////////////////////////////////////////

//gcc Program7.c Library7.c -o Myexe
//Myexe

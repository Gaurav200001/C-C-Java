#include<stdio.h>

void Display(int iNo) // no written anything
 {
            int iCnt = 0;

            if(iNo < 0) // Updater
                {
                      iNo = -iNo;
                }
    //                   1              2             3
             for(iCnt = 1; iCnt <= iNo; iCnt++)
                 {
                        printf("%d\n",iCnt);  // 4
                 }
 }

int main()
{
      int iValue = 0;
   
     printf("Enter the number:");
     scanf("%d",&iValue);

     Display(iValue); // Display(4); // Call By value

return 0;
}

// in array we use call by address(Datastructure)
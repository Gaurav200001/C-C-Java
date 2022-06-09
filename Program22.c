#include<stdio.h>

int Summation(int iNo)
{
 
      int iSum = 0;
      int iCnt = 0;

          if(iNo < 0) //updater
            {
                   iNo = -iNo;
            }
        //          1             2           3
         for(iCnt = 1; iCnt <= iNo; iCnt++)
            {    
              iSum = iSum + iCnt; //
            } 
       return iSum;
}

int main()
{
   int iValue1= 0;
   int iRet =0;
      printf("Enter The Nummber");
      scanf("%d",&iValue1);

       iRet =  Summation(iValue1);
       printf("the sum is %d",iRet);
 
   return 0;
}

/* 
      ALGORITHM(Maggi)

      START
                Accept number from usr as No
                Check whether that number is negative or not
                If its is negative then convert it to +ve
                
                Create one variable as Sum and set it to 0
                Create one variable as Cnt and set it to 1
                 
                Iterate till Cnt less than or equal to No
                   Add the value of Cnt into the variable Sum
                   Increment the value of Cnt by 1

                Display the value of Sum

*/

// Masale Bhaat are different











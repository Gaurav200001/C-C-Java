// Shree Ganeshay Namah!!!!!!!!!!!! for() till 108
// while() Till Tupp is not equal to Empty
// no count in While till End

// same program Program20 by while loop

 #include<stdio.h>

void Display(int iNo) // no written anything
 {
            int iCnt = 0;

            if(iNo < 0) // Updater
                {
                      iNo = -iNo;
                }
      /*
    //                   1              2             3
             for(iCnt = 1; iCnt <= iNo; iCnt++)
                 {
                        printf("%d\n",iCnt);  // 4
                 }
      */

      iCnt = 1;     // 1
 
              //2 from for loop
       while(iCnt <= iNo)
           {
                   printf("%d\n",iCnt); 
                   iCnt++; //3 from for loop
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

// in array w

// in C we cannot declare variable in for() loop
// but in c++ we declare

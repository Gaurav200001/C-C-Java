//check whether the no is perfect or not // check whether(Boolean)//
// 2 Functions
#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
 {
 	int iCnt = 0;// for iterate a looop
 	int iSum = 0;
 	
               if(iNo < 0)
                {
                      iNo = -iNo;
                }

 	for(iCnt = 1; iCnt <= (iNo/2); iCnt++) 
 	{
                      if(iNo % iCnt == 0)// if counter is factor then we will add that factor in sum
		{
		    iSum = iSum + iCnt;
		} 
                      if(iSum > iNo)
                          {
                            break; /inside a loop,or in switch case
                          }//dont write return inside the loop 
	
	} 
 
 if(iSum == iNo)
 {
 	return true;
 }
 
 else
 {
 	return false;
 }
}


/*
bool CheckPerfect(int iNo) //resell
{ 
    int iAns = 0;
    iAns = DisplayAddOfFactor(iNo);
    if(iAns == iNo)
       {
            return true;
       }
     else
       {
              return false;
       }
}
*/
int main()
{
	int iValue = 0;
              bool bRet = false;
	
	printf("Enter Number:");
	scanf("%d",&iValue);
	
	bRet = CheckPerfect(iValue);
                   if(bRet == true)
                         {
                            printf("%d is a perfect no",iValue);
                         } 
                   else
                          {
                               printf("%d is not a perfect no",iValue);
                          }	
	return 0;
}

//Time Complexity: O(N/2)
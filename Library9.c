#include<Header9.h>
///////////////////////////////////////////////////////////////////////
//Function Name : Addition
//Description :      Used to perform addition of two numbers
//Input :               Integer,Integer 
//Output :            Integer
// Date :              April 12th 2022
//Author :            Gaurav Panjabrao Murumkar
///////////////////////////////////////////////////////////////////////

//proper variable name
//deployment name

int Addition(int ivalue1,int ivalue2) // shop //input argument
{
int iAns = 0;

if(ivalue1 < 0) // updater
  {
       ivalue1 = -ivalue1;
  }

if(ivalue2 < 0) // updater
  {
       ivalue2 = -ivalue2;
  }

iAns = ivalue1 + ivalue2;

}
//testcase = 12,12
//testcase = 23,0
//test case =0,0
//test case =10.-11
// testcase = -10,-11
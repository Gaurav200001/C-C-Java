//Problems on N numbers

#include<stdio.h>

int main()
{
    auto int Arr[5]; // arr is one dimensional array consist of 5 elements
	// and each element is of type (int)
	// 100 imajinary address
	
	printf("Enter Elements:\n");
	
	scanf("%d",&Arr[0]);//Arr[0] data bhar tya address la jaun
	scanf("%d",&Arr[1]);
	scanf("%d",&Arr[2]);
	scanf("%d",&Arr[3]);
	scanf("%d",&Arr[4]);
	
	printf("Elements of array are:\n");
	
	printf("%d\n",Arr[0]);
	printf("%d\n",Arr[1]);
	printf("%d\n",Arr[2]);
	printf("%d\n",Arr[3]);
	printf("%d\n",Arr[4]);
	return 0;
}
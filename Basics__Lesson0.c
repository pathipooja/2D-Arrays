#include <stdio.h>
void getDiagonalSum(int arr[][3],int r ,int c);
void learned();


int main()

{

    int i=0,a[10]={0};

    printf("\n%d\n",*(a+i));//a[i] or i[a] or *(a+i) or *(i+a) indicate the same address

    printf("%d\n",*(a+i));

    printf("%d\n",i[a]);

    for(i=0;i<10;i++)

    {

	printf("%d\t",(a+i));	// print address of each and observe how the memory is getting allocated

    }

   int j,arr[3][3]={1,2,3,4,12,13,14,15,16},r=3,c=3;
	printf(" \n Starting address %u\n",arr[0][0]);
	printf(" \n Next address %u\n",arr[0][1]);
	//What will be the address of arr[2][1] && arr[1][0](Try before executing the below code

   for(i=0;i<r;i++)
   {
	for(j=0;j<c;j++)
	{
	// Print value n address of each element in array and understand how memory is being allocated
	printf("%d\t%d\n",arr[i][j],&arr[i][j]);
	}
   }

    getDiagonalSum(arr,r,c);
    return 0;

}

void getDiagonalSum(int arr[][3],int r ,int c)
{
	/*
	 return sum of diagonal

	  	1 2 3
		4 5 6
		7 8 9

		return 25( 1+5+9+3+7)
	*/
	int sum=0,i,j,l=0,ri=0;
	for(i=0;i<r;i++)
   {
	for(j=0;j<c;j++)
	{
	    if(i==j)
	    l=l+arr[i][j];
	}
   }
   i=0;
   j=c-1;
   while(i<r&&j<c)
   {
ri=ri+arr[i][j];
i++;
j--;
   }
   sum=l+ri;
   if(r%2!=0)
    printf("sum is %d",sum-arr[r/2][c/2]);
    //the middle element,being repeated twice in addition,is subtracted from the diagonal sum.
    else
        printf("sum is %d",sum);
}


void learned()
{


		//Fill what you have learnt in this lesson( Below comments)

	/*
    Sample1: Got to know how contiguous memory allocation is done
   1. Got to notice that the sum of diagonal elements is the sum of values at alternate memory locations.
    example:if 1 3 5 7 9 are diagonal elements,then their addresses differ by 8 bytes i.e., they are present in alternate manner.
    */
}

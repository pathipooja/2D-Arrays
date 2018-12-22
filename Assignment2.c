/*

    Given, a square matrix  return absolute difference of sum of diagonals(left and right)

        Ex:
                1 2 3
                4 5 6
                7 8 9
            Here,
                (L)left diagonal sum is (1+5+9)=12
                (R)right diagonal sum is (3+5+7)=15
                Absolute difference(|L-R|)=|12-15|=3


*/

#include<stdio.h>
#include<stdlib.h>
#define ROW 4
#define COLUMN 4

int diffOfSum(int matrix[ROW][COLUMN])
{
	// Write your actual solution here..  Given, a square matrix  return absolute difference of sum of diagonals(left and right)
int dif=0,i,j,l=0;
int r=0;
	for(i=0;i<ROW;i++)
   {
	for(j=0;j<COLUMN;j++)
	{
	    if(i==j)
	    l=l+matrix[i][j];
	}
   }
   i=0;
   j=COLUMN-1;
   while(i<ROW&&j<COLUMN)
   {
r=r+matrix[i][j];
i++;
j--;
   }
   printf("let sum is %d\n",l);
   printf("right sum is %d",r);
   dif=l-r;
   if(dif<0)
    dif=dif*(-1);
return (dif);
}
int main()
{
    /*
        Do write code that works for all inputs(Different size 3,4,5....)
    */

	int matrix[ROW][COLUMN];


	int i,j;
	printf("enter matrix %d*%d",ROW,COLUMN);
	for (i=0;i<ROW;i++){
		for(j=0;j<COLUMN;j++){
			scanf("%d",&matrix[i][j]);
	}

	}

	int result = diffOfSum(matrix);
	printf("\nResult = %d",result);
    	return 0;
}

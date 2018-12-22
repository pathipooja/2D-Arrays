/*

	Given a mtrix, return Sum of all maximum frequency elements in Matrix.

	Input : mat[3][3] = {{1, 1, 1},
                	     {2, 3, 3},
                             {4, 5, 3}}

	Output : 12

	The max occurring elements are 3 and 1

	Therefore, sum = 1 + 1 + 1 + 3 + 3 + 3 = 12

	Note  : The elements in the matrix lie between 0 to 9 only i.e., 0<=mat[i][j]>=9.

*/


#include <stdio.h>
#include<malloc.h>
#define ROW 3
#define COL 3

int sumOfMaxFreq(int matrix[ROW][COL])
{
    // Write your actual solution here..  Given, a square matrix  return Sum of all maximum frequency elements in Matrix.
int arr[10]={0};
int i,j,res=0;
for(i=0;i<ROW;i++)
{
    for(j=0;j<COL;j++)
    {
        arr[matrix[i][j]]++;
    }
}
for(i=0;i<10;i++)
{
    printf("%d\t%d\n",i,arr[i]);
}
i=0;
int sum=arr[i];
while(i<10)
{
    if(sum<arr[i+1])
  sum=arr[i+1];
  i++;
}
i=0;
while(i<10)
{
    if(sum==arr[i])
    {
        res=res+(i*arr[i]);
    }
    i++;
}
return res;
}
int main()
{

    //Make sure your code accepts matrix of different dimensions

    int mat[ROW][COL];
	int i,j;
	printf("enter matrix of order %d*%d",ROW,COL);
	for (i=0;i<ROW;i++){
		for(j=0;j<COL;j++){
			scanf("%d",&mat[i][j]);
	}
	}

    int result = sumOfMaxFreq(mat);
    printf("Result = %d",result);
    return 0;
}


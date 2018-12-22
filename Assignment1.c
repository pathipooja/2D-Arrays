/*

    A matrix with 0s and 1s where each row & column is sorted, return  (min/fastest)row'th number which has highest Sum

    i.e.,  sorted ---------------------> row


            &&

            sorted |
                   |
                   |
                   |
                   |
                   |
                   colum wise


    Ex:

		0 0 0 0 1
                0 0 0 1 1
                0 0 1 1 1
                0 1 1 1 1
                1 1 1 1 1

      return 5, as last 5th row has the  highest sum


                0 0 0 0 1
                0 0 0 1 1
                0 0 1 1 1
                0 1 1 1 1
                0 1 1 1 1

      return 4, as 4 & 5 row has highest sum, return minimum of those is 4.


*/


#include<stdio.h>
#include<stdlib.h>
#define ROW 4
#define COLUMN 4


int rowWithHighestSum(int matrix[ROW][COLUMN])
{
	//Wrtie your actual solution here...  return  (min/fastest)row'th number which has highest Sum
	int i,j=0;
	int arr[ROW]={0};
	for(i=0;i<ROW;i++)
	{
	    j=0;
	    while(j<COLUMN)
        {
	arr[i]=arr[i]+matrix[i][j];
	j++;
	}
}
for (i=0;i<ROW;i++){
			printf("Rowwise sum is %d\n",arr[i]);
	}
i=0;
int sum;
while(i<ROW)
{
    if(arr[i]<arr[i+1])
    {
        i++;
    }
    else if(arr[i]==arr[i+1]){
        if(arr[i+1]<arr[i+2])
        {
            i++;
        }
        else return (i+1);
    }
}
}
int main()
{
	//Do write code that works for all inputs (Different row and column sizes 4,5....)

	int matrix[ROW][COLUMN];

printf("enter matrix of order %d*%d",ROW,COLUMN);
	int i,j;
	for (i=0;i<ROW;i++){
		for(j=0;j<COLUMN;j++){
			scanf("%d",&matrix[i][j]);
	}
	}

	int result = rowWithHighestSum(matrix);
	printf("\n Result = %d",result);

    	return 0;
}


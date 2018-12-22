/*
    Given a matrix(2D array), print transpose of that matrix


    Ex:

          1 2 3                          1 4 7
     1)   4 5 6     ------------->       2 5 8
          7 8 9                          3 6 9


     2)   6 4 5     ------------->      6 1
          1 8 9                         4 8
                                        5 9





*/


#include<stdio.h>
#include<stdlib.h>
#define ROW 3
#define COLUMN 3

void transpose(int matrix[ROW][COLUMN],int result[COLUMN][ROW])
{
	//Get Transpose of matrix and print it here..
	int i,j;
	for(i=0;i<COLUMN;i++)
    {
        for(j=0;j<ROW;j++)
   {
       result[i][j]=matrix[j][i];
   } }
for(i=0;i<COLUMN;i++)
    {
        for(j=0;j<ROW;j++)
   {
       printf("%d\t",result[i][j]);
   }
   printf("\n");
   }

}


int main()
{

       //Make sure your code accepts matrix of different dimensions


	int matrix[ROW][COLUMN] = { { 1, 2, 3 },
                      		    { 4, 5, 6 },
                                {
                                    7,8,9
                                }
                                    };
	int result[COLUMN][ROW];

	/*
	int i,j;
	for (i=0;i<ROW;i++){
		for(j=0;j<COLUMN;j++){
			scanf("%d",&matrix[i][j]);
	}
	*/

 	transpose(matrix,result);
	return 0;
}


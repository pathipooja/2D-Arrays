/*

	Given a matrix, print the elements of matrix in L shape.

	EX :
		1 2 3                   | 1 | 2  | 3
		4 5 6    ===========>   |   |    ---->       ============>    1 4 7 8 9 2 5 6 3
		7 8 9			| 4 | 5    6
		                        |   --------->
					| 7   8    9
					------------->


	Output : 1 4 7 8 9 2 5 6 3


*/


#include <stdio.h>
#define ROW 4
#define COL 4

void traverseL (int matrix[ROW][COL])
{
    // Write your actual solution here..  Given, a square matrix, print the elements of matrix in L shape.
int i=0,j=0;
int s=0;
for(j=0;j<COL;j++)
{
while(i<ROW-j)
{
printf("%d\t",matrix[i][j]);
i++;
}
  i=i-1;
  j++;
while(j<COL)
{
    printf("%d\t",matrix[i][j]);
 j++;
}
i=0;
j=s;
s++;
}
}

int main()
{

    //Make sure your code accepts matrix of different dimensions

    int mat[ROW][COL];

printf("enter matrix of order%d*%d",ROW,COL);
	int i,j;
	for (i=0;i<ROW;i++){
		for(j=0;j<COL;j++){
			scanf("%d",&mat[i][j]);
	}

	}
    traverseL(mat);
    return 0;


}

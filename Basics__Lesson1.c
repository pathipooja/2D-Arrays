#include<stdio.h>

void Test1(int *,int ,int);

void Test2(int Arr2[][2],int r,int c);

int main()

{

	int r=5,c=2,sample_2DArray_Way1[5][2]={1,2,3,4,5,6,7,8,9,10};

	int sample_2DArray_Way2[5][2] =

				 {

					{ 11, 12 },

            { 13, 14 },

            {15, 16 },

        { 17,18 },

        {19,20}

				 };



    int sample_2DArray_Way3[5][2]={21,22,23,24,25,26,27,28,29,30};



printf("%d\n",sample_2DArray_Way1[0][0]);

        printf("%d\n",*(sample_2DArray_Way1[0]+1));

        printf("%d\n",*(*(sample_2DArray_Way1+0)+2));

        printf("\n\nMethod 1\n\n");

        Test1(sample_2DArray_Way1,r,c);

        printf("\n\nMethod 2\n\n");

        Test2(sample_2DArray_Way2,r,c);

        /*
    Print the addresses of each element of all the above 3  2dArray
    */
    printf("Address of array1\n");
    int i,j;
    for(i=0;i<r;i++)

    {

	for(j=0;j<c;j++)

        {

		printf("%d\t",&sample_2DArray_Way1[i][j]);

        }
    }
    printf("\n");
    printf("Address of array2\n");
 for(i=0;i<r;i++)

    {

	for(j=0;j<c;j++)

        {

		printf("%d\t",&sample_2DArray_Way2[i][j]);

        }
    }
   printf("\n");
   printf("Address of array3\n");
 for(i=0;i<r;i++)

    {

	for(j=0;j<c;j++)

        {

		printf("%d\t",&sample_2DArray_Way3[i][j]);

        }
    }

	return 0;

}



void Test1(int *Arr1,int r,int c)

{

    int i,j;

    for(i=0;i<r;i++)

    {

	for(j=0;j<c;j++)

        {

		printf("%d\t",*(Arr1+i*c+j));

        }

       printf("\n");

    }

}



void Test2(int Arr2[][2],int r,int c)

{

    int i,j;

    for(i=0;i<r;i++)

    {

	for(j=0;j<c;j++)

        {

             printf("%d\t",Arr2[i][j]);

        }

	 printf("\n");

    }


}




void learned()

{


	//Fill what you have learnt in this lesson( Below comments)

	   /*
    Sample1: Got to know how contiguous memory allocation is done
1.Got to learn that memory allocation is done in a contiguous and increasing manner in an array with 4bytes
for the next array it is observed that the memory allocation is done in a decreasing order
 explanation:for suppose if array 1 begins and ends with addresses 6696 and 6732 respectively then
     array 2 begins and ends with 6656 and 6692 respectively
     so the allocation done here ends with a difference of 4 from where the 1st array has begun i.e.,6696-4=6692
     2.while using the pointer concept to print array elements,on increasing the value like *(arr[0]+1) the next element is being printed
     that means the base address is added 4 bytes and refers to the next element address in the array and hence it is printed.
    */


}

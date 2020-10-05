#include<stdio.h>
#define ROW 3
#define COLUMN 3
int checkUpperTriangular();
int main(void)
{
	int matrix1[ROW][COLUMN],matrix2[ROW][COLUMN],i,j;
	printf("<-------Enter the elements in the matrix 1-------->\n\n");
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COLUMN;j++)
		{
			printf("Element at position matrix1[%d][%d] :-",i,j);
			scanf("%d",&matrix1[i][j]);
		}
	}
	printf("\n\n<-----The Original Matrix is ----->\n");
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COLUMN;j++)
		{
			printf("%d\t",matrix1[i][j]);
		}
		printf("\n");
	}
	if(checkUpperTriangular(matrix1))
		printf("\nThis Is Upper Triangular Matrix.");
	else
		printf("\nThis Is Not Upper Triangular Matrix.");
	
	return 0;
}
int checkUpperTriangular(int matrix[][COLUMN])
{
	int i,j,flag=0;
	for(i=1;i<ROW;i++)
	{
		for(j=0;j<i;j++)
		{
			if(matrix[i][j]!=0)
			{
				return 0;
			}
		}
	}
	return 1;
	
}

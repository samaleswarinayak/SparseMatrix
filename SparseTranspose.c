/*Trnspose of sparse matrix*/
#include<stdio.h>
main()
{
	int triplet[50][3],columnmajor[50][3];
	int row,col,nzero,temp=1,i,j;
	printf("Enter total non-zero values of sparse matrix");
	scanf("%d",&nzero);
	/*Input for triplet matrix*/
	for(i=0;i<nzero+1;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter value");
			scanf("%d",&triplet[i][j]);
		}
	}
	/*Display triplet matrix*/
	printf("\nValues of triplet matrix are\n");
	for(i=0;i<nzero+1;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",triplet[i][j]);
		}
		printf("\n");
	}
	row = triplet[0][0];
	col = triplet[0][1];
	/*Transpose processing*/
	columnmajor[0][0] = col;
	columnmajor[0][1] = row;
	columnmajor[0][2] = nzero;
	for(j=0;j<col;j++)
	{
		for(i=1;i<nzero+1;i++)
		{
			if(triplet[i][1] == j)
			{
				columnmajor[temp][0] = j;
				columnmajor[temp][1] = triplet[i][0];
				columnmajor[temp][2] = triplet[i][2]; 
				temp++;
			}
		}
	}
	/*Display the transpose matrix*/
	printf("\nValues of transpose matrix are\n");
	for(i=0;i<nzero+1;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",columnmajor[i][j]);
		}
		printf("\n");
	}	
}

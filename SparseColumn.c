/*Implementation of sparse to triplet matrix*/

#include<stdio.h>
main()
{
	int sparse[30][30],row,col,i,j,nzero=0,triplet[50][3],temp=1;
	printf("Enter the total rows of sparse matrix");
	scanf("%d",&row);
	printf("\nEnter the total columns of sparse matrix");
	scanf("%d",&col);
	/*Input for Sparse Matrix*/
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter value");
			scanf("%d",&sparse[i][j]);
		}
	}
	/*Display sparse Matrix*/
	printf("\nValues of sparse matrix are\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",sparse[i][j]);
		}
		printf("\n");
	}
	/*Count total non-zero values*/
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(sparse[i][j] != 0)
			{
				nzero++;
			}
		}
	}
	/*Convert to triplet matrix*/
	triplet[0][0] = col;
	triplet[0][1] = row;
	triplet[0][2] = nzero;
	for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
		{
			if(sparse[j][i] != 0)
			{
				triplet[temp][0] = i;
				triplet[temp][1] = j;
				triplet[temp][2] = sparse[j][i];
				temp++;
			}
		}
	}
	/*Display triplet Matrix*/
	printf("\nValues of triplet matrix are\n");
	for(i=0;i<nzero+1;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",triplet[i][j]);
		}
		printf("\n");
	}
}

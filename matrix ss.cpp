#include<stdio.h>
int main()
{
	int mat[3][3],i,j,sum;

	for(i=0;i<3;i++){
	for(j=0;j<3;j++)
	{
	    printf("element[%d][%d]:",i,j);
		scanf("%d",&mat[i][j]);
	}}
	for(i=0;i<3;i++){
	for(j=0;j<3;j++)
	{
		printf("%d",mat[i][j]);}
		if(j==3){
			printf("\n");
		}
	}
	for(i=0;i<3;i++){
		sum=sum+mat[i][i];
	}
	printf("sum of the diagona; elements:%d",sum);
	
}

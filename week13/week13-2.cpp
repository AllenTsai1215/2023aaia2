#include <stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10];
	int i,j,k,n;
	//Part1:input a[i][j]
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	//Part2:output a[i][j]
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%3d ",c[i][j]);
		}
		printf("\n");
	}
}

#include <stdio.h>
int main()
{
	int a,b,n,ans;
	scanf("%d %d",&a,&b);
	if(a<b) n=a;
	else n=b;
	for(int i=1;i<=n;i++){
		if(a%i==0 && b%i==0)
			ans=i;
	}
	printf("%d %d\n",a/ans,b/ans);
}

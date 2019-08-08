#include<stdio.h>

int main(){
	int ncase,n,k;
	scanf("%d",&ncase);
	while(ncase--){
		scanf("%d %d",&n,&k);
		int coins[n+1],tmp[k][n+1],p[k],i,j;
		char state[k];
		for(i=0;i<=n;i++)coins[i]=1;
		for(i=0;i<k;i++){
			scanf("%d",&p[i]);
			for(j=0;j<2*p[i];j++)scanf("%d",&tmp[i][j]);
			getchar();
			scanf("%c",&state[i]);
		}
		for(i=0;i<k;i++){
			if(state[i]=='=')
				for(j=0;j<2*p[i];j++)
					coins[tmp[i][j]]=0;
			else  {
				for(j=0;j<2*p[i];j++)
					if(coins[tmp[i][j]]==1)
						coins[tmp[i][j]]=-1;

			
			}	
		}
  /*		for(i=0;i<k;i++){
			if(state[i]=='=')
				for(j=0;j<2*p[i];j++)
					coins[tmp[i][j]]=0;
			else  {
				for(j=0;j<2*p[i];j++)
					if(coins[tmp[i][j]]==1)
						coins[tmp[i][j]]=-1;

			
			}	
		}*/
		int ans =-1,count=0;
		for(i=1;i<=n;i++){
			if(coins[i]==-1){
				count++;
				ans=i;
			}
		}
		if(count==0){
			for(i=1;i<=n;i++)
				if(coins[i]==1){
					count++;
					ans =i;
				}
		}	
		if(count>1)printf("0\n");
		else printf("%d\n",ans);
		if(ncase)printf("\n");
	}
	return 0;
}

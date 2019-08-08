#include<stdio.h>


int main(){
	int n,count=1;
	while(scanf("%d",&n)){
		if(n==0) break;
		int date[n][3],day=0,i;
		for(i=0;i<n;i++){
			scanf("%d %d %d",&date[i][0],&date[i][1],&date[i][2]);
			if(day<date[i][0])day=date[i][0];
		}
		for(;day<10000;day++){
			for(i=0;i<n;i++){
				int y= day;
				while(y>=date[i][2])y=(y-date[i][2])+date[i][1];
				if(y!=date[i][0])break;
			}
			if(i==n)break;
		}
		printf("Case #%d:\n",count++);
		if(day<10000)printf("The actual year is %d.\n",day);
		else printf("Unknown bugs detected.\n");
		printf("\n");
	}
}

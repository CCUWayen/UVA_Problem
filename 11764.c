#include<stdio.h>

int main(){
	int ncase,wall,count=1;
	scanf("%d",&ncase);
	while(ncase--){
		scanf("%d",&wall);
		int stage,i,l=0,h=0,tmp;
		scanf("%d",&stage);
		for(i=0;i<wall-1;i++){
			scanf("%d",&tmp);
			if(stage>tmp)l++;
			else if(stage<tmp)h++;
			stage =tmp ;
		}
		printf("Case %d: %d %d\n",count++,h,l);
	}
	return 0;
}

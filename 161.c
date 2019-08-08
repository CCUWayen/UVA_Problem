#include<stdio.h>


int main(){
	while(1){
		int arr[150],n=0,i,time=0xffffff,cost_time[150]={0};
		while(scanf("%d",&arr[n])){
			if(arr[n]==0){
				break;
			}
			if(time>arr[n])time=arr[n];
			n++;
		}

		if(!arr[0]){
			break;
		}
		for(time=time*2;time<=18000;time++){
			int isOK=1;
			for(i=0;i<n;i++){
				int d = time/arr[i];
				if(d%2==1) {
					isOK = 0 ;
					break;
				}else {	
					int diff = time - arr[i]*d ;
					if(diff>=(arr[i]-5)){
						isOK=0;
						break;
					}
				}	
			}
			if(isOK)break;
		}
		if(time>18000)printf("Signals fail to synchronise in 5 hours\n");
		else{
			int hour=(int) (time/3600),min=(time%3600)/60,sec=time%60 ;
			printf("%02d:%02d:%02d\n",hour,min,sec);
		}
	}
	return 0;
}

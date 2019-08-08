#include<stdio.h>


int main(){
	int ncase;
	scanf("%d",&ncase);
	while(ncase--){
		int n;
		scanf("%d",&n);
		int number=((((n*567/9+7492)*235/47)-498)/10)%10;
		printf("%d\n",(number>=0)?number:-1*number);
		
	}
	return 0;
}

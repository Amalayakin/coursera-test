#include <stdio.h>
int gcdfunc(int);
int a,b;
int main(){
	int d,ans;
	int gcd =0;
	printf("enter the num1:");
	scanf("%d",&a);
	printf("enter the num2:");
	scanf("%d",&b);
	ans= gcdfunc(d);
	
	printf("gcd=%d",ans);
	
	
}
 int gcdfunc(d){
	int g,i;
	while(i>=1){
		if(a%i==0 && b%i==0)
		{
			g=i;
		}
		else{
			gedfunc(i+1);
	        }
		       }
		       return g;
}

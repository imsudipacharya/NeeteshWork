#include<stdio.h>
 int main(){
 	int a,b,ch;
 	printf("choose option: 1.Add 2.Sub 3.Mul 4.Div 5.Exit\n");
 	scanf("%d",&ch);
 	printf("Enter two number:");
 	scanf("%d",&a,&b);
 	switch(ch){
	case1: printf("sum=%d",a+b);
	  break;
	case2: printf("sub=%d",a-b);
	  break;
	case3: printf("mul=%d",a*b);
	  break;
	case4: printf("div=%d",a/b);
	  break;
	case5: printf("exit");
	 break;
}
 return 0;	
 }

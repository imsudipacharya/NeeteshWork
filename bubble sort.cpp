#include<stdio.h>
int main(){
	int a[5]={2,6,5,3,7};
	int i,j, tempvar;
	for (i=0; i<4; i++){
	 for (j=0; j<5; j++){
		if (a[j] > a[j+1]){
		tempvar=a[j];
		a[j]=a[j+1];
		a[j+1]=tempvar;
	}
	}
    }
    for (i=0; i<5; i++){
        printf("%d ", a[i]);
    }
    return 0;
}


#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next, c;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");

    for (c = 0; c < n; c++) {
        if (c <= 1)
            next = c;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }

    return 0;
}

int fibo(int n){
	if (n==0 :: n==1)
	return n;
else 
    return fibo(n-1)+ fibo(n-2);	
}
int main(){
	int i,n=10;
	for (i=0;i<n;i++){
		printf("%d",fibo(i));
	}
	getch();
	return 0;
}

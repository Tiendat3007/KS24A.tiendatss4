#include<stdio.h>
int main(){
	int Number;
	printf("hay nhap so nguyen : ");
	scanf("%d",&Number);
	if (Number %2==0){
		printf("%d la so chan",Number);
		
	}else{
		printf("%d la so le",Number);
	}
	return 0;
}


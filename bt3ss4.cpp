#include<stdio.h>
int main(){
	int Number;
	printf("hay nhap so nguyen:");
	scanf("%d",&Number);
	if (Number % 3 == 0) {
		printf("so nguyen %d chia het cho 3\n",Number);
		if (Number % 5 == 0) {
			printf("so nguyen %d chia het cho 5\n",Number);
		}
	}else{
		if (Number % 5 == 0) {
		printf("so nguyen %d chia het cho 5\n",Number);
		if (Number % 3 == 0) {
			printf("so nguyen %d chia het cho 3\n",Number);
	}
	return 0;
}
}
}

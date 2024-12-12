#include <stdio.h>

int main() {
    int num1,num2,num3;
    printf("hay nhap so nguyen thu nhat:");
    scanf("%d",&num1);
     printf("hay nhap so nguyen thu hai:");
    scanf("%d",&num2);
     printf("hay nhap so nguyen thu ba:");
    scanf("%d",&num3);
    if ((num3 > num1 && num3 < num2) || (num3 > num2 && num3 < num1)) {
        printf("so %d nam giua %d va %d.\n",num3,num1,num2);
    } else {
        printf("so %d khong nam giua %d va %d.\n",num3,num1,num2);
    return 0;
}
}

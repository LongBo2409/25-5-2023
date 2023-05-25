#include<stdio.h>
main(void){
	char ary[5];
	int i;
	printf("Nhap vap 1 chuoi: ");
	scanf ("%s", &ary);
	printf ("\n Chuoi nay la: ",ary);
	
	for(i = 0; i < 5; i++)
		printf("\n%d",ary[i]);
}

#include<stdio.h>
main(void){
	int ary[10];
	int i, total, high;
	for(i = 0; i < 10; i++){
		printf("\nNhap vao gia tri: %d: ",i + 1);
		scanf ("%d",&ary[i]);
	}
	high = ary[0];
	for(i = 0; i < 10; i++){
		if(ary[i] > high)
			high = ary[i];
	}
	printf ("\nGia tri da nhap vao cao nhat la: %d", high);
	
	for(i = 0, total = 0;i < 10;i++)
		total = total + ary[i];
	printf("\nTrung bình cong cua phan tu ary la: %d",total/i);
		
}

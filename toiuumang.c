#include<stdio.h>
main(void){
	int arr[5];
	int max, min, i;
	int total;
	float avg;
	

	for(i = 0; i < 5; i++){
		printf("Nhap so %d: ", i + 1);
		scanf ("%d", &arr[i]);
		total += arr[i];
		if (i == 0){
			
			max = arr[0]; 0;
			min = arr[0]; 0;
			
		}
		
		else{	
			if (arr[i] > max)
			max = arr[i];
			if (arr[i] < min)
			min = arr[i];	
									
	}	
	avg = (float)total/i+1;	
}	
	printf("Max = %d\n", max);
	printf("Min = %d\n", min);
	printf("Total = %d\n", total);
	printf("Avg = %.2f\n", avg);
}

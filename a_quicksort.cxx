//a_quicksort.cxx
#include "header.h"

void f_qs_tester(){
	int this_array[] = {10, 7, 8, 9, 1, 5};
	int a_size = (sizeof(this_array)/sizeof(this_array[0]));
	f_quicksort(this_array, 0, (a_size - 1));
	f_quicksort_print(this_array, a_size);
}

void f_quicksort_print(int this_array[], int this_size){
	int tmp0 = 0;
	for(tmp0 = 0; tmp0 < this_size; tmp0++){
		printf("%d ", this_array[tmp0]);
	}
	printf("\n");
}

int f_quicksort_partition(int this_array[], int lowbounds, int highbounds){
	int pivot = this_array[highbounds];
	int index = (lowbounds - 1);
	int left = lowbounds, tmp0 = 0;
	for(left = lowbounds; left < highbounds; left++){
		if(this_array[left] <= pivot){
			tmp0 = this_array[index];
			this_array[index] = this_array[left];
			this_array[left] = tmp0;
		}
	}
	tmp0 = this_array[index];
	this_array[index] = this_array[left];
	this_array[left] = tmp0;
	return index + 1;
}

void f_quicksort(int this_array[], int lowbounds, int highbounds){
	if(lowbounds < highbounds){
		int partition_ret = f_quicksort_partition(this_array, lowbounds, highbounds);
		f_quicksort(this_array, lowbounds, (partition_ret - 1));
		f_quicksort(this_array, (partition_ret + 1), highbounds);
	}
}

/*Bibliografia:
http://www.geeksforgeeks.org/quick-sort/

*/
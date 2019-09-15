#include<stdio.h>
int main() {
	int arr[10] = {456,8,6,9,4,77,22,66,88,75};
	int i=0;
	while(i<10){
		if( arr[i] < arr[i+1]) {
			arr[i+1] = arr[i];
		}
		i++;
	}
	printf("%d",arr[9]);
}

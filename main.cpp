#include<iostream>
//阿亮来噜
using namespace std;
void sort(int[] arr, int size){
	int temp = 0;
	for(int i = 0; i < size - 1; i++){
	for(int j = 0; j < size - 1; j++){
		if(arr[j] > arr[i])
		{
			int temp = j;
			j = i;
			i = temp;
		}
	}
	}
}
int main(){
	
	int arr[] = {12, 4, 89};
	int size = sizeof(arr)/sizeof(arr[0]);
	sort(arr, size);
	return 0;
}

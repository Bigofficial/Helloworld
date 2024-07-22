#include<iostream>
using namespace std;

int main(){
	
	int arr[] = {12, 4, 89};
	int size = sizeof(arr)/sizeof(arr[0]);
	sort(arr, size);
	return 0;
}
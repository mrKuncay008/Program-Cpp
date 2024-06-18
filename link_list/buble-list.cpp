#include <iostream>
using namespace std;

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubleshort(int arr[], int n) {
	for(int i = 0; i < n -1; i++) {
		bool swapped = false;
		
		for(int j=0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(&arr[j], &arr[j+1]);
				swapped = true;
			}
		}
		
		if (!swapped) {
			break;
		}
	}
}

int main(int argc, char** argv) {
		int arr[] = {6,4,2,8,3,1};
		int n = sizeof(arr) / sizeof(arr[0]);
		
		cout << "Angka Yang tidak Di Sortir: ";
		for (int i = 0; i < n; i++) {
		    cout << arr[i] << " ";
		  }
		cout << endl;
		
		bubleshort(arr, n);
		
		cout << "Angka sudah Di Sortir: ";
		for (int i = 0; i < n; i++) {
		    cout << arr[i] << " ";
		  }
  		cout << endl;
	return 0;
}

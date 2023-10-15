#include <iostream>
using namespace std;

// Quick Sorting 

//********************** Function for Partition ***************

int partition(int arr[], int low, int high)
{
	int pivot = arr[low]; //Pivot is the first element in the array 
	int i = low + 1;  // index of the first element greater than pivot 

	for (int j = low + 1; j <= high; j++) // index for thr elements smaller thn pivot 
	{
		if (arr[j] <= pivot)
		{
			swap(arr[i], arr[j]);
			i++;
		}
	}

	swap(arr[low], arr[i - 1]);
	return i - 1;
}

//*************** Function for quickSorting ********************
void Quicksort(int arr[], int low, int high)
{
	if (low < high)
	{
		int pi = partition(arr, low, high);

		Quicksort(arr, low, pi - 1);
		Quicksort(arr, pi + 1, high);
	}
}

//************** Function for printing ********************
void printArr(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";

	}
	cout << endl;
}

int main()
{
	int arr[] = { 50,10,20,100,70,60 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Original array: ";
	printArr(arr, n);

	Quicksort(arr, 0, n - 1);
	cout << "Sorted Array: ";
	printArr(arr, n);

	return 0;

}


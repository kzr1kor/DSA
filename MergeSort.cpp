// Online C++ compiler to run C++ program online
#include <iostream>
using  namespace std;
void MergeSort(int *array, int const left, int const right);
void Merge(int *array, int const begin, int const mid, int const end);
int main() {
    // Write C++ code here
    std::cout << "Hello world!";
    int arr[] = {9,5,7,6,3,2,4,1,8};
    MergeSort(arr, 0, 8);
    for(int i = 0; i < 9; i++)
    {
       cout<<arr[i]<<" ";
    }
    return 0;
}
//MergeSort
//void MergeSort(int array[], int const left, int const mid, int const right);
void MergeSort(int *array, int const begin, int const end)
{
	int mid;
	if (begin >= end)
		return;
    	cout<<"place 1 "<<begin<<end<<mid<<endl;
		mid = (begin + (end-begin)/2);
		
		MergeSort(array, begin, mid);
		MergeSort(array, mid+1, end);
		
		Merge(array, begin, mid, end);
		//int arr[] = {9,5,6,7,2,3,5,1};
		cout<<"after merge ";
	    for(int i = 0 ; i< 8; i++)
    	{
    		cout<<" "<<array[i];
    	}
    	cout<<endl;
}

void Merge(int *array, int const left, int const mid, int const right)
{
	int arr1size = mid-left+1;
	int arr2size = mid-left+1;
	cout<<"merge "<<left<<right<<mid<<endl;
		// Create temp arrays
	auto *leftArray = new int[arr1size],
		*rightArray = new int[arr2size];
		
	for(int i = 0 ; i< arr1size; i++)
	{
		leftArray[i] = array[i+left];
	}
	
	for(int i = 0 ; i < arr2size; i++)
	{
		rightArray[i] = array[i+mid+1];
	}
	
	int arr1index = 0, arr2index = 0, arrindex = left;
	
	while(arr1index < arr1size &&
			arr2index < arr2size)
	{
		if(leftArray[arr1index] <= rightArray[arr2index])
		{
			array[arrindex] = leftArray[arr1index] ;
			arr1index++;
		}
		else
		{
			array[arrindex] = rightArray[arr2index] ;
			arr2index++;
		}
		arrindex++;
	}
	
	while(arr1index < arr1size)
	{
		array[arrindex] = leftArray[arr1index] ;
		arr1index++;
		arrindex++;
	}
	
	while(arr2index < arr2size)
	{
		array[arrindex] = rightArray[arr2index] ;
			arr2index++;
			arrindex++;
	}
	
	delete rightArray;
	delete leftArray;
	 
}
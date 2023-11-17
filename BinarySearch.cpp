// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int Binary_Search(int arr[], int size, int data);
int main() {
    // Write C++ code here
    //std::cout << "Hello world!";
    int arr[8] = {1,2,3,4,5,6,7,8};
    int index = Binary_Search(arr, 8, 9);
    cout<<index;
    return 0;
}

int Binary_Search(int arr[], int size, int data)
{
	int l = 0, r = size-1, mid = 0;
	//cout<<"mid"<<mid<<endl;
	while(l<=r)
	{
		mid = (l+r)/2;
		//cout<<"mid"<<mid<<endl;
		if(arr[mid] == data) return mid;
		else if(arr[mid] < data)	l = mid+1;
		else if(arr[mid] > data)	r = mid-1;
	}
	return -1;
}
#include<iostream>
using namespace std;
int main(){
	int n,i;
	cin>>n;
	int arr[n];
	arr[0]=0;
	arr[1]=1;
	cout<<arr[0]<<" "<<arr[1]<<" ";
	for(i=2;i<n;i++){
		arr[i]=arr[i-1]+arr[i-2];
		cout<<arr[i]<<" ";
	}
	return 0;
}

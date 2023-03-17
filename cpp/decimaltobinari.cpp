#include<iostream>
using namespace std;
int main(){
	int n,binarynum[32],i=0;
	cin>>n;
	while(n>0){
		binarynum[i]=n%2;
		n=n/2;
		i++;
	}
	for(int j=i-1;j>=0;j--){
		
		cout<<binarynum[j];
	cout<<j;
	}
	
		
	
	return 0;
}

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=n;i>=1;i--){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		int c=1;
		int space=2*n - i+(n-c);
		
		for(int j=1;j<=space;j++){
			cout<<" ";
			c++;
		}
		for(int j=n;j>=1;j--){
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		int c=1;
		int space=2*n - i+(n-c);
		
		for(int j=1;j<=space;j++){
			cout<<" ";
			c++;
		}
		for(int j=n;j>=1;j--){
			cout<<"*";
		}
		cout<<endl;
	}
return 0;	
}

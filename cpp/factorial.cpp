#include<iostream>
using namespace std;
void factorial(int n){
	int fact=1;
	for(int i=n;i>=2;i--){
		fact=fact*i;
		
	}
	cout<<fact;
}
int main(){
	int n;
	cin>>n;
	factorial(n);
	return 0;
}


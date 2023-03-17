#include<iostream>
using namespace std;
void fib(int n){
	int t1=0,t2=1;
	cout<<t1<<" "<<t2<<" ";
	for(int i =2;i<n;i++){
		int nt=t1+t2;
		cout<<nt<<" ";
		t1=t2;
		t2=nt;
	}
	
}
int main(){
int n;
cin>>n;
fib(n);	
return 0;
}

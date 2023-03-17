#include<iostream>
using namespace std;
void fevenacci(int n){
	int t1=0,t2=1;
	for(int i=1;i<=n;i++){
		int nexttrm=t1+t2;
		t1=t2;
		t2=nexttrm;
	}
}
int main(){
	int n;
	cin>>n;
	fevenacci(n);
	return 0;
}

#include<iostream>
using namespace std;
int factorial(int n){
	int res=1;
	if(n==1||n==0){
		cout<<"factorial is--> 1";
	}
	else{
	for(int i=1;i<=n;i++){
		res=res*i;
		
	}
	return res;	
	}	
}
int main(){
int n;
cin>>n;
cout<<"factorial is-->"<<factorial(n);	
return 0;	
}

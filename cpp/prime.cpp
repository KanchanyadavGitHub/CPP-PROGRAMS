#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=1;i<=n;i++){
	if((i%i==0)or(i%1==0))
	{
		cout<<"number is prim "<<endl;
	}
	else{
		cout<<"number is not prime"<<endl;
	}
}
return 0;
}

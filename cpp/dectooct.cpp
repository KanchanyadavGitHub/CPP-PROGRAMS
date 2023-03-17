#include<iostream>
using namespace std;
void  dectooct(int n){
	int oct[32];
	int i=0;
	while(n>0){
		oct[i]=n%8;
		n/=8;
		i*=10;
		
		
	}
	for(int j=i;j>=0;j--){
		cout<<oct[j];
	}
 	
}
int main(){
	int n;
	cin>>n;
	dectooct(n);
	return 0;
}

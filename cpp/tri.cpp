#include<iostream>
using namespace std;
int main(){
	int n,c=1;
	cin>>n;
	for(int i =1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if (j<=i-1){
				cout<<" ";
			}
			else{
				cout<<c;
				c++;
			}
		}
		cout<<endl;
		
	}
	return 0;
}

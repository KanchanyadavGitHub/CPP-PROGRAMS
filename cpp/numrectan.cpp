#include<iostream>
using namespace std;
int main(){
	int n,c=1;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<c<<" ";
            c+=1; 
		
		}
			cout<<endl;
	}

}

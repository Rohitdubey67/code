#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,k,i;
	cin>>n;
	i=0;
	k=0;
	while(n)
	{
     if(n%10==4)
	 {
		 k+=pow(2,i++)*1;
	 }
	 else
	 k+=pow(2,i++)*2;
	 n=n/10;
	}
	cout<<k<<endl;
	return 0;
}

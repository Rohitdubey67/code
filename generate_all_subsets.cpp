#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,i,k,p;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<pow(2,n);i++)
	{
	    if(i==0)
	    cout<<"@"<<endl;
	    else
	    {
	    k=0;
	    p=i;
	    while(p)
	    {
	        if(p%2==1)
	        cout<<a[k]<<" ";
	        k++;
	        p=p/2;
	    }
	    cout<<endl;
	    }
	}
	return 0;
}

//#include<iostream>
#include<bits/stdc++.h>
//#include<algorithm>
using namespace std;
int main()
{ int n;
cin>>n;
 //string s;
int j;
	vector<int> a;
	for(int i=0;i<n;i++)
	{
		cin>>j;
		a.push_back(j);
	}
	cout<<endl;
	cout<<"--------------------------------------------------------------------------"<<endl;
	 sort(a.begin(),a.end());
	reverse(a.begin(),a.end());
	
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	list<int>l;
	for(int i=0;i<n;i++)
	{ cin>>j;
		l.push_back(j);
	}
	int it=l.begin();
	for(auto it=l.rbegin();it!=l.rend();++it)
	cout<<"list="<<*it;
	//int k=max(a.begin(),a.end());
	
return 0;
}

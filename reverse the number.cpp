#include<iostream>

using namespace std;  
int main()
{
	int sum=0, n,r;
	cout<<"enter the number"<<endl;
		cin>>n;
		cout<<"the number is ="<<n<<endl;
		while(n>0)
		{
			r=n%10;
			sum=sum*10+r;
			n=n/10;
		}
		cout<<"the reverse number is="<<sum;
		
		return 0;
		
}

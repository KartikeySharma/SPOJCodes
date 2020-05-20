#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,count;
	int ll,ul;
	cin>>t;
	while(t--)
	{
		cin>>ll>>ul;
		for(int i=ll;i<=ul;i++)
		{
			count=0;
			if(i==1)
			continue;
			for(int j=2;j<=sqrt(i);j++)
			{
				if(i%j==0)
				count++;
			}
			if(count==0)
			cout<<i<<endl;
		}
		cout<<endl;
	}

 return 0;
}


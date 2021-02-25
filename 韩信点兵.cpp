/*º«ÐÅµã±ø(0-100)*/ 
#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,num;
	cin>>a>>b>>c;
	for(int i=10;i<100;i++)
	{
		if((i-a)%3==0)
	    {
	    	if((i-b)%5==0)
	    	{
	    		if((i-c)%7==0)
	    		{
	    			num=i;
	    			break;
				}
				else
				continue;
			}
			else
			continue;
		}
		else
		continue;
		
	}
	if(num>100)
	    cout<<"No answer";
	else
	    cout<<num;
	
	return 0;
}

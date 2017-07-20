#include<iostream>
using namespace std;
void print(int a[],int n)
{
	for(int i=0;i<n;i++){
		if(i!=0)
			cout<<" ";
		cout<<a[i];
	}
	cout<<endl;
}
void swap(int &a,int &b)
{
	int temp=a;
	a=b;
	b=temp;
}
void sort(int &a,int &b)
{
	if(a<b)
		swap(a,b);
}
void sort(int &a,int &b,int &c)
{
	if(a<b)
		swap(a,b);
	if(a<c)
		swap(a,c);
	if(b<c)
		swap(b,c);
}
void sort(int &a,int &b,int &c,int &d)
{
	sort(a,b,c);
	if(d>a)
		swap(a,d);
	if(d>a)
		swap(a,d);
	if(d>a)
		swap(a,d);
}
void sort(int a[],int n)
{
	for(int i=1;i<n;i++)
	{
	    for(int j=n-1;j>=i;j--)
	    {
		    if(a[j]>a[j-1])
		    {
			    int temp=a[j];
			    a[j]=a[j-1];
			    a[j-1]=temp;
		    }
	    }
	}
}
int main()
{
	int a,b,c,d;
	int data[100];
	int k,n,i;
  	cin>>k;
  	switch(k)
  	{
    	case 1:
	        cin>>a>>b;
	        sort(a,b);
	        cout<<a<<" "<<b<<endl;
	        break;
    	case 2:
	        cin>>a>>b>>c;
	        sort(a,b,c);
	        cout<<a<<" "<<b<<" "<<c<<endl;          
	        break;      
    	case 3:
	        cin>>a>>b>>c>>d;
	        sort(a,b,c,d);
	        cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
	        break;  
	    case 4:
	        cin>>n;
	        for(i=0;i<n;i++)
	           {
	            cin>>data[i];
        } 
        sort(data,n);
        print(data,n);
        break;      
  }
  return 0;
}

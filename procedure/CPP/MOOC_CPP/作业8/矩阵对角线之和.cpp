#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int **p = new int*[n];
	for(int i = 0;i<n;i++)
		for(int j = 0;j<n;j++)
			p[i] = new int[n];
			
	for(int i = 0;i<n;i++)
		for(int j = 0;j<n;j++)
			cin>>p[i][j];
			
	int sum = 0;
	for(int i = 0;i<n;i++){
		sum += p[i][i];
	}
	cout<<sum<<endl;
	//释放空间
	for(int i = 0;i<n;i++)//释放行 
		delete[] p[i];
	delete [] p;
	return 0;
}

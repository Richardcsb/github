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
	//�ͷſռ�
	for(int i = 0;i<n;i++)//�ͷ��� 
		delete[] p[i];
	delete [] p;
	return 0;
}

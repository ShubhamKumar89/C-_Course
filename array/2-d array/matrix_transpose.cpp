#include <iostream>
using namespace std;

int main()
{
	int n,m;
	cin >> n >> m;
	int a[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin >> a[i][j];
			
		}
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<m;j++)
		{
			if(i != j)
			{
				int x = a[j][i];
				a[j][i]=a[i][j];
				a[i][j]=x;
			}
			
		}
	}
	
	cout << "Transpose of matrix : " << endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout <<  a[i][j] << " ";
			
		}
		cout << endl;
	}
	return 0 ;
}

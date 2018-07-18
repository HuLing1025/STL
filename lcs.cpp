#include<iostream>
#include<algorithm>
#include<string.h>
#define M 20
using namespace std;
int lcs(char str1[],char str2[])
{
	int arr[M][M];
	int i,j;
	int max_num=0;
	int m=strlen(str1),n=strlen(str2);
	for(i=0;i<=m;i++)
		for(j=0;j<=n;j++)
			arr[i][j]=0;	
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			
			if(str1[i]==str2[j])
				arr[i][j]=arr[i-1][j-1]+1;
			else	arr[i][j]=max(arr[i-1][j],arr[i][j-1]);
			if(arr[i][j]>max_num)
				max_num=arr[i][j];
		}
	}
	for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
			cout<<arr[i][j]<<"\t";
		cout<<endl;
	}
	return max_num;
}

int main()
{
	char str1[M],str2[M];
	int arr[M][M];
	int i,j;
	int m,n;
	int max_num=0;
	cin.getline(str1,21,'\n');
	cin.getline(str2,21,'\n');
	cout<<lcs(str1,str2)<<endl;	
	return 0;
}
 

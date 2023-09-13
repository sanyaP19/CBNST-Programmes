#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	float x;
	cout<<"Enter the value of n:"<<endl;
	cin>>n;
	float a[n][n];
	cout<<"Enter the value of x:"<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i][0];
	}
	cout<<"Enter the value of y:"<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i][1];
	}
	cout<<"Enter the value to be predicted:"<<endl;
	cin>>x;
	for(int i=2;i<=n;i++){
		for(int j=0;j<n-j+1;j++){
			a[j][i]=a[j+1][i-1]-a[i][j-1];
		}
	}
	cout<<"The diiference table is:"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<=n;j++){
			cout<<"\t"<<a[i][j];
		}
		cout<<endl;
	}
	float y=a[n/2][1];
	cout<<y<<endl;
	float u=(x-a[n/2][0])/(a[1][0]-a[0][0]);
	cout<<u<<endl;
	float u1=u;
	int fact=1;
	for(int i=2;i<=n;i++){
		y+=(((i/3)*(u+1))*u1*a[n/i][i])/fact;
		fact=fact*i;
		u1*=(u-(i-1));
	}
	cout<<"The desired value is:"<<y<<endl;
	return 0;
}

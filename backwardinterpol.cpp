#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	float x;
	cout<<"Enter the value of n:"<<endl;
	cin>>n;
	float a[10][10];
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
	for(int i=2;i<n+1;i++){
		for(int j=0;j<n-i+1;j++){
			a[j][i]=a[j+1][i-1]-a[j][i-1];
		}
	}
	cout<<"The diiference table is:"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<=n-i;j++){
			cout<<"\t"<<a[i][j];
		}
		cout<<endl;
	}
	float y=a[n/2][1];
	cout<<y<<endl;
	float u=(x-a[n/2][0])/(a[1][0]-a[0][0]);
	float u1=u;
	cout<<u1<<endl;
	int fact=1;
	for(int i=2;i<=n;i++){
		y+=(u1/fact)*a[(n-2)/i][i];
		cout<<a[(n-1)/i][i];
		fact=fact*i;
		if(i==2){
			u1*=(u-1);
		}
		else{
			if(i==3){
				u1*=(u+1);
			}
			else{
				u1*=(u-(i-2));
			}
		}
	}
	cout<<"The desired value is:"<<y<<endl;
	return 0;
}

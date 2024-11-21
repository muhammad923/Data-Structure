#include<iostream>
using namespace std; 
int main()
{
	int a[2][2];
	int i,j;
	cout<<"\n 2D array\n";
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			cout<<"\n input 2D array\n";
			cout<<"a["<<i<<"]["<<j<<"]"<<endl;
			cin>>a[i][j];
		}
		
	}
	cout<<"element of 2d array";
	for(i=0;i<2;i++){
	
	for(j=0;j<2;j++){
		cout<<"\t"<<a[i][j];
	}}
		cout<<endl;
	
}
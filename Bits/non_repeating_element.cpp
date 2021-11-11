#include<iostream>
using namespace std;

int main(){

	int a[7]={5,4,1,3,4,1,5};
	int result=0;
	for (int i = 0; i < 7; i++)
	{
		result=result^a[i];
	}
	cout<<result<<endl;

	return 0;
}
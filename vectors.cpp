#include <iostream>
#include <vector>

using namespace std;
int main(){
	vector<int>v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3); 
	//cout<<v.capacity()<<endl;
	//cout<<v.size()<<endl;
	int siz=v.size();
	for (int i = 0; i < siz; i++)
	{
		cout<<i<<endl;
		v.push_back(v[i]);
	}
	
return 0;
}
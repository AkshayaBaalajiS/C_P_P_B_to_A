#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	cout<<"This is the program to undertsanad how the vector count works \n";
	vector<int> vector_int ={1,2,3,4,5,6,7,1,2,3,4,5,6,71,4,1,3,2,5,3,2,2};
	
	vector<int> store_result;
	auto it= minmax_element(vector_int.begin(),vector_int.end());
	cout<<"Minimum element is : " << *it.first <<endl;
	cout<<"Maximum element is : " << *it.second <<endl;
	cout<<endl;
}
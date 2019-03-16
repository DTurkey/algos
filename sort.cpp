#include <iostream>
#include <vector>
#include <string>

using namespace std;

void bubbleSort(auto& Data)
{
	for (int i=0; i < Data.size(); i++)
		for (int j=0; j < Data.size() -1; j++)
			if (Data[j] > Data[j+1])
				swap (Data[j], Data[j+1]);
}

int main()
{
	vector<int> r = {9, 13, 19, 41, 1, 6};
	string p = " porshe rsr ";
	
	cout<<"p = "<<p<<endl;
	bubbleSort(p);
	cout<< "p sorted = "<<p<<endl;
	
	cout<< "_______________________\n\n";
	cout<<" r before bubblesort = "<<endl;
	for (auto x: r)
		cout <<x<<" ";
		
	bubbleSort(r);
	cout<<"\n\n' r after bubblesort = "<< endl;
	for (auto x: r)
		cout<<x<<" ";
		
return -1;
}

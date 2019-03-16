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

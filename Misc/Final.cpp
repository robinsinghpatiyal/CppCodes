#include <bits/stdc++.h>
using namespace std;

class Pump
{
	public:
		int pet;
		int dist;
};

int Tour(Pump arr[], int n)
{
	int s = 0;
	int e = 1;

	int curr = arr[s].pet - arr[s].dist;

/*
N = 4
Petrol = 4 6 7 4
Distance = 6 5 3 5
Output: 1
*/
	while (e != s || curr < 0)
	{
		while (curr < 0 && s != e)
		{
			curr -= arr[s].pet - arr[s].dist;
			s = (s + 1) % n;

			if (s == 0)
			return -1;
		}
		curr += arr[e].pet- arr[e].dist;

		e = (e + 1) % n;
	}

	return s;
}

int main()
{
	int n;
	cin>>n;
	Pump arr[n];
	
	int petrol[n];
	int distance[n];
	
	for(int i=0;i<n;i++){
		cin>>petrol[n];
	}
	for(int i=0;i<n;i++){
		cin>>distance[n];
	}
	
	for(int i=0;i<n;i++){
		arr[i].pet = petrol[i];
		arr[i].dist = distance[i];
	}
	
	/*
	N = 4
	Petrol = 4 6 7 4
	Distance = 6 5 3 5
	Output: 1
	*/
	
	int answer = Tour(arr, n);

	(answer == -1)? cout<<"Can't be found!'": cout<<"Output : "<<answer;

	return 0;
}



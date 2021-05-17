#include <bits/stdc++.h>
using namespace std;
int tour(int petrol[], int distance[]) {
	int size = sizeof(petrol)/sizeof(petrol[0]);
	int index = -1;
	int i = 0;
	int balance = 0;
	bool circleStarted = false;
	
	while (i != index) {
		if (circleStarted && index == -1) {
			break;
		}
		if (index == -1)
			index = i;
		
		int first = petrol[i] + balance;
		int second = distance[i];
		
		if (first - second < 0) {
			index = -1;
			balance = 0;
		} else {
			balance = first - second;
		}
			i++;
		if (i == size) {
			i = 0;
			circleStarted = true;
		}
	}
	return index;
}

int main()
{	
	int n = 4;
	int petrol[] = {4,6,7,4};
	int dist[] = {6,5,3,5};
	

	int end = tour(petrol, dist);
	cout<<end;

	return 0;
}




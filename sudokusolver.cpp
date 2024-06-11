#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int const N = 9;
int const n = 3;

void printBoard(vector<vector<int> > board) {
	for(int i=0; i<N; i++) {
		for(int j=0; j<N; j++) {
			cout<<board[i][j]<<" ";
		}
		cout<<endl;
	}
}

bool checkRow(vector<vector<int> > board) {
	for(int i=0; i<N; i++) {
		// create array
		int arr[N];
		for(int j=0; j<N; j++) arr[j] = board[i][j];

		// eval array
		sort(arr, arr+N);
		for(int j=1; j<N; j++) {
			if(arr[j] == 0) continue;
			if(arr[j] == arr[j-1]) return false;
		}
	} return true;
}

bool checkCol(vector<vector<int> > board) {
	for(int i=0; i<N; i++) {
		// create array
		int arr[N];
		for(int j=0; j<N; j++) arr[j] = board[j][i];

		// eval array
		sort(arr, arr+N);
		for(int j=1; j<N; j++) {
			if(arr[j] == 0) continue;
			if(arr[j] == arr[j-1]) return false;
		}
	} return true;
}
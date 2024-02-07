
/* A Naive recursive implementation of
0-1 Knapsack problem */
#include <bits/stdc++.h>
using namespace std;

// A utility function that returns
// maximum of two integers
int max(int a, int b) { return (a > b) ? a : b; }

// Returns the maximum value that
// can be put in a knapsack of capacity W
int knapSack(int W, int wt[], int val[], int n)
{

	// Base Case
	if (n == 0 || W == 0)
		return 0;

	// If weight of the nth item is more
	// than Knapsack capacity W, then
	// this item cannot be included
	// in the optimal solution
	if (wt[n - 1] > W)
		return knapSack(W, wt, val, n - 1);

	// Return the maximum of two cases:
	// (1) nth item included
	// (2) not included
	else
		return max(
			val[n - 1]
				+ knapSack(W - wt[n - 1], wt, val, n - 1),
			knapSack(W, wt, val, n - 1));
}

// Driver code
int main()
{
    int n;
    cout<<"no of items :";
    cin>>n;
    //cout<<endl;
	int profit[n];
    cout<<"profit : ";
    for(int i=0;i<n;i++)
    cin>>profit[i];
	int weight[n];
     cout<<"weight : ";
    for(int i=0;i<n;i++)
    cin>>weight[i];
    cout<<"knapsack capacity:";
	int w;
    cin>>w;
	//int n = sizeof(profit) / sizeof(profit[0]);
	cout << knapSack(w, weight, profit, n);
	return 0;
}



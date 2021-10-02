
#include <iostream>
using namespace std;
int comp=0;
void sort(int arr[], int lb, int mid, int ub)
{
	int temp[ub-lb+1];
	int i=lb, j=mid+1, k=0;
	while(i<=mid && j<=ub){
		
		if(arr[i]<=arr[j])
		{
			comp++;
			temp[k]=arr[i];
			i++;
		}
		else
		{
			comp++;
			temp[k]=arr[j];
			j++;
		}
		k++;
		}
		while(i <= mid)
		{
			temp[k] = arr[i];
			k ++;
			i++;
		}
		while(j<=ub)
		{
			temp[k]=arr[j];
			j++;
			k++;
		}
		for(int i=lb;i<=ub;i++)
			arr[i]=temp[i-lb];
}

void arraysort(int arr[], int lb ,int ub){
	if(lb<ub){
		int mid=(lb+ub)/2;
		arraysort(arr, lb, mid);
		arraysort(arr, mid+1, ub);
		sort(arr, lb, mid, ub);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		
		arraysort(arr, 0, n-1);
		cout<<endl<<comp<<endl;
		for(int i=0;i<n;i++)
			cout<<arr[i]<<"\t";
	}
}



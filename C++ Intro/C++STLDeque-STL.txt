#include<bits/stdc++.h>
#include <deque>
using namespace std;

void printKMax(int arr[], int n, int k)
{
    deque<int> De_que;
    int i;
    
    for(i=0; i<k; i++)
    {
        while(!De_que.empty() && arr[i]>=arr[De_que.back()])
  {
            De_que.pop_back();
        }
        De_que.push_back(i);
    }
    
    for(i=k; i<n; i++)
 {
        cout<<arr[De_que.front()]<<" ";
        
        while(!De_que.empty() && De_que.front()<=i-k)
  {
            De_que.pop_front();
        }
        while(!De_que.empty() && arr[i]>=arr[De_que.back()])
  {
            De_que.pop_back();
        }
        De_que.push_back(i);
        
    }
    cout<<arr[De_que.front()]<<endl;
}

int main()
{

   int t;
   scanf("%d",&t);
   while(t--) 
   {
      int n,k;
      cin>>n>>k;
       int i;
      int * arr=new int [n];
       for(i=0;i<n;i++)
           cin>>arr[i];
       printKMax(arr, n, k);
       
     }
     return 0;
}

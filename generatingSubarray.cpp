

#include <iostream>

using namespace std;

int main()
{
    int a[100],n,curr_sum=0,max_sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
   //Generating subarray 
    for(int i=0;i<n;i++){
        for(int j=i;j<=n;j++){
            for(int k=i;k<j;k++){
               cout <<a[k];
               
            }
            cout<<endl;
            
        }
       
    }


    return 0;
}



#include <iostream>

using namespace std;

int main()
{
    int a[100],n,curr_sum=0,max_sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //this solution has more time complexity three loops are running 
 /*   for(int i=0;i<n;i++){
        for(int j=i;j<=n;j++){
            for(int k=i;k<j;k++){
                curr_sum+=a[k];
               
            }
            if(curr_sum>max_sum){
                max_sum=curr_sum;
            }
        }
        cout<< "max sum of a subarray is "<<max_sum<<" ";
    }
*/

for(int i=0;i<n;i++){
    curr_sum+=a[i] * (n-i) * (i+1);
}
 cout<< "max sum of a subarray is"<<" " <<curr_sum;
    return 0;
}

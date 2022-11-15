
#include <iostream>
using namespace std;
int remValInArray(int nums[],int n,int val){
     int len=-1;
        for(int i=0;i<n;i++){
            if(nums[i]!=val){
                len++;
                nums[len]=nums[i];
            }
        }
        return len +1;
}
int rem2(int nums[],int n,int val){
  if(nums[n]==0){
            return 0;
        }
        int slow =0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=val){
                nums[slow]=nums[i];
                slow++;
            }
        }
         return slow;
}
int main()
{
    int nums[]={4,1,1,2,1,3};
    int k=rem2(nums,6,1);
     for(int k=0;k<3;k++){
         cout<<nums[k]<<" ";
     }

    return 0;
}

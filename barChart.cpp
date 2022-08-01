

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max=a[0];
   for(int i=0;i<n;i++){
       if(a[i]>max){
           max=a[i];
       }
   }
   for(int flooor = max;flooor>=1;flooor--){
       for(int i=0;i<n;i++){
           if(a[i]>=flooor){
               cout<<"*\t";
           }
           else{
              cout <<"\t";
               }
       }
        cout <<endl;
   }
   /*
   output will be n = 5
   3 3 3 3 4
   
    these star are the height of the tower                   
                *    
   *  *  *  *   *  
   *  *  *  *   *
   *  *  *  *   *

*/
    return 0;
}

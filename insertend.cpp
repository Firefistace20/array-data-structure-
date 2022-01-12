//INSERT AT THE END
#include <iostream>

using namespace std;

int main()
{

   int size;
    int a[size],i,val;
    cout<<"ENTER THE SIZE OF ARRAY: "<<endl;
    cin>>size;
    
    
    cout<<"ENTER THE ELEMENTS IN ARRAY: "<<endl;
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    
    cout<<"ENTER THE NUMBER YOU WANT TO INSERT AT THE END: "<<endl;
    cin>>val;
    a[size]=val;
    size++;
    cout<<"ARRAY AFTER INSERTION :"<<endl;
    for(i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

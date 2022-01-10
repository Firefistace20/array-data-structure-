//insert at first position
#include <iostream>

using namespace std;

int main()
{
    int i,n,a[10],val;
    cout<<"ENTER THE SIZE OF ARRAY: ";
    cin>>n;
    cout<<"ENTER THE ELEMENTS OF ARRAY: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"ENTER THE VALUE YOU WANT TO BE INSERTED IN FIRST POSITION : "<<endl;
    cin>>val;
    for(i=n;i>=0;i--)
    {
        if(a[i+1]=a[i]);
    }
    n++;
     a[0]=val;
      cout<<"RESULTANT ARRAY ELEMENT: "<<" "<<endl;
      for(i=0;i<n;i++)
    {
        cout<< a[i] <<endl;
        
    }

    return 0;
}

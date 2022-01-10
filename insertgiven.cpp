//INSERT AT THE GIVEN POSITION 
#include <iostream>
using namespace std;
#define MAX 30

//FUNCTION TO INSERT AT GIVEN INDEX
void insert_element(int *ptr,int *l,int pos,int value)
{
     for(int i=*l-1;i>=pos-1;i--)
    {
        ptr[i+1]=ptr[i];
    }
    ptr[pos-1]=value;
    *l++;
}
void output(int *ptr,int n)
{
    int i;
    cout<<"THE ELEMENTS IN ARRAY AS FOLLOWS : \n" <<endl;
    for(int i=0;i<n;i++)
    {
        cout<< *(ptr+i)<<" ";
    }
}

int main()
{
    int a[MAX],n,pos,value;
    
    cout<<"ENTER THE SIZE OF ARRAY: \n"<<endl;
    cin>>n;
    cout<<"ENTER THE ARRAY ELEMENTS:\n "<<endl;
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"ENTER THE VALUE AND POSTION YOU WANT TO  INSERT:\n "<<endl;
    cin>>value>>pos;
   insert_element(a,&n,pos,value);
    output(a,n);
}
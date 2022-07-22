// C++ code to demonstrate the working of find()

#include<iostream>
#include<map> // for map operations
using namespace std;

int main()
{
	// declaring map
	// of int and int
	map< int, int > mp;
	
	// declaring iterators
	map<int , int>::iterator it ;

	
	// inserting values
	mp[1]=5;
	mp[2]=10;
	mp[3]=15;
	mp[4]=20;
	mp[5]=30;
	
//INSERTION 	
	mp.insert(pair<int ,int >(6,40));
	
	//TRAVERSING THE MAP
	for(it=mp.begin();it!=mp.end();it++){
	    cout<<it->first<<" " <<it->second<<endl;
	}
	//returns the size of the map
	cout<<mp.size()
	mp.erase(1)//provide key in the function and it will remove the pair 
        mp.clear()//no need to pass parameter it will delete all the elements 
	
	// using find() to search for '5'
	// key found
	// "it" has address of key value pair.
	//SEARCHING 
	it = mp.find(6);
	
	if(it == mp.end())
		cout << "Key-value pair not present in map" ;
	else
		cout << "Key-value pair present : "
		<< it->first << "->" << it->second ;
	
	cout << endl ;
	


	
}

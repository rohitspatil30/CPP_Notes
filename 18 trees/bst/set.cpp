/*

set
unique and sorted :

unordered set :  only unique

*/

#include <iostream>

#include <bits/stdc++.h>

#define print_set    \
    for (auto i : s) \
        cout << i << " ";

using namespace std;

int main()
{

    set<int, greater<int>> s;
    s.insert(30);
    s.insert(30); // wont affect the set size.
    s.insert(45);
    s.insert(50);
    s.insert(100);
    s.insert(1);
    // s.insert(100); this wont affect the set size.
    // s.insert(100);
    // s.insert(100);
    // s.insert(100);
    print_set
            cout
        << "\n";
    std::set<int>::iterator it;
    for (auto it = s.begin(); it != s.end(); it++)
        cout << (*it) << " ";
    // cout<<"\n";
    // for(auto it =s.end();it!=s.begin();it--) cout<<(*it)<< " ";
    cout << "\n";
    for (auto it = s.rbegin(); it != s.rend(); it++)
        cout << (*it) << " ";
    cout << "\n";
    if (s.find(100) == s.end())
        cout << "\nnot found ";
    else
        cout << "\nfound"; // find function return the iterator to the element while the count fucntion will return 1  or 0;
    // the iterator returned by the find function can be used to print the value by storing its  node.
    auto i = s.find(10); // if not found then prints the end();
    cout << "\nfound: " << (*i);

    // count function returns true or false it means that whenever the count function is called you can print true or false but not the value.
    // reason that the count function only returns the true or false value is that the element in the set is present only once or not present at all.
    // so it is not true or false but values of the count.
    cout << "\n";
    cout << boolalpha << s.count(30); // boolpaha should print true or false if its return value was bool but the count the function returns the actual integer value  of the count which is ofc 1 or 0.
    // s.clear();// clears the entire set and remove s the memory of the spaces.
    cout<<'\n';

    s.erase(100);
    print_set 

    // erase by iterator :

    // first get the iterator for the element.
    auto iter = s.find(45);
    // s.erase(iter , s.end()); // bothof the erase function works the same. range.
    s.erase(iter); // bothof the erase function works the same.  without range.

    cout<<"\n";
    print_set

// =======================
// lower bound :  member of  the set.  return equal or greater value but if not then return s.end();

    auto lb = s.lower_bound(36);
    cout<<"\n"<<(*lb)<<"\n";
    return 0;
}
/**
 * @brief 
 * 
 * map
 * 
 * #include <iostream>
#include <map>
using namespace std;


int main() {
	
	map<int,int> m;
	m.insert({10,200});
	m[5]=100;
	m.insert({3,300});

	for(auto &x:m)
	    cout<<x.first<<" "<<x.second<<endl;
	    
	cout<<"Size: "<<m.size()<<endl;
	
	m.at(10)=300;
	    
	return 0;
}
 *

 #include <iostream>
#include <map>
using namespace std;


int main() {
	
	map<int,int> m;
	m.insert({10,200});
	m[5]=100;
	m.insert({3,300});

	for(auto it=m.begin();it!=m.end();it++)
	    cout<<(*it).first<<" "<<(*it).second<<endl;
	    
	m.clear();
	cout<<"Size: "<<m.size()<<endl;
	cout<<"Empty: "<<(m.empty()?"Yes":"No")<<endl;
	    
	return 0;
}

*
#include <iostream>
#include <map>
using namespace std;


int main() {
	
	map<int,string> m;
	m.insert({5,"gfg"});
	m.insert({2,"ide"});
	m.insert({1,"practice"});

	if(m.find(5)==m.end())
	    cout<<"Not found";
	else
	    cout<<"Found";
	    cout<<endl;
	if(m.count(2)==0)
	    cout<<"Not found";
	else
	    cout<<"Found";
	    cout<<endl;
	auto it=m.lower_bound(7);
	if(it!=m.end())
	    cout<<(*it).first<<" ";
	else
	    cout<<"No Equal or Greater Value";
	    
	return 0;
}
**
#include <iostream>
#include <map>
using namespace std;


int main() {
	
	map<int,string> m;
	m.insert({5,"gfg"});
	m.insert({2,"ide"});
	m.insert({1,"practice"});

	auto it=m.upper_bound(2);
	if(it!=m.end())
	    cout<<(*it).first<<endl;
	else
	    cout<<"Greater Value"<<endl;
	    
	m.erase(5);
	cout<<"Size: "<<m.size()<<endl;
	
	m.erase(m.find(2),m.end());
	cout<<"Size: "<<m.size()<<endl;
	
	return 0;
}
 */
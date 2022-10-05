#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> v={2,10,15,9};
    v.push_back(20);// insert 20 from back
    v.push_back(30);// insert 30 from back

    v.pop_back(); //delete last inserted element

    vector<int>::iterator itr;

    cout<<"using Iterator"<<endl;
    for(itr=v.begin();itr!=v.end();itr++)
        cout<<*itr<<endl;

    cout<<"using for each loop"<<endl;
    for(int x:v)
        cout<<x<<endl;


    return 0;
}

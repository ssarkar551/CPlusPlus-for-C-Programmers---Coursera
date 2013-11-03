#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Person 
{
public:
    int age;
};

bool cmp( const Person a, const Person b ) 
{
    return a.age < b.age ;
}

int main() 
{
    vector <Person> v;

    v.resize(10);
    
    for(int i=1;i<10;++i)
    {
        v[i].age=10-i;
    }
    
    sort( v.begin(), v.end(), cmp );

    for(int i=1;i<10;++i)
        cout<<v[i].age;
}
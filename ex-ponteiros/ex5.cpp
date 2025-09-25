#include <iostream>

using namespace std;

int main() 
{
    int *p1, *p2, *p3, v, x;

    cout<<"V ...: ";
    cin>>v;

    cout<<"X ...: ";
    cin>>x;

    p3 = new int;
    p1 = &v;
    
    p2 = &x;
    
    *p3 = v + *p2;
    
    cout << endl << endl << *p1; // 2
    cout << endl << *p2; // 3
    cout << endl << *p3; // 5
    
    delete p3;
    
    *p3 = *p1;

    x = 2;
    
    cout << endl << endl << *p1; // 2 
    cout << endl << *p2; // 2   
    cout << endl << *p3; // 2
    
    p3 = p2;
    
    cout << endl << endl << *p1; // 2
    
    cout << endl << *p2; // 2
    
    cout << endl << *p3; // 2
    
    *p3 = 8;
    
    cout << endl << endl << *p1; // 2
    
    cout << endl << *p2; // 8
    
    cout << endl << *p3 << endl; // 8
 

    return 0;
}
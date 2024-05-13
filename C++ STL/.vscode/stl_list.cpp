#include <iostream>
using namespace std;
#include <list>

int main()
{

    list<int> l;
    list<int> m(5, 100);
    cout << "printing m" << endl;

    for (int i : m)
    {
        cout << i << endl;
    }
    
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_front(4);

    cout << "front\t" << l.front() << endl;
    cout << "back\t" << l.back() << endl;
    cout << "empty or not\t" << l.empty() << endl;
    cout << "before erase\t" << l.size() << endl;
    for (int i : l)
    {
        cout << i << endl;
    }

    l.erase(l.begin());

    for (int i : l)
    {
        cout << i << endl;
    }
    list<int> n(l);

// copy of list<int>l
    cout << "printing n" << endl;
    for (int i : n)
    {
        cout << i << endl;
    }

    return 0;
}
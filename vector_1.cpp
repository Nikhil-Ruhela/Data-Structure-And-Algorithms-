#include <iostream>
using namespace std;
#include <vector>
int main()
{
    vector<int> v;
    cout << "capacity " << v.capacity() << endl; // capacity = "for how much total elemen the memory is located"
                                                 //  size = "how much element present in that vector"

    v.push_back(1);
    cout << "capacity " << v.capacity() << endl;
    cout << "size" << v.size() << endl;

    v.push_back(2);
    cout << "capacity " << v.capacity() << endl;
    cout << "size" << v.size() << endl;

    v.push_back(3);
    cout << "capacity " << v.capacity() << endl;
    cout << "size" << v.size() << endl;

    v.push_back(4);
    cout << "capacity " << v.capacity() << endl;
    cout << "size" << v.size() << endl;

    v.push_back(5);
    cout << "capacity " << v.capacity() << endl;
    cout << "size" << v.size() << endl;

    cout << "Element at 2nd index\t" << v.at(2) << endl;
    cout << "Empty of not\t" << v.empty() << endl;
    cout << "First Element\t" << v.front() << endl;
    cout << "Last Element\t" << v.back() << endl;

    cout << "Before pop" << endl;

    for (int i : v)
    {
        cout << i << endl;
    }

    v.pop_back();

    cout << "After pop" << endl;

    for (int i : v)
    {
        cout << i << endl;
    }

    v.clear();
    cout<<"Size after clear"<<v.size()<<endl;

   
    return 0;
}


// #include<iostream>
// using namespace std;
// #include<vector>
// int main(){
//     vector<int>a(5,2);
//      for (int i : a)
//      {
//          cout << i << endl;
//      }
//     vector<int>last(a);
//     cout<<"copy of a "<<endl;
//     for (int  i:last)
//     {
//         cout << i << endl;
//     }
//     return 0;
// }
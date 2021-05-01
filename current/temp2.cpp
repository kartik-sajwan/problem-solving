#include<iostream>
#include<vector>
#include<cstdio>

using namespace std;

int main( int argc, char ** argv)   {

    //from initializer list cpp11
    cout << "vector from initializer list cpp11" << endl;
    vector<int> vi1 = {1, 2, 3 ,4 ,5 ,6 ,7 ,8 ,9 ,10};
    cout << "size: " << vi1.size()  << endl;
    cout << "front: " << vi1.front() << endl;
    cout << "back: " << vi1.back() <<endl;
    cout << "insert 42 at begin + 5" << endl;
    vi1.insert(vi1.begin()+5, 42);
    cout << "size: " << vi1.size() << endl;
    cout << vi1[5] << endl;

    cout << "push back: 47" << endl;
    vi1.push_back(47);
    cout << "size: " << endl;
    cout << "vi1.back()" << vi1.back() << endl;

    // range based iterators cpp11

    cout << "range-based iterator cpp11: " << endl;
    for(int & v : vi1)  {
        cout << v << " ";
    }
    
    // from C array
    const static int size = 10;
    cout << "vector from C: " << endl;
    int ia[size] = {1, 2, 3 ,4 ,5 ,6 ,7 ,8 ,9 ,10};
    vector<int> vi2(ia, ia + size);
    cout << "plain old for loop (i:v)" << endl;
    for(int i = 0; i < size; i++)   {
        cout << i << ":" << vi2[i] << " ";
    } 
    cout << endl << endl;

    //from argc/argv list
    cout << "vector of strings, from argc/argv list: " << endl;
    vector<string> args(argv, argv+argc);
    for(string & v : args) {
        cout << v << endl;
    }
    return 0;
}



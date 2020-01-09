#include<stdio.h>
#include<iostream>
#include<exception>

using namespace std;


class E : public std::exception {
public:
    explicit E (const char * s) throw() : msg(s)    {   }
    const char* what() const throw() { return msg; }
private:
    E() {};
    const char * msg;
};


template <typename T>
class Stack {
private:
    static const int defaultSize = 10;
    static const int maxSize = 1000;
    int _size;
    int _top;
    T * stackPtr;
public:
    explicit Stack (int);
    ~Stack()    { delete[] stackPdtr; };
    T & push( const T & );
    T & pop();
    bool isEmpty() const { return _top < 0; }

}

int main()  {
    
    return 0;
}

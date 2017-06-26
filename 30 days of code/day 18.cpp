#include <iostream>
#include <queue> 
#include<stack>
using namespace std;

class Solution {
    //Write your code here
    public:
    stack<char> mystack;
    queue<char> myqueue;
    
    void pushCharacter(char ch)
    {
        mystack.push(ch);
    }
    char popCharacter()
    {
        return mystack.top();
        mystack.pop();
    }
    void enqueueCharacter(char ch)
    {
        myqueue.push(ch);
    }
    char dequeueCharacter()
    {
        
        return myqueue.front();
        myqueue.pop();
        
    }
    

};

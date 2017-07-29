#include<iostream>
using namespace std;

void word(int n) {
    switch(n) {
        case 1:
            cout<<"one";
            break;
        case 2:
            cout<<"two";
            break;
        case 3:
            cout<<"three";
            break;
        case 4:
            cout<<"four";
            break;
        case 5:
            cout<<"five";
            break;
        case 6:
            cout<<"six";
            break;
        case 7:
            cout<<"seven";
            break;
        case 8:
            cout<<"eight";
            break;
        case 9:
            cout<<"nine";
            break;
        case 10:
            cout<<"ten";
            break;
        case 11:
            cout<<"eleven";
            break;
        case 12:
            cout<<"twelve";
            break;
        case 13:
            cout<<"thirteen";
            break;
        case 14:
            cout<<"fourteen";
            break;
        case 15:
            cout<<"fifteen";
            break;
        case 16:
            cout<<"sixteen";
            break;
        case 17:
            cout<<"seventeen";
            break;
        case 18:
            cout<<"eighteen";
            break;
        case 19:
            cout<<"nineteen";
            break;
        case 20:
            cout<<"twenty";
            break;
        case 21:
            cout<<"twenty one";
            break;
        case 22:
            cout<<"twenty two";
            break;
        case 23:
            cout<<"twenty three";
            break;
        case 24:
            cout<<"twenty four";
            break;
        case 25:
            cout<<"twenty five";
            break;
        case 26:
            cout<<"twenty six";
            break;
        case 27:
            cout<<"twenty seven";
            break;
        case 28:
            cout<<"twenty eight";
            break;
        case 29:
            cout<<"twenty nine";
            break;  
    }
}
    int main()
    {
        int h, m;
        cin>>h>>m;
        if(m==0)
        {
            word(h);
            cout<<" o' clock";
        }
        else if((m>=1 && m<15) || (m>=16 && m<30)){
            word(m);
            cout<<" minutes past ";
            word(h);
        }
        else if(m==15)
        {
            cout<<"quarter past ";
            word(h);
        }
        else if(m==30)
        {
            cout<<"half past ";
            word(h);
        }
        else if((m>30 && m<45) || (m>46 && m<60))
        {
             word(60-m);
            cout<<" minutes to ";
            word(h+1);
        }
        else if(m==45)
        {
            cout<<"quarter to ";
            word(h+1);
        }
        
    }

#include <iostream>
#include <cstdio>
#include<string>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    int i;
    for(i=a;i<=b;i++)
    {
        if(i<=9)
        {
            switch(i)
            {
                case 1: 
                cout<<"one"<<endl;
                break;
                case 2: 
                cout<<"two"<<endl;
                break;
                case 3: 
                cout<<"three"<<endl;
                break;
                case 4: 
                cout<<"four"<<endl;
                break;
                case 5: 
                cout<<"five"<<endl;
                break;
                case 6:
                cout<<"six"<<endl;
                break;
                case 7: 
                cout<<"seven"<<endl;
                break;
                case 8: 
                cout<<"eight"<<endl;
                break;
                case 9:
                cout<<"nine"<<endl;
                break;
    
                
            }
    
        }
        else if(i>9)
        {
           
           if(i%2==0)
           cout<<"even"<<endl;
           else
           cout<<"odd"<<endl; 
        }
        
    }

    
    return 0;
}
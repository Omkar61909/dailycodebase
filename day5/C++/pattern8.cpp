/*
* @author : dhruv-gupta14
* @date : 27/12/2018
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rows;
    cin>>rows;

    for(int i=1; i<=rows; i++){
        for(int j=1; j<=i; j++)  
            cout<<"* ";
        for(int s=1; s<=(rows-i); s++)
            cout<<"    ";
        for(int j=1; j<=i; j++)  
            cout<<"* ";
        cout<<endl;
    }
    
    for(int i=1; i<=rows; i++){
        for(int j=i; j<=rows; j++) 
            cout<<"* ";
        for(int s=1; s<i; s++)
            cout<<"    ";
        for(int j=i; j<=rows; j++) 
            cout<<"* ";
        cout<<endl;
    }
    return 0;
}
/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}


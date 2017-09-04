/*
Author: @Rishabh(rishabhbohra10@gmail.com)
Problem Link: https://www.hackerrank.com/challenges/dynamic-array
Language: C++11


*/

#include<bits/stdc++.h>
#include <iostream>

using namespace std;

//start of main function
int main() {
    int n,q; // declaring number of sequence list n and number of queries
    cin >> n >> q;
    vector<int> v[n]; // declaring n number of sequences
    
    while(q--){
        int a,b,c;
        cin >> a>> b>> c;
        static int l(0); 
        if(a==1){
            v[( b ^ l)%n].push_back(c);
        }
        else if(a==2){
            int ind = ( b ^ l)%n;
            l = v[ind][c % v[ind].size()];
            cout << l << endl;
        }
         
    }
    
    return 0;
}

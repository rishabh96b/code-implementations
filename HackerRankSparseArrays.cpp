/*
@Author: Rishabh(rishabhbohra10@gmail.com
Problem Link: https://www.hackerrank.com/challenges/sparse-arrays
Language: C++11

*/

#include<bits/stdc++.h>

using namespace std;

//start of main function
int main() {
    int n;
    cin >> n;
    map<string,int> m;    // declaring a map to count the occurence of string provided
    string ss;
    
    for(int i=0;i<n;++i){ //Loop to input the strings and increment the count if string is already present.
        cin >> ss;
        m[ss]++;           
    }
    
    
    int q;                //number of queries q.
    cin >> q;
    
    
    while(q--){           //while number of queries output count of string if present in map. 
        string present;
        cin >> present;
        if(m.count(present)){
            cout << m[present] << endl;
        }
        else{
            cout << "0"<<endl;
        }
    }
    return 0;
}
//end of main.

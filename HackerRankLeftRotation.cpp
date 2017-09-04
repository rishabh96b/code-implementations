/*
@Author: Rishabh(rishabhbhra10@gmail.com)
Problem Link: https://www.hackerrank.com/challenges/array-left-rotation/problem
Language: C++11
*/

#include <bits/stdc++.h>

using namespace std;

vector <int> leftRotation(vector <int> a, int d) {

    //Reversing logic can be hard to listen to beginners. FOr reference search other forums.
    
    reverse(a.begin() , a.begin() + d); //reverse first d elements of array.
    reverse(a.begin()+d , a.end());     //reverse remaining elements of array.
    reverse(a.begin() , a.end());      //reverse entire array and elements are now shifted to d amount in left.
    
    return a;
}

//start of main function.

int main() {
    int n;
    int d;
    cin >> n >> d;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector <int> result = leftRotation(a, d);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}
//end of main.

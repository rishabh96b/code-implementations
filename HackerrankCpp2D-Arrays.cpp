/*
@Author: Rishabh(rishabhbohra10@gmail.com)
Link of problem:  https://www.hackerrank.com/challenges/2d-array/copy-from/53121907
Topic: Data Structures
*/

#include<bits.stdc++.h>

using namespace std;


int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    
    //initializing the max = -1000
    int max(-1000);
    
    //int max_i,max_j;
    
    for(int i=1;i<=4;++i){
        for(int j=1;j<=4;++j){
            //calculating the sum of hourglass
            int maybeMax=arr[i-1][j-1] + arr[i-1][j] + arr[i-1][j+1] +arr[i][j] + arr[i+1][j-1] + arr[i+1][j] +arr[i+1][j+1];
            if(max < maybeMax ){
                max = maybeMax;
                
                /*max_i = i;
                max_j=j;*/
            }
        }
    }
    cout << max<<endl;   //print the maximun of all hourglasses.
    
    //code to print the hourglass completely
    
    /*
    cout<< arr[max_i-1][max_j-1] << " "<<arr[max_i-1][max_j]<< " " <arr[max_i-1][max_j+1]<<endl;
    cout << " " <<" "<< arr[max_i][max_j] << " "<< " "<<endl;
    cout <<arr[max_i+1][max_j-1]<<" "<< arr[max_i+1][max_j]<< " "<< arr[max_i+1][max_j+1];
    */
    
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;//size liya array ka
    cout<<"enter array size";
    cin>>n;
    int arr[n];//array declarion
    for(int i=0;i<n;i++){
        cin>>arr[i];//user input of arr element
    }
    try{
    sort(arr,arr+n);//use sort from stl library to sort array
    }
    catch(exception e){
        cout<<"header file not found";
    }
    for(int i=n-1;i>=0;i--){
        if(arr[i-1]!=arr[i] && arr[i]!=arr[i+1]){
            cout<<arr[i]<<", ";//abh bas sath vale element se dekh lia ki agar same hai toh bas yeh hi repeated hai.
        }
    }

    return 0;
}
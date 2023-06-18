#include <iostream>
#include <algorithm>  // for sort() function
using namespace std;

int min_difference(int* arr,int n, int m){
    if(m>n) return -1;

    int min_diff=INT16_MAX;
    sort(arr,arr+n);
    // for(int i=0;i<n;i++){
    //     std::cout << arr[i]<<" ";
    // }

    for(int i=0;i<=n-m;i++){
        min_diff=min(min_diff,arr[i+m-1]-arr[i]);
    }

    return min_diff;
}

int main(int argc, char const *argv[])
{   
    int n,m;
    std::cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin >> arr[i];
    }
    std::cin >> m;

    cout<<min_difference(arr,n,m); //m=number of students
    return 0;
}
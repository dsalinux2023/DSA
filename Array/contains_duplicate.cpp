#include <iostream>
using namespace std;

bool contains_duplicate(int* arr,int n){
    int xor_sum;
    for(int i=0;i<n;i++){
        xor_sum ^= arr[i];
    }

    return (xor_sum == 0) ?  0 : 1; 
}

int main(int argc, char const *argv[])
{   
    int n;
    std::cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin >> arr[i];
    }
    cout<<contains_duplicate(arr,n);
    return 0;
}
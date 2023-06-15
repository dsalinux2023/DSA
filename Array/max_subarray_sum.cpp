#include <iostream>
using namespace std;

int max_subarray_sum(int* arr,int n){
    //local max ==> 0 
    //global max ==> -Infinity
    int local_max_sum =0;
    int max_sum=INT16_MIN;
    for(int i=0;i<n;i++){
        local_max_sum=max(arr[i],arr[i]+local_max_sum);
        if(local_max_sum>max_sum)max_sum=local_max_sum;
    }
    return max_sum;
}

int main(int argc, char const *argv[])
{   
    
    int n;
    std::cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin >> arr[i];
    }

    cout<<max_subarray_sum(arr,n);

    return 0;
}
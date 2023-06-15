#include <iostream>
using namespace std;

void reverse_array(int* arr,int n){
    for(int i=0;i<n/2;i++){
        swap(arr[i],arr[n-1-i]);
    }
}

int main(int argc, char const *argv[])
{   
    int n;
    std::cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin >> arr[i];
    }
    reverse_array(arr,n);
    for(int i=0;i<n;i++){
        std::cout << arr[i] <<" ";
    }
    std::cout<<std::endl;

    return 0;
}
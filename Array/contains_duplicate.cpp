#include <iostream>
using namespace std;

/*Using XOR it is not possible to detect duplicate*/
bool contains_duplicate(int* arr,int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]) return 1;
        }
    }
    return 0;
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
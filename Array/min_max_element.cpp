/*
nput: arr[] = {3, 5, 4, 1, 9}
Output: Minimum element is: 1
              Maximum element is: 9

Input: arr[] = {22, 14, 8, 17, 35, 3}
Output:  Minimum element is: 3
              Maximum element is: 35
*/
#include <iostream>

/*
best case => Ascending ordred array=>(n-1) comparisions
worst case => Descending ordered array=> 2*(n-1) comparisions
*/
int* min_max_bf(int* arr,int n){
    int min,max=arr[0];
    for (int i=1;i<n;i++){
        if(arr[i]<min) min=arr[i];
        else if(arr[i]>max) max=arr[i];
    }
    static int minMax[2]={min,max};
    return minMax;
}

int main(int argc, char const *argv[])
{   
    int n;
    std::cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin >> arr[i];
    }
    // for(int i=0;i<n;i++){
    //     std::cout << arr[i] <<" ";
    // }
    // std::cout<<std::endl;
    int* minMax=min_max_bf(arr,n);
    std::cout<<minMax[0]<<" "<<minMax[1]<<std::endl;

    return 0;
}

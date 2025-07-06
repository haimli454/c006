#include <iostream>
#include <vector>
using namespace std;


int main(){
    int nums[5];
    int total = 0;
    for(int i = 0; i<5; i++){
      int multi;
      cin >> nums[i];
      multi = nums[i]*nums[i]; 
      total += multi;
    } 
    cout << total / 10;
    return 0;
}
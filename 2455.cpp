#include <iostream>
#include <vector>
using namespace std;


int main(){
    int people;
    int max = 0;
    int current = 0;
    for(int i=0; i<4; i++){
        for(int j=0; j<2; j++){
            cin >> people;
            if(j == 1) current += people;
            else current -= people;
        }
        if(current > max) max = current;
    }

    return 0;
}
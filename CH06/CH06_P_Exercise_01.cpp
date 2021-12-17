#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    int x;
    int max, min;

    cout << "정수의 개수 : ";
    cin >> x;
    cout << endl;

    vector<int> stg(x);

    for(auto& elem : stg){
        cout << "정수를 입력하시오 : ";
        cin >> elem;
        stg.push_back(elem);
    }

    max = min = stg.front();

    for(auto& elem : stg){
        if(max < elem) max = a;
        if(min > elem) min = a;
    }
    
    cout << "최대값" << max << endl;
    cout << "최소값" << min << endl;

    //return 0;
}
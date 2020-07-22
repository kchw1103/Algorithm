#include <iostream>

using namespace std;

void doCombination(int * combArr, int n, int r, int index, int target, int * arr){
    if(r == 0){
        for(int i = 0 ; i < index ; i++) cout << arr[combArr[i]] << " ";
        cout << "\n";
    }
    else if(target == n) return;
    else{
        combArr[index] = target;
        doCombination(combArr, n, r-1, index+1, target+1, arr); // (i)
        doCombination(combArr, n, r, index, target+1, arr); //(ii)
    }
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int arr[5] = { 1, 3, 5, 7, 9 };
    int n = 5;
    int r = 3;
    int combArr[3];

    doCombination(combArr, n, r, 0, 0, arr);

    return 0;
}

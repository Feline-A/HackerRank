#include <iostream>

using namespace std;

int dt[1010];

int lowerbound(int lf, int rg, int tgt){
    int mid;
    while(rg-lf > 1){
        mid = (lf+rg)/2;
        if (dt[mid] < tgt){
            lf = mid;
        }
        else{
            rg = mid;
        }
    }
    if (dt[rg] == tgt) { return rg; }
    else { return -1; }
}

int main(){
    int v, n;
    cin >> v;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> dt[i];
    }

    cout << lowerbound(-1, n, v);
    return 0;
}

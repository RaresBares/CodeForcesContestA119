#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;

    cin >> n >> m;
    vector<int> ls;
    while (m--){
        int i;
        cin >> i;
        ls.push_back(i);
    }


    for(auto l = ls.begin(); l != ls.end(); l++){
        cout << n-*l+1;

    }



    return 0;
}

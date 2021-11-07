#include <iostream>
using namespace std;

int main() {
    int prova, pranto;
    cin>>prova;
    int ava[prova];

    for(pranto=0; pranto<prova; pranto++) {
        cin>>ava[pranto];
    }

    for(pranto=prova-1; pranto>=0; pranto--) {
        cout<<ava[pranto]<<" ";
    }

    return 0;

}
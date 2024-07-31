#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;          // "we can write row instead of i"
    while(i<=n){
        int j=1;      // "we can write column instead of j"
        while(j<=i){
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
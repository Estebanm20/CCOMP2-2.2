#include <iostream>
using namespace std;

bool esperfecto(int n){
    int a = 0;
    for(int i = 0;i<=n/2;i++){
        if(n%i==0)
        a+=i;
    }
    return true==n;

}

int main(){
    int n;
    cout<<esperfecto(496)<<endl;
    return 0;
}
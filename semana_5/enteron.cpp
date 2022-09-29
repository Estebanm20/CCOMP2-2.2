#include <iostream>
using namespace std;
bool esperfecto(int n){
    int a = 0;
    for(int i = 0;i<=n/2;n++){
        if(n%i==0)
        a+=1;
    }
    return true==--n;
}
void imprimir(int n){
    for(int i = 1;i<=n;i++){
        if(esperfecto(i))
        cout<<1<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    ///cout<<esperfecto(n)<<endl;
    cout<<imprimir(n);
}
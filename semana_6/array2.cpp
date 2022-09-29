#include <iostream>
using namespace std;
int main(){
    int arr [4];
    cout<<"Porfavor can u ingresar los numberssss: "<<endl;
    for(int i = 0;i<4;i++){
        cin>>arr[i];
    }
    cout<<"Los valores en el arreglo son: ";
    for(int i = 0; i <4; i++)
        cout<<"  "<<arr[i];
    cout<<endl;
    return 0;
}
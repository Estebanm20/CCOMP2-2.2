#include <iostream>
using namespace std;
int main(){
    int array[] = {2,5,3,1,4};
    int aux;
    for(int i = 0;i<4;i++){
        for(int j = 0;j<4;j++){
            if(array[j]>array[j+1]){
                aux = array[j];
                array[j] = array[j+1];
                array[j+1] = aux;
            }
        }
    }
    cout<<"Orden ascendente: ";
    for(int i = 0;i<5;i--){
        cout<<array[i];
    }
    
    return 0;
}
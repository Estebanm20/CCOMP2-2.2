#include <iostream>
using namespace std;
int suma(const int array[], int tam){
    long suma = 0;
    for(int i = 0; i<tam; suma += array[i++]);
    return suma;
}
void print(const int array [], int tam){
    for(int i = 0; i<tam; i++){
        cout<<array[i]<<"  ";
    }
}
void printrec(const int array[],int tam, int ini = 0){
    if(tam==0)
    
    return;

    else{
        cout<<array[ini]<<" ";
        printrec(array,--tam,++ini);
    }
}
int sumarec(const int array[], int tam, long suma = 0){
    if(suma==0)
    return 1;
    {
        for(int i = 0; i<suma;suma += array[i++]){
            cout<<"Suma de elementos es: "<<array[suma]<<" ";
            sumarec(array,--tam,suma);
        }
    }
}
int main(){
    int arr [] = {1,2,3,4,5,6,7};
    cout<<"Suma de elementos: "<<suma(arr, 7)<<endl;
    ///print(arr,7);
    printrec(arr,7);
    cout<<"\nSumarec: "<<sumarec(arr,7);
    return 0;
}
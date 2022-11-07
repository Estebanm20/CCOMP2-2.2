#include <iostream>
using namespace std;

/* Investigar sobre el método de ordenamiento 
burbuja e implementarlo para ordenar un arreglo de Enteros
*/
void swap(int &x, int &y){
    int t = x;
    x = y;
    y = t;
}
/// bubble sort 
void bubble(int arr[], int tam){
    for(int i = 0; i <tam ;i++){
        for(int j = 0; j<tam-1 ;j++){

            if(arr[j] > arr[j+1]){
                swap( arr[j], arr[j+1]);
            }
        }
    }        
}

/// Insertionsort

void  insertionsort(int arr [], int tam){
    int i,k,j;
    for(int i = 0; i<tam; i++){
        k = arr[i];
        j -= 1;

        while (j >= 0 && arr[j]>k){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = k;
    }
}


void print(int arreglo[], int tam){
    cout<<"(";
    for(int i = 0; i<tam;i++){
        cout<<arreglo[i]<<" ";
    }
}
int main(){

    int arreglo[] = {21,65,98,15};
    ///bubble(arreglo,4);
    insertionsort(arreglo,4);
    print(arreglo,4);

    return 0;
}
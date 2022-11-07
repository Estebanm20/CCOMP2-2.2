#include <iostream>
using namespace std;

void cuboPorReferencia(int* ptr){
    *ptr = *ptr * *ptr * *ptr;
}
void intercambio(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;

}
//cambio de valores de 2 numeros usando punteros
int main(){
    //int y = 4;
    //cuboPorReferencia(&y);

    //cout<<y<<endl;

    int x = 20;
    int y = 40;
    intercambio( &x,&y);
    cout<<"x: "<<x<<endl;
    cout<<"y: "<<y<<endl;

    return 0;
}
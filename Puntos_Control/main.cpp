#include <iostream>

using namespace std;

template<typename T>
class DynamicArray;

template<typename T>
ostream& operator<<(ostream &output, const DynamicArray<T> &o){
    output << "[ ";
    for(int i = 0; i < o.getSize(); i++)
        output << o.elems[i] << " ";
    output << "]";
    return output;
}

template<typename T>
class DynamicArray
{
    public:
        DynamicArray();
        DynamicArray(const T pts[], const int size);
        DynamicArray(DynamicArray &o);
        ~DynamicArray();

        

        void print();
        int getSize() const;
		
        void clear();
		void push_back(const T &p);
		void insert(const int, const T &);
		void remove(const int);

    private:
        int size;
        T *elems;
		void resize(int);
        friend ostream& operator<<<>(ostream &output, const DynamicArray<T> &o);
};

template<typename T>
DynamicArray<T>::DynamicArray()
{
    this->size = 0;
    this->elems = new T[size];
}

template<typename T>
DynamicArray<T>::DynamicArray(const T pts[], const int size) {
    this->size = size;
    this->elems = new T[size];
    for(int i = 0; i < size; i++)
        elems[i] = pts[i];
}

template<typename T>
DynamicArray<T>::DynamicArray(DynamicArray &o){
    this->size = o.size;
    this->elems = new T[size];
    for(int i = 0; i < size; i++)
        elems[i] = o.elems[i];
}

template<typename T>
int DynamicArray<T>::getSize() const{
    return size;
}

template<typename T>
void DynamicArray<T>::resize(int newSize){
	T *pts = new T[newSize];
	int minsize = (newSize > size) ? size : newSize;
	for(int i = 0; i < minsize; i++)
		pts[i] = elems[i];
	delete[] elems;
	size = newSize;
	elems = pts;
}

template<typename T>
void DynamicArray<T>::clear() {
	resize(0);
}

template<typename T>
void DynamicArray<T>::push_back(const T &p) {
	resize(size+1);
	elems[size-1] = p;
}

template<typename T>
void DynamicArray<T>::insert(const int pos, const T &p) {
	resize(size + 1);
	for(int i = size -1; i < pos; i--)
		elems[i] = elems[i-1];
	elems[pos] = p;
}

template<typename T>
void DynamicArray<T>::remove(const int pos) {
	if (pos >= 0 && pos < size)
    {
        for (size_t i = pos; i < size; i++)
        {
            elems[i] = elems[i+1];
        }
        resize(size-1);
    }
}

template<typename T>
DynamicArray<T>::~DynamicArray()
{
    delete[] elems;
}

class Polygon{
protected:
   int width, height;
public:
   Polygon(int a,int b): width(a), height(b) {}
   virtual float area()=0;

   void printarea(){
      cout<<this->area()<<"\n";
   }
};

class Triangle: public Polygon{
private:
public:
   Triangle(int a,int b): Polygon(a,b) {}
   float area(){return width*height/2.0;}
};

class Rectangle: public Polygon{
private:
public:
   Rectangle(int a,int b): Polygon(a,b) {}
   float area(){return width*height;}
};

void showAreas(Polygon* poly[],int i){
   cout<<"Area del poligono "<<i+1<<": "<<poly[i]->area()<<endl;;
}

int main(){
   Polygon* polygons[5];

   polygons[0]=new Triangle(1,2);
   polygons[1]=new Triangle(4,5);
   polygons[2]=new Triangle(8,6);
   polygons[3]=new Rectangle(2,6);
   polygons[4]=new Rectangle(9,7);

   DynamicArray<Polygon*> da(polygons,5);
   cout<<da<<endl;

   for(int i=0;i<5;i++){
      showAreas(polygons,i);
   }
}
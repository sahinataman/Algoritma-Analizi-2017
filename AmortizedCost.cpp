#include <iostream>

using namespace std;

class Sinifim{
    int array[10];
    int index;
    public:
        Sinifim(){
            index=0;
        }

        void add(int x);
        void print();

        Sinifim & operator=(Sinifim & x);
        int getDiziEleman(int i);
        int getIndex(){
            return index;
        }
};

void Sinifim::add(int x){
    Sinifim::array[index]=x;
    Sinifim::index++;
}

void Sinifim::print(){
    for(int i=0; i< index; i++)
        cout << array[i]<<" ";
    cout<< endl;
}

int Sinifim::getDiziEleman(int x){
    return array[x];
}

Sinifim & Sinifim::operator=(Sinifim &x){
        Sinifim yeni;
        for(int i=0; i<x.getIndex(); i++){
            this->add(x.getDiziEleman(i));
        }
        return yeni;
}

int main()
{
    Sinifim a,b;

    a.add(2);
    a.add(5);
    a.add(8);
    a.add(90);

    //a.print();
    b=a;
    b.print();

    cout <<"Karmaiklik (Step sayisi) = " << "O(" << b.getIndex() << ") =O(n) " << endl;
    return 0;
}

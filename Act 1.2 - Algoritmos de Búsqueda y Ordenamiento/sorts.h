#ifndef SORTS_H
#define SORTS_H

#include <iostream>
#include <vector>
#include <list>
using namespace std;

template <class T>
class Sorts {
    private:
        void swap(vector<T> &, int, int);
    public:
        vector<T> ordenaSeleccion(const vector<T>&);
        vector<T> ordenaBurbuja(const vector<T>&);
        vector<T> ordenaMerge(const vector<T>&);
        int busqSecuencial(const vector<T>&, int d);
        int busqBinaria(const vector<T>&, int d);
};

template <class T>
void Sorts<T>::swap(vector<T> &vec, int i, int ref){
    T aux = vec[i];
    vec[i] = vec[ref];
    vec[ref] = aux;
}

template <class T>
vector<T> Sorts<T>::ordenaSeleccion(const vector<T> &v){
    vector<T> vec(v);
    int ref;
    for (int i = vec.size() - 1; i > 0; i --){
        ref = 0;
        for (int j = 1; j <= i; j ++){
            if (vec[j] > vec[ref]){
                ref = j;
            }
        }
        if (ref != i){
            swap(vec, i, ref);
        }
    }
    return vec;
}

template <class T>
vector<T> Sorts<T>::ordenaBurbuja(const vector<T>&v){
    vector<T> vec(v);
    for (int i = vec.size() - 1; i > 0; i --){
        for (int j = 0; j < i; j ++){
            if (vec[j] > vec[j + 1]){
                swap(vec, j, j + 1);
            }
        }
    }
    return vec;
}

template <class T>
vector<T> Sorts<T>::ordenaMerge(const vector<T>&v){
    vector<T> vec(v);

}

#endif
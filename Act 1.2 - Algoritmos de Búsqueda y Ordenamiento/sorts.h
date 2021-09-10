#ifndef SORTS_H
#define SORTS_H

#include <iostream>
#include <vector>
#include <list>
using namespace std;

template <class T>
class Sorts {
    private:
        void swap(vector<T> &vec, int i, int ref);
    public:
        void ordenaSeleccion(vector<T>&);
        void ordenaBurbuja(vector<T>&);
        void ordenaMerge(vector<T>&);
        int busqSecuencial(const vector<T>&, int d);
        int busqBinaria(vector<T>&, int d);
};

template <class T>
void Sorts<T>::swap(vector<T> &vec, int i, int ref){
    T aux = vec[i];
    vec[i] = vec[ref];
    vec[ref] = aux;
}

template <class T>
void Sorts<T>::ordenaSeleccion(vector<T> &vec){
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
}

template <class T>
void Sorts<T>::ordenaBurbuja(vector<T>&vec){
    for (int i = vec.size() - 1; i > 0; i --){
        for (int j = 0; j < i; j ++){
            if (vec[j] > vec[j + 1]){
                swap(vec, j, j + 1);
            }
        }
    }
}

template <class T>
void Sorts<T>::ordenaMerge(vector<T>&v){
}

template <class T>
int Sorts<T>::busqSecuencial(const vector<T>&vec, int d){
    for(int i = 1; i < vec.size(); i ++){
        if (d == vec[i]){
            return i;
        }
    }
    return -1;
}

template <class T>
int Sorts<T>::busqBinaria(vector<T>&vec, int d){
    ordenaBurbuja(vec);
    int i = 0;
    int j = vec.size();
    while (i <= j){
        int mid = (i + j) / 2;
        if (d == vec[mid]){
            return mid;
        }
        else if (d > vec[mid]){
            i = mid + 1;
        }
        else if (d < vec[mid]){
            j = mid - 1;
        }
    }
    return -1;
}

#endif
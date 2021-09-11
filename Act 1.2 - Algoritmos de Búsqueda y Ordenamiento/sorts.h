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
        void copyArray(vector<T>&, vector<T>&, int, int);
        void mergeArray(vector<T>&vec, vector<T>&tmp, int low, int mid, int high);
        void mergeSplit(vector<T>&vec, vector<T>&tmp, int low, int high);
    public:
        void ordenaSeleccion(vector<T>&vec);
        void ordenaBurbuja(vector<T>&vec);
        void ordenaMerge(vector<T>&vec);
        int busqSecuencial(const vector<T>&vec, int d);
        int busqBinaria(vector<T>&vec, int d);
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
void Sorts<T>::copyArray(vector<T>&vec, vector<T>&tmp, int low, int high){
    for (int i = low; i <= high; i++){
        vec[i] = tmp[i];
    }
}

template <class T>
void Sorts<T>::mergeArray(vector<T>&vec, vector<T>&tmp, int low, int mid, int high){
    int i, j, k;
    i = low;
    j = mid + 1;
    k = low;

    while(i <= mid && j <= high){
        if (vec[i] < vec[j]){
            tmp[k] = vec[i];
            i ++;
        }
        else{
            tmp[k] = vec[j];
            j ++;
        }
        k ++;
    }
    if (i > mid){
        for (; j <= high; j++){
            tmp[k++] = vec[j];
        }
    }
    else{
        for (; i <= mid; i++){
            tmp[k++] = vec[i];
        }
    }
}

template <class T>
void Sorts<T>::mergeSplit(vector<T>&vec, vector<T>&tmp, int low, int high){
    int mid;

    if ((high - low) < 1){
        return;
    }
    mid = (high + low) / 2;
    mergeSplit(vec, tmp, low, mid);
    mergeSplit(vec, tmp, mid + 1, high);
    mergeArray(vec, tmp, low, mid, high);
    copyArray(vec, tmp, low, high);
}

template <class T>
void Sorts<T>::ordenaMerge(vector<T>&vec){
    vector<T> tmp(vec.size());
    mergeSplit(vec, tmp, 0, vec.size() - 1);
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
#ifndef LIST_H
#define LIST_H

#include <string>
#include <sstream>

using namespace std;

template <class T> class List;

template <class T>
class Link {
    private:
        Link(T);
        Link(T, Link<T>*);
        Link(const Link<T>&);
        T value;
        Link<T> *next;
        
        friend class List<T>;
};

template <class T>
Link<T>::Link(T val) : value(val), next(0) {};

template <class T>
Link<T>::Link(T val, Link* nxt) : value(val), next(nxt) {};

template <class T>
Link<T>::Link(const Link<T> &source) : value(source.value), next(source.next) {};

template <class T>
class List {
    public:
        List();
        List(const List<T>&);

        string toString() const;
        T removeFirst();

        void insertion(T);
        int search(T);
        void update(int index, T);
        T deleteAt(int index);

    private:
        Link<T> *head;
        int size;
};

template <class T>
List<T>::List() : head(0), size(0) {};

template <class T>
void List<T>::insertion(T data) {
    Link<T> *newL, *p;

    newL = new Link<T>(data);
    
    if(head == 0) {
        newL -> next = head;
        head = newL;
        size++;
    }
    else {
        p = head;
        while (p -> next != 0) {
            p = p -> next;
        }
        newL -> next = 0;
        p -> next = newL;
        size++;
    }
}

template <class T>
int List<T>::search(T data){
    int pos = 0;
    Link<T> *nd;

    nd = head;
    while(nd != 0){
        if(nd -> value == data){
            return pos;
        }
        nd = nd -> next;
        pos ++;
    }
    return -1;
}

template <class T>
void List<T>::update(int index, T data) {
    int pos = 0;
    Link<T> *nd;

    nd = head;
    while(nd != 0){
        if(pos == index){
            nd -> value = data;
            break;
        }
        nd = nd -> next;
        pos ++;
    }
}

template <class T>
T List<T>::removeFirst(){
    T val;
    Link<T> *p;

    p = head;
    head = p -> next;
    val = p -> value;

    delete p;
    size--;
    return val;
}

template <class T>
T List<T>::deleteAt(int index){
    int pos = 1;
    T data;
    Link<T> *nd;
    Link<T> *sd;

    if(index == 0){
        return removeFirst();
    }
    nd = head;
    sd = head -> next;
    while(pos != index){
        nd = sd;
        sd = sd -> next;
        pos ++;
    }
    data = sd -> value;
    nd -> next = sd -> next;
    size --;
    delete sd;
    return data;
}

template <class T>
string List<T>::toString() const {
	stringstream aux;
	Link<T> *p;

	p = head;
	aux << "[";
	while (p != 0) {
		aux << p->value;
		if (p->next != 0) {
			aux << ", ";
		}
		p = p->next;
	}
	aux << "]";
	return aux.str();
}

#endif
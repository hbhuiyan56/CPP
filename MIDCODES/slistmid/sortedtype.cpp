#include "sortedtype.h"
using namespace std;

template<class T>
SortedType<T>::SortedType() {
    length = 0;
    currentPos = -1;
}

template<class T>
void SortedType<T>::MakeEmpty() {
    length = 0;
}

template<class T>
bool SortedType<T>::IsFull() {
    return (length == MAX_ITEMS);
}

template<class T>
int SortedType<T>::LengthIs() {
    return length;
}

template<class T>
void SortedType<T>::ResetList() {
    currentPos = -1;
}

template<class T>
void SortedType<T>::GetNextItem(T &item) {
    currentPos++;
    item = info[currentPos];
}

template<class T>
void SortedType<T>::InsertItem(T item) {
    int i;
    for (i = 0; i < length; i++) {
        if (item < info[i]) {
            break;
        }
    }
    for (int j = length; j > i; j--) {
        info[j] = info[j - 1];
    }
    info[i] = item;
    length++;
}


template<class T>
void SortedType<T>::DeleteItem(T item) {
    int i = 0;
    for (i = 0; i < length; i++) {
    if(item == info[i]){
        break;           // Stop
    }
}
    for (int j = i + 1; j < length; j++) {
        info[j - 1] = info[j];
    }
    length--;
}


template<class T>
void SortedType<T>::RetrieveItem(T &item, bool &found) {
    int midPoint;
    int first = 0;
    int last = length - 1;
    found = false;
    while (first <= last && !found) {
        midPoint = (first + last) / 2;
        if (item < info[midPoint]) {
            last = midPoint - 1;
        }
        else if (item > info[midPoint]) {
            first = midPoint + 1;
        }
        else {
            found = true;
            item = info[midPoint];
        }
    }
}

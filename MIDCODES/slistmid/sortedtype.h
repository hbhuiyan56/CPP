#ifndef SORTEDTYPE_H_INCLUDED
#define SORTEDTYPE_H_INCLUDED
const int MAX_ITEMS = 5;

template<typename T>
class SortedType {

    public :
        SortedType();
        void MakeEmpty();
        bool IsFull();
        int LengthIs();
        void InsertItem(T);
        void DeleteItem(T);
        void RetrieveItem(T &, bool &);
        void ResetList();
        void GetNextItem(T &);

    private:
        int length;
        int currentPos;
        T info[MAX_ITEMS];
};

#endif // SORTEDTYPE_H_INCLUDED

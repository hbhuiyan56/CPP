#ifndef TIMESTAMP_H_INCLUDED
#define TIMESTAMP_H_INCLUDED

#include <iostream> // <--- ADD THIS LINE

using namespace std;

class timeStamp
{

public:
    timeStamp();
    timeStamp(int, int, int);
    bool operator == (timeStamp);
    bool operator != (timeStamp);
    bool operator > (timeStamp);
    bool operator < (timeStamp);
    friend ostream &operator << (ostream &, timeStamp &); // Now knows what 'ostream' is
    friend istream &operator >> (istream &, timeStamp &); // Now knows what 'istream' is

private:
    int s, m, h;
};

#endif // TIMESTAMP_H_INCLUDED

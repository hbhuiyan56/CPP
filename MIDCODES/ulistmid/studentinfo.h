#ifndef STUDENTINFO_H_INCLUDED
#define STUDENTINFO_H_INCLUDED

#include<bits/stdc++.h>
using namespace std;

class studentInfo {

    private:
        int id;
        string name;
        double cgpa;

    public:
        studentInfo();
        studentInfo(int);
        studentInfo(int, string, double);
        bool operator==(studentInfo s);
        bool operator!=(studentInfo s);
        friend ostream &operator<<(ostream &, studentInfo &);

};

#endif // STUDENTINFO_H_INCLUDED

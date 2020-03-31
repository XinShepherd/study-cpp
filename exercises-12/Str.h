//
// Created by Fuxin on 2020/3/31.
//

#ifndef STUDY_CPP_STR_H
#define STUDY_CPP_STR_H


#include <iostream>
#include "../exercises-11/Vec.h"

class Str {
    friend std::istream &operator>>(std::istream &, Str);

public:
    Str &operator+=(const Str &str){
        std::copy(str.data.begin(), str.data.end(), std::back_inserter(data));
        return *this;
    }

    typedef Vec<char>::size_type size_type;

    Str(){}
    Str(size_type n, char c):data(n, c){}

    Str(const char *cp){
        std::copy(cp, cp + std::strlen(cp), std::back_inserter(data));
    }

    template<class In>
    Str(In i, In j){
        std::copy(i, j, std::back_inserter(data));
    }

    char&operator[](size_type i){
        return data[i];
    }

    const char&operator[](size_type i) const {
        return data[i];
    }

    size_type size() const {
        return data.size();
    }

private:
    Vec<char> data;

};

std::ostream& operator<< (std::ostream&, const Str&);

Str operator+(const Str &, const Str &);


#endif //STUDY_CPP_STR_H

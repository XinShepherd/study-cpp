//
// Created by Fuxin on 2020/3/24.
//

#ifndef STUDY_CPP_VEC_H
#define STUDY_CPP_VEC_H


#include <cstddef>
#include <memory>
#include <cmath>
#include <opencl-c.h>

using std::allocator;


template <class T> class Vec {
public:
    typedef T* iterator;
    typedef const T* const_iterator;
    typedef size_t size_type;
    typedef T value_type;
    Vec() { create(); }
    ~Vec() { uncreate(); };
    explicit Vec(size_type n, const T& val= T()) { create(n, val); }
    T& operator [](size_type i) { return data[i]; }
    const T& operator[](size_type i) const { return data[i]; }
    size_type size() const { return limit - data; }
    iterator begin(){ return data; };
    const_iterator begin() const { return data; };
    iterator end(){ return limit; }
    const_iterator end() const { return limit; }
    void push_back(const T& val) {
        if (avail == limit)
            grow();
        unchecked_append(val);
    }

    void clear(){ uncreate(); }

private:
    iterator data;
    iterator avail;
    iterator limit;
    allocator<T> alloc;

    void create();

    void create(size_type, const T &);

    void create(const_iterator, const_iterator);

    void uncreate();

    void grow();

    void unchecked_append(const T&);
};

template<class T>
void Vec<T>::create() {
    data = avail = limit = 0;
}

template<class T>
void Vec<T>::create(Vec::size_type n, const T & val) {
    data = alloc.allocate(n);
    limit = avail = data + n;
    std::uninitialized_fill(data, limit, val);
}

template<class T>
void Vec<T>::create(Vec::const_iterator i, Vec::const_iterator j) {
    data = alloc.allocate(i, j);
    limit = avail = std::uninitialized_copy(i, j, data);
}

template<class T>
void Vec<T>::uncreate() {
    if (data) {
        iterator it = avail;
        while (it != data) {
            alloc.destroy(--it);
        }
        alloc.deallocate(data, limit - data);
    }
    data = avail = limit = 0;
}

template<class T>
void Vec<T>::grow() {
    size_type new_size = max(2(limit - data), ptrdiff_t(1));
    iterator new_data = alloc.allocate(new_size);
    iterator new_avail = std::uninitialized_copy(data, avail, new_data);
    uncreate();
    data = new_data;
    avail = new_avail;
    limit = new_data + new_size;
}

template<class T>
void Vec<T>::unchecked_append(const T & val) {
    alloc.construct(avail++, val);
}


#endif //STUDY_CPP_VEC_H

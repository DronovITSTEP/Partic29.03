#pragma once
#include <iostream>

template<class T>
class Pair {
	T a;
	T b;
public:
	Pair(T t1, T t2);
};

template <class T>
Pair<T>::Pair(T t1, T t2) : a{t1}, b{t2}{}

template <class T>
class Trio : public Pair <T> {
	T c;
public:
	Trio(T t1, T t2, T t3);
};

template<class T>
Trio<T>::Trio(T t1, T t2, T t3) : Pair<T>(t1, t2), c{t3} {}
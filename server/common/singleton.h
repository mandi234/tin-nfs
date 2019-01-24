//
// Created by azablock on 13.01.19.
//

#ifndef KAMIL_SINGLETON_H
#define KAMIL_SINGLETON_H

template <typename T> class Singleton {
public:
    static T& instance() {
        static T _instance;
        return _instance;
    }

protected:
    Singleton() {}
    ~Singleton() {}

public:
    Singleton(Singleton const &) = delete;
    Singleton& operator=(Singleton const &) = delete;
};




#endif //KAMIL_SINGLETON_H

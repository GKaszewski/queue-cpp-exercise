#ifndef QUEUE_HPP
#define QUEUE_HPP

#include <vector>

template <class T>
class Queue {
public:
    Queue<T>(){}
    ~Queue<T>(){}

    bool isEmpty() {
        return data.empty();
    }
    
    void push(const T & obj) {
        data.push_back(obj);
    }
    
    int size(){
        return data.size();
    }
    
    T pop(){
        T element;
        if(!data.empty()) {
            element = data.front();
            data.erase(data.begin());
            return element;
        }
        data.pop_back();
        return element;
    }

private:
    std::vector<T> data;
};

#endif
#include <iostream> 
#include "queue.hpp"

int main(){
    std::cout << "Hello my new AudioTune program!\n";
    std::cout << "Add new integer to the Queue!\n";
    int someInt = 10;
    Queue<int> queue;
    std::cout << "Queue capacity: \t" << queue.size() << std::endl;
    queue.push(someInt);
    someInt = 12;
    queue.push(someInt);
    someInt = 30;
    queue.push(someInt);
    std::cout << "Queue capacity: \t" << queue.size() << std::endl;
    std::cout << "Poping the item. Its value: \t" << queue.pop() << std::endl;
    std::cout << "Poping the item. Its value: \t" << queue.pop() << std::endl;
    std::cout << "Poping the item. Its value: \t" << queue.pop() << std::endl;
    std::cout << "Poping the item. Its value: \t" << queue.pop() << std::endl;
    std::cout << "Poping the item. Its value: \t" << queue.pop() << std::endl;
    return 0;
}
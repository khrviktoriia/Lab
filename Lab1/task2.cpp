#include <iostream>
#include <thread>

void Thread1() {
    std::cout << "1" << std::endl;
}

void Thread2() {
    std::cout << "2" << std::endl;
}

int main() {
    std::thread t1(Thread1);
    std::thread t2(Thread2);

    t1.detach();
    t2.detach();

    std::this_thread::sleep_for(std::chrono::milliseconds(100));

    return 0;
}

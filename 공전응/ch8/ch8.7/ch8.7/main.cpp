//  main.cpp
//  ch8.7
//  Created by 박재완 on 2021/05/19.
#include <iostream>
using namespace std;
//제공되는 클래스 코드
class BaseMemory{
    char *mem;
protected:
    BaseMemory(int size) { mem = new char [size]; }
    void set_mem(char *x){
        mem = x;
    }
    void put_mem(int i, char copy){
        mem[i] = copy;
    }
    char get_mem(int i){
        return mem[i];
    }
};

//class 선언
class ROM : public BaseMemory{
    public:
    ROM(double mem_size, char *y, int arry_size):BaseMemory(mem_size){
        set_mem(y);
    }
    char read(unsigned int mem){
        char memory = get_mem(mem);
        return memory;
    }
};

class RAM : public BaseMemory {
public:
    RAM(int mem_size) : BaseMemory(mem_size){;}
    void write(int i, char rom_mem){
        put_mem(i, rom_mem);
    }
    char read(int i){
        char mem = get_mem(i);
        return mem;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here... 원하는 동작 코드
    char x[5] = {'h', 'e', 'l', 'l', 'o'};
    ROM biosROM(1024*10, x, 5); // 10KB의 ROM 메모리. 배열 x로 초기화됨
    RAM mainMemory(1024*1024); // 1MB의 ROM 메모리
    
    // 0 번지에서 4번지까지 biosRom에서 읽어 mainMemory에 복사
    for(int i=0; i<5; i++) mainMemory.write(i, biosROM.read(i));
    for(int i=0; i<5; i++) cout << mainMemory.read(i);
    cout << endl;
    return 0;
}

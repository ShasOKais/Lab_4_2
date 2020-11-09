#ifndef DATA_H
#define DATA_H

class Data {
private:
    int value = 10;
public:
    Data() = default;
    void setValue(int value){
        if(value  % 2 == 1){
            this->value = value + 1;
        } else {
            this->value = value;
        }
    }
    int getValue(){
        return value;
    }
};

#endif // DATA_H

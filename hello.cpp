#include <stdio.h>
#include <string.h>
#include <windows.h>

class Component{
public:
    Component(const char* chr,int pri):price(pri){
        strcpy(name,chr);
        totalPrice += pri;
        print();
    }
    void print(){
        printf("---------------|-------\n");
        printf("%14s | %d\n",name,price);
        return;
    }
    static int totalPrice;
private:
    char name[10];
    int price;
};
int Component::totalPrice = 0;

int main() {
    printf("%14s | 价格\n","名称");
    Component cpu("i5_9400F",1100);
    Component gpu("GTX1660ti",2100);
    Component ssd("ssd_512G_M2",500);
    Component disk("disk_1T",280);
    Component power("power_600W",300);
    Component screen("screen",700);
    Component mainborad("mainborad",700);
    Component memory("memory",800);
    printf("---------------|-------\n");
    printf("%14s | %d\n","总价",Component::totalPrice);
    system("pause");
}
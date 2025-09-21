#include <iostream>

using namespace std;

void p25(){
    int x = 10;
    int y = 20;

    bool is_x = true;
    bool is_y = false;

    if(is_x == true && is_y == true)
        cout<<"is_x && is_y = "<<"true"<<endl;
    else
        cout<<"is_x && is_y = "<<"false"<<endl;
    
    if(x==10||is_x==false)
        cout<<"x가 10이거나 is_x가 false입니다"<<endl;
    else
        cout<<"x가 10이 아니고 is_x도 true입니다"<<endl;
    
    if(!is_y)
        cout<<"is_y 원래 값은 false입니다"<<endl;
    else
        cout<<"is_y 원래 값은 true입니다"<<endl;
}
void p26(){
    int x = 1;
    int y = 2;
    int z = 0;

    z=x>y?x:y;

    cout<<"x와 y중 더 큰 값은 :"<<z<<endl;
    return;
}
void p27(){
    int goguryeo = 37, baekjae = 18, silla = 57;

    printf("삼국 건국연도\n");
    printf("고구려 bc%d년, 백제 bc%d년, 신라 bc%d년\n",goguryeo, baekjae, silla);
}
void p28(){
    bitset<8> bit1;
    bit1.reset();
    bit1=127;//0111 1111

    bitset<8> bit2;
    bit2.reset();
    bit2=0x20;//32

    bitset<8> bit3 = bit1 & bit2;
    bitset<8> bit4 = bit1 | bit2;
    bitset<8> bit5 = bit1 ^ bit2;
    bitset<8> bit6 = ~bit1;
    bitset<8> bit7 = bit2 << 1;
    bitset<8> bit8 = bit2 >> 1;

    cout<<"bit1&bit2:"<<bit3<<","<<bit3.to_ulong()<<endl;
    cout<<"bit1|bit2:"<<bit4<<","<<bit4.to_ulong()<<endl;
    cout<<"bit1^bit2:"<<bit5<<","<<bit5.to_ulong()<<endl;
    cout<<"~bit1:"<<bit6<<","<<bit6.to_ulong()<<endl;
    cout<<"bit2<<1:"<<bit7<<","<<bit7.to_ulong()<<endl;
    cout<<"bit2>>1:"<<bit8<<","<<bit8.to_ulong()<<endl;   
}
void p29(){
    int x = 2;
    double y = 4.4;

    int i = static_cast<int>(y/x);
    int j = (int)y/x;
    double k = y/x;

    cout <<"4.4 / 2 = (static_cast<int>)"<<i<<endl;
    cout <<"4.4 / 2 = (int)" << j <<endl;
    cout <<"4.4 / 2 = "<<k<<endl;
}
void p30(){

    int number1=65;
    double number2=23.4;

    int number3=int(number2);
    double number4=double(number1/number2);

    char ch = char(number1);

    cout<<"number1:"<<number1<<endl;
    cout<<"number2:"<<number2<<endl;
    cout<<"number3:"<<number3<<endl;
    cout<<"number4:"<<number4<<endl;
    cout<<"ch:"<<ch<<endl;
}
class Temp{
    int no;
    bool is_on;
};
void p31(){
    cout<<"char 크기:"<<sizeof('p')<<endl;
    cout<<"int 크기:"<<sizeof(10)<<endl;
    cout<<"double 크기:"<<sizeof(10.0)<<endl;
    cout<<"class 크기:"<<sizeof(Temp)<<endl;
}
void p32(){

}
void p33(){

}

int main(){
    //p25();
    //p26();
    //p27();
    //p28();
    //p29();
    p30();
    p31();
    //p32();
    //p33();
    return 0;
}
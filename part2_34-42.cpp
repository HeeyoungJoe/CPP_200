#include<iostream>
#include<string>
using namespace std;

void p34(){
    int number = 7;

    for(int i = 0;i<10;i++){
        if(i%3==0)
            continue;
        else if(i==number)
            break;
        else
            cout<<"현재 i 값:"<<i<<endl;
    }
}
void p35(){
    string str = "The Jin state was formed in southern Korea by the 3rd century BC";
    char find = 'a';

    int size = str.size();
    int count = 0;

    for(int i = 0;i<size;i++){
        if (str[i]==find)
            count++;
    }

    cout<<"문장의 a 개수는 "<<count<<"개 입니다"<<endl;
}
void p36(){

    int data[10] = {5,19,76,3,10,89,54,43,2,17};

    for(int i = 0;i<10;i++){
        if(data[i]%2==0)
            cout<<i<<" : "<<data[i]<<"는 짝수입니다."<<endl;
        else
            cout<<i<<" : "<<data[i]<<"는 홀수입니다."<<endl;
    }
}
void p37(){

}
void p38(){

}
void p39(){

}
void p40(){

}
void p41(){

}
void p42(){

}

int main(){
    //p34();
    //p35();
    p36();
    //p37();
    //p38();
    //p39();
    //p40();
    //p41();
    //p42();
    return 0;
}
#include <iostream>

using namespace std;

void p16(){
    char ch1 = 'c';
    //char ch2 =  200;

    unsigned char ch3 = 'c';
    //unsigned char ch4 = 200;

    printf("char ch1 = %c, %d\n",ch1, ch1);
    //printf("char ch2 = %c, %d\n",ch2, ch2);
    printf("char ch3 = %c, %d\n",ch3, ch3);
    //printf("char ch4 = %c, %d\n",ch4, ch4);
}

void p17(){
    string my_country = "korea";
    string my_job = "developer";

    cout<<"Country : "<<my_country<<endl;
    cout<<"Job : "<<my_job<<endl;

    string my_info = my_country + "," + my_job;

    cout<<"My Info : "<<my_info<<endl;

}
void p18(){
    int positive = 100;
    int negative = -200;
    int ascii_value = 'A';

    cout <<"양수 값: " << positive <<endl;
    cout <<"음수 값: " << negative <<endl;
    cout <<"아스키 값: " << ascii_value<<endl;
}

void p19(){
    double pi_d = 3.14;
    float pi_f = 3.14f;

    cout <<"pi_d: "<<pi_d<<endl;
    cout <<"pi_f: "<<pi_f<<endl;

}

void p20(){
    int x = 10;
    int y = 6;

    bool is_true = false;

    if (x>y){
        is_true = true;
    }
    else{
        is_true = false;

    }

    if (is_true == true){
        cout <<"x는 y보다 큽니다"<<endl;
    }
    else{
        cout<<"x는 y보다 작습니다"<<endl;
    }

}

void p21(){
    int x = -1;
    int y = 9;
    int z = x + y;

    double i = 1.2;
    double j = 2.3;
    double k = i + j;

    cout << "x+y= "<<z<<endl;
    cout <<"i+j="<<k<<endl;
}
void p22(){
    int x =1;
    int y = -1;
    int z = -2;

    cout<<"1+(-1)="<<x+y<<endl;
    cout<<"-1+-2="<<y+z<<endl;
}

void p23(){
    int x = 1;

    cout<<"x="<<x++<<endl;
    cout<<"x="<<x++<<endl;
    cout<<"x="<<++x<<endl;
    cout<<"x="<<x--<<endl;
    cout<<"x="<<x--<<endl;
    cout<<"x="<<--x<<endl;
}

void p24(){
    string publisher = "정보문화사";
    string language = "C++";

    int x = 10;
    int y = 10;

    if(publisher !=language){
        cout<<"두 문장은 같지 않습니다."<<endl;

    }
    else
        cout<<"두 문장은 같습니다."<<endl;
    
    if (x>=y)
        cout<<"x는 y보다 크거나 같습니다"<<endl;
    else
        cout<<"x는 y보다 작습니다"<<endl;
    
    if(x<=20)
        cout<<"x는 20보다 작거나 같습니다"<<endl;
    else
        cout<<"x는 20보다 큽니다"<<endl;

}
int main(){
    //p16();
    //p17();
    //p18();
    //p19();
    //p20();
    //p21();
    //p22();
    //p23();
    p24();
    return(0);
}
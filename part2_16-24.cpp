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

int main(){
    //p16();
    p17();
    //p18();
    //p19();
    //p20();
    //p21();
    //p22();
    //p23();
    //p24();
    return(0);
}
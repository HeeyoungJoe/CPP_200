#include <iostream>

using namespace std;
/*
<Commandline for running code>
g++ (filenam) -o (outputname)
./(outputname)
*/

/*001 Starting C++ programming*/
int p_001(){
    cout << "Hello C++ World!" <<endl;

    return 0;
}

/*002 Output on console*/
int p_002(){
    int number = 0;
    cin >> number;
    cout << "input number is " << number << "!" << endl;

    return 0;
}

/*003 Learn variables*/
int p_003(){
    int one = 1;
    int two = 2;
    int sum = one+two;
    cout << "1 + 2 = " << sum << endl;

    return 0;
}

/*004 Learn const*/
int p_004(){
    const int GREATE_VICTORY_SALSU = 612;
    const int GREATE_VICTORY_GWIJU = 1019;

    cout << "Goguryeo Salsu War Year : " << GREATE_VICTORY_SALSU << " A.C." << endl;
    cout << "Goguryeo Gwiju War Year : " << GREATE_VICTORY_GWIJU << " A.C." << endl;

    return 0;
}

/*005 Learn basic math*/
int p_005(){
    int one = 1;
    int two = 2;
    int three = 3;
    int four = 4;

    cout << "1+3 = " << one + three << endl;
    cout << "4-2 = " << four - two << endl;
    cout << "2*3 = " << two * three << endl;
    cout << "4/2 = " << four / two << endl;

    return 0; 
}

/*006 Learn abbreviated math symbols*/
int p_006(){
    int two = 2;
    int eight = 8;
    int sum1 = 2;
    int sum2 = 2;

    sum1 = sum1 + two;
    sum2 += eight; 

    cout << "sum1 = " << sum1 << endl;
    cout << "sum2 = " << sum2 << endl;

    sum1 = 2;
    sum2 = 8;
    sum1 += two;
    sum2 /= eight;

    cout << "sum1 = " << sum1 << endl;
    cout << "sum2 = " << sum2 << endl;

    return 0;
}

/*007 Learn datatype*/
int p_007(){
    char character = 'C';
    int integer = 100;
    double precision = 3.14159;
    bool is_true = true;
    string word = "Hello world";

    cout << "char: " << character << endl;
    cout << "int: " << integer << endl;
    cout << "double: " << precision << endl;
    cout << "bool: " << is_true << endl;
    cout << "string: " << word << endl;

    return 0;
}

/*008 Learn conditional statement*/
int p_008(){
    int x = 100;
    int y = 1;
    if (x > y)
        cout << "x is bigger than y " << endl;
    else 
        cout << "x is less than y " << endl;

    return 0;
}

/*009 Learn loops*/
int p_009(){
    int sum1 = 0;
    int sum2 = 0;

    int one = 1;
    int two = 2;

    for (int i = 0; i < 5; i++){
        sum1 += one;
        sum2 += two;
    }

    cout << "sum: " << sum1 << " , " << sum2 << endl;

    return 0;
}

/*010 Learn array*/
int p_010(){
    // variable / const can both set the length of an array
    const int kArraySize = 3;
    int vArraySize = 3;

    int founding[vArraySize];
    founding[0] = 918;
    founding[1] = 1392;
    founding[2] = 1948;

    cout << "Founding of Goryeo: " << founding[0] << endl;
    cout << "Founding of Joseon: " << founding[1] << endl;
    cout << "Founding of Korea: " << founding[2] << endl;

    return 0;
}

/*011 Learn function*/
void Minus(const int x, const int y){
    cout << "x-y = " << x-y << endl;
}
int Plus(const int x, const int y){
    return x + y;
}
int p_011(){
    Minus(10,5);
    cout << "x+y = " << Plus(2,6) << endl;

    return 0;
}

/*012 Learn comments*/
int p_012(){
    //Code shan't printed
    //cout << "Yeomong war hero Kim Yunhoo, Cheoinseong war 1322 A.C." << endl;

    //Print from 0 to 9
    /*for (int i = 0; i < 10; i++)
        cout << i << ",";*/

    return 0;
}

/*013 Learn namespace*/
namespace silla
{
    int year = 935;

    void CentralArea(){
        cout << "Kyeongsangdo" << endl;
    }
}

namespace baekjae
{
    int year = 660;

    void CentralArea(){
        cout << "Choongcheongdo" << endl;
    }
}

//"using" is like extern. It is not needed if the namespace is declared in the same file 
//using namespace silla;
//using namespace baekjae;

int p_013(){
    cout << "Center of Silla: ";
    silla::CentralArea();
    cout << "End of Silla: " << silla::year << endl;
    cout << "Center of Baekjae: ";
    baekjae::CentralArea();
    cout << "End of Baekjae: " << baekjae::year << endl;

    return 0;
}

/*014 Learn #include*/
#include <vector> // vector seems to be already included... it works without explicitly including it 

int p_014(){
    vector<int> exam;
    exam.push_back(10);
    exam.push_back(20);
    exam.push_back(30);

    for(int i = 0, size = exam.size(); i < size; i ++){
        cout << "vector value: " << exam.at(i) << endl;
    }
    
    return 0;
}

/*015 Understand scoping rule*/
int x = 10;

int Func1(){
    int y = x + 10;
    return y;
}

int Func2(){
    int x = 100;
    return x;
}

int p_015(){
    cout << "y = " << Func1() << endl;
    cout << "x = " << Func2() << endl;
    cout << "x = " << x << endl;

    return 0;
}

int main(){
    p_015();
}


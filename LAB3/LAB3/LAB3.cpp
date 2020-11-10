#include <iostream>
#include <cmath>// модуль для використання математичних функцій
#include <iomanip>//модуль форматування виводу стандартної бібліотеки C++
using namespace std;
int main(){
    float x;
    cout << "Print x: "<<endl;
    cin >> x;
    cout << "Print x: "<<x<<endl;
    float eps = 0.00001;
    //для простоти розуміння введемо змінні a=x/(b*d); d=k!; b=2^k; x1=x^(2*k)
    int k=0;
    double a = 1;// при k=0 a=1/(1*1)=1
    double s = 1;
    float d = 1;//факторіал k!(спочатку дорівнює 0, адже  k=0 -> k!=1)
    float b = 1;//2^0 = 1
    float x1;
    while (a>=eps){
        k=k+1;
        x1=pow(x,2*k);
        b = 2*b;
        d = d*k;
        a = x1/(b*d);
        s = s + a;
        //cout <<setw(10)<<fixed<< setprecision(10) <<"A="<< a<<" S="<< s<<endl;
        //для зручності перевірки даних приберіть коментар на рядку 56
    }
    printf("Значення суми дорівнює S=%-11.10f\nКількість доданків K=%-4d\n", s,k);
    
}

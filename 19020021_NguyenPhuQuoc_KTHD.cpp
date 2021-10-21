#include <iostream>

using namespace std;

int main()
{
    float A,B,C;
    cout<<"Nhập giá sản phẩm: "; cin>>A;
    cout<<"Nhập số lượng sản phẩm: "; cin>>B;
    cout<<"Nhập thuế VAT: "; cin>>C;
    if ((A<=0)||(B<=0)||(C<0)||(C>=1)){
        cout<<"Input error";
        return 0;
    }
    cout<<"Thành tiền: ";
    if (A<=100){
        if (B<=10){
            cout<< A*B*(1+C);
        }  else
        if (B<=50){
            cout<< A*B*0.95*(1+C);
        } else {
            cout<< A*B*0.9*(1+C);
        }
    } else
    if (A<=500){
        if (B<=5){
            cout<< A*B*(1+C);
        }  else
        if (B<=45){
            cout<< A*B*0.9*(1+C);
        } else {
            cout<< A*B*0.8*(1+C);
        }
    } else {
        if (B<=3){
            cout<< A*B*(1+C);
        }  else
        if (B<=30){
            cout<< A*B*0.87*(1+C);
        } else {
            cout<< A*B*0.7*(1+C);
        }
    }
    return 0;
}


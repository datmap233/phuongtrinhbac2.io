#include <bits/stdc++.h>
using namespace std;
void giaiPTBac2(float a, float b, float c){
    {
        if (a==0)//chia trường hợp, đầu tiên là trường hợp các hệ số bằng 0 (giải như cấp 3)
        {
            if (b==0){//trong a =0 thì có trường hợp b=0 nữa
                cout<<"Phuong trinh vo nghiem"<<endl;
        }
        else//nếu b khác 0 thì phương trình về dạng bx+c=0
        {
            cout<<"Phuong trinh co mot nghiem duy nhat la: x = "<<(-c/b);
        }
        return;
    }
    float denta=b*b-4*a*c;//Trường hợp 2 là giải theo cách giải denta như cấp 3
    float x1;
    float x2;
    if (denta>0)//điều kiện để có 2 nghiệm phân biệt
    {
        x1=(-b+sqrt(denta))/(2*a);
        x2=(-b-sqrt(denta))/(2*a);
        cout<<"Phuong trinh co hai nghiem phan biet la: x = "<<x1<<" hoac x = "<<x2;
    }
    else
        if (denta==0)//điều kiện có 2 nghiệm kép
        {
            x1=x2=(-b/(2*a));
            cout<<"Phuong trinh co nghiem kep la: x= "<<x1;
        }
        else//nếu không nằm ở 2 trường hợp trên tức là đen ta <0 nên phương trình vô nghiệm
        {
            cout<<"Phuong trinh vo nghiem";
        }
    }
}
int main ()
{
    float a, b, c;
    cout<<"Nhap a: ";
    cin>>a;
    cout<<"Nhap b: ";
    cin>>b;
    cout<<"Nhap c: ";
    cin>>c;
    giaiPTBac2(a, b, c);//gọi chương trình khởi tạo ở trước int main ()
    return 1;
}

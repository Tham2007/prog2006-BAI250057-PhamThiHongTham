#include<bits/stdc++.h>
using namespace std;
int main()
{
/*Bài 1
Nhập một số từ bàn phím, kiếm tra số đó là chẵn hay lẻ. In ra màn hình*/
cout<<"Bai 1: "<<endl;
int n;
cout<<"Nhap mot so: ";
cin>>n;
if(n%2==0)
    cout<<"So vua nhap la so chan"<<endl;
else
    cout<<"So vua nhap la so le"<< endl;
/*bài 2*/
cout<<"----------------Bai 2: -----------"<<endl;
float H, W;
cout<<"Nhap chieu cao: ";
cin>>H;
cout<<"Nhap chieu rong: ";
cin>>W;
float S=H*W;
cout<<"Dien tich hinh chu nhat la: "<<S <<endl;
/*bài 3*/
cout<<"----------------Bai 3: -----------"<<endl;
int a;
cout<<"Nhap so a: ";
cin>>a;
for(int i=a; i>=1; i--)
{
    cout<<i<<endl;
}
/*bài 4*/
cout<<"----------------Bai 4: -----------"<<endl;
int c,d;
cout<<"Nhap so c: ";
cin>>c;
cout<<"Nhap so d: ";
cin>>d;
if(c==0)
{
    cout<<"day khong phai phuong trinh bac nhat"<< endl;
}
else
{
    float x=-d/c;
    cout<<"Nghiem cua phuong trinh la: "<<x<< endl;
}
/*bai 5*/
cout<<"----------------Bai 5: -----------"<<endl;
int x;
cout<<"nhap vao so luong phan tu:";
cin >> x;
int so[x];
for(int i=0; i<x; i++){
    cout<<"nhap vao phan tu thu "<<i+1<<":";
    cin >> so[i];
}
int maxx=so[0];
for(int i=0; i<x; i++)
{
    if(so[i]>maxx)
        maxx=so[i];
}
cout<<"so lon nhat la: "<<maxx<< endl;
/* bai 6*/
cout<<"----------------Bai 6: -----------"<<endl;
int ngay;
cout<<"Nhap vao so ngay: ";
cin>>ngay;
switch (ngay)
{
    case 1:
        cout<<"Hom nay la thu 2"<<endl;
        break;
    case 2:
        cout<<"Hom nay la thu 3"<<endl;
        break;
    case 3:
        cout<<"Hom nay la thu 4"<<endl;
        break;
    case 4:
        cout<<"Hom nay la thu 5"<<endl;
        break;
    case 5:
        cout<<"Hom nay la thu 6"<<endl;
        break;
    case 6:
        cout<<"Hom nay la thu 7"<<endl;
        break;
    case 7:
        cout<<"Hom nay la chu nhat" <<endl;
        break;
    default:
        cout<<"So ngay khong hop le"<<endl;
}
/*Bài 7*/
cout<<"----------------Bai 7: -----------"<<endl;
int k;
cout<<"Nhap vao so k: ";
cin>>k;
cout<<"tong cac so tu 1 den k la: "<<(k*(k+1))/2;
    return 0;
}
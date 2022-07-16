#include<iostream>
using namespace std;
class report_data
{
    float ch,tri,hdl,ldl;
public:
    float s_ch()
    {
        cout<<"\n\n \t ENTER YOUR S.CHORESTROL (in mg/dl) : ";
        cin>>ch;
    }
    float s_tri()
    {
        cout<<"\n   \t ENTER YOUR S.TRIGLYCERIDE(in mg/dl) : ";
        cin>>tri;
    }
    float s_hdl()
    {
        cout<<"\n   \t ENTER YOUR S.HDL (in mg/dl) : ";
        cin>>hdl;
    }
    float s_ldl()
    {
        cout<<"\n   \t ENTER YOUR S.LDL (in mg/dl) : ";
        cin>>ldl;
    }
};

class A
{
public:
    void a()
        {
          cout<<a;
        }
};
class B : public A
{
    public:
        void b()
        {
          cout<<b;
        }


};

int main()
{
    A obj;
    obj.a();

    cout<<"\n\n\t\t\t---------------------Welcome to your Diet Planner---------------------"<<endl;
    cout<<"\t\t\t(kindly enter in digits form only)"<<endl;
    report_data p1;
    p1.s_ch();
    p1.s_tri();
    p1.s_hdl();
    p1.s_ldl();
    cout<<"\n\n\n\n\t\t\tThank you for entering your data it is under processing"<<endl;
    cout<<"\t\t\tGetting your diet ready..."<<endl;
    return 0;
}







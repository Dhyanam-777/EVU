#include<iostream>
using namespace std;
class report_data
{
public:
    float ch,tri,hdl,ldl;
    int age;
    float data()
    {
        cout<<"\n \t ENTER YOUR S.CHORESTROL (in mg/dl) : ";
        cin>>ch;
        cout<<"\n   \t ENTER YOUR S.TRIGLYCERIDE(in mg/dl) : ";
        cin>>tri;
        cout<<"\n   \t ENTER YOUR S.HDL (in mg/dl) : ";
        cin>>hdl;
        cout<<"\n   \t ENTER YOUR S.LDL (in mg/dl) : ";
        cin>>ldl;
    }
    int in_age()
    {
        cout<<"\n   \t ENTER YOUR AGE:";
        cin>>age;
    }
};
//class s_tri
int main()
{
    cout<<"\n\n\t\t\t---------------------Welcome to your Diet Planner---------------------"<<endl;
    cout<<"\t\t\t(kindly enter in digits form only)"<<endl;
    report_data p1;
    p1.in_age();
    p1.data();
    cout<<"\n\n\n\n\t\t\tThank you for entering your data it is under processing"<<endl;
    cout<<"\t\t\tGetting your diet ready..."<<endl;
    return 0;
}







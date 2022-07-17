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

    void test_tri()
    {
        cout<<tri;
    if(tri >0 && tri<150){
        cout<<"\nYOUR S.TRIGLYCERIDE LEVEL IS NORMAL";
    }
    else if(tri>150 && tri<=199){
        cout<<"\nYOUR S.TRIGLYCERIDE LEVEL IS BODERLINE";
    }
    else if(tri>=200){
        cout<<"\nYOUR S.TRIGLYCERIDE LEVEL IS HIGH";
    }
    else
        cout<<"\nENTER VALID DATA";
    }

    void inc_satfat()
    {
        if(ldl<100 && hdl<60 && tri>0){
            cout<<"\n\n\t#**  YOUR DIET IS AS FOLLOW:  **#\n";
            cout<<"\t** OIL **: PALM OIL/ COCONUT OIL/ OLIVE OIL/ SUNFLOWER OIL/ SOYABEAN OIL/\n\t** DAIRY PRODUCTS** : DARK CHOCOLATE/ BUTTER/ CHEESE/ CREAM/ BUTTERMILK\n\t** NON-VEG ** : SARDINE(FISH)/ BEEF/ LAMB/ PORK\n\t** DRY FRUITS ** : ALMONDS/ WALNUTS/ PEANUT\n\t** MUST ** : OATS/ AVACADO/ MILLET/ CHICKPEA/ GREEN-PEA"<<endl;
        }
    }
};

int main()
{
    cout<<"\n\n\t\t\t---------------------Welcome to your Diet Planner---------------------"<<endl;
    cout<<"\t\t\t(kindly enter in digits form only)"<<endl;
    report_data p1;
    p1.in_age();
    p1.data();
    cout<<"\n\t\t\t------------------------------------------------------------------------"<<endl;
    p1.test_tri();
    p1.inc_satfat();
    cout<<"\n\n\n\n\t\t\tThank you for entering your data it is under processing"<<endl;
    cout<<"\t\t\tGetting your diet ready..."<<endl;
    return 0;
}







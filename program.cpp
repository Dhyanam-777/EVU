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
        cout<<"\n   \t ENTER YOUR AGE: ";
        cin>>age;
    }
    void test_tri()
    {
        cout<<"\n\t\t\t#** REPORT **#\n"<<endl;
    if(tri>0 && tri<150){
        cout<<"\t\t\tYOUR S.TRIGLYCERIDE LEVEL IS NORMAL.\n";
    }
    else if(tri>150 && tri<=199){
        cout<<"\t\t\tYOUR S.TRIGLYCERIDE LEVEL IS BODERLINE.\n";
    }
    else if(tri>=200){
        cout<<"\t\t\tYOUR S.TRIGLYCERIDE LEVEL IS HIGH.\n";
    }
    else
        cout<<"\t\t\tENTER VALID DATA.\n";
    }

    void test_hdl()
    {
        if(hdl>0 && hdl<60)
        {
            cout<<"\t\t\tYOUR S.HDL LEVEL IS LOW.\n";

        }
        else if(hdl>=60){
            cout<<"\t\t\tYOUR S.HDL LEVEL IS NORMAL.\n";

        }
        else
        cout<<"\t\t\tENTER VALID S.HDL LEVEL.\n"<<endl;
    }

    void test_ldl()
    {
        if(ldl>0 && ldl<=100)
        {
            cout<<"\t\t\tYOUR S.LDL LEVEL IS NORMAL.\n";

        }
        else if(ldl >= 101 && ldl < 129){
            cout<<"\t\t\tYOUR S.LDL LEVEL IS SUB-OPTIMUM.\n";
        }
        else if(ldl > 129 && ldl < 160){
            cout<<"\t\t\tYOUR S.LDL LEVEL IS BORDERLINE HIGH.\n";
        }
        else if(ldl > 159){
            cout<<"\t\t\tYOUR S.LDL LEVEL IS HIGH.\n";
        }
        else
        cout<<"\t\t\tENTER VALID S.LDL LEVEL.\n"<<endl;
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
    p1.test_hdl();
    p1.test_ldl();
    p1.inc_satfat();
    cout<<"\n\n\n\n\t\t\tThank you for entering your data it is under processing"<<endl;
    cout<<"\t\t\tGetting your diet ready..."<<endl;
    return 0;
}







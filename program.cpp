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
        void diet1()
    {
        cout<<"\n\nOIL:\n\t\tOLIVE OIL, SOYBEAN OIL, SUNFLOWER OIL, COCONUT OIL.\n\nDAIRY PRODUCT:\n\t\tDARK CHOCOLATE.\n\nDRY FRUITS:\n\t\tPEANUTS.\n\nMUST:\n\t\tEGGPLANT (BRINJAL), OKRA (LADIES FINGER), BLUEBERRIES, BLACKBERRIES, BROWN RICE, CEREALS, BLACK BEANS, KIDNEY BEANS, CHICK PEAS, GREEN PEAS.\n\n\n\t* NOTE *\n\t\tQUIT SMOKING.\n ";
    }

    void diet2()
    {
        cout<<"\n\nOIL:\n\t\tOLIVE OIL, SOYBEAN OIL, SUNFLOWER OIL, COCONUT OIL.\n\nDAIRY PRODUCT:\n\t\tDARK CHOCOLATE.\n\nDRY FRUITS:\n\t\tALMONDS, WALNUTS, PEANUTS.\n\nMUST:\n\t\tEGGPLANT (BRINJAL), OKRA (LADIES FINGER), AVOCADO, APPLE, GRAPES, STRAWBERRY, BLUEBERRIES, BLACKBERRIES, OAT MEAL, OAT BRAN, BARLEY, BROWN RICE, SOY, MILLET, BLACK BEANS, KIDNEY BEANS, CHICK PEAS, GREEN PEAS.\n\nNON-VEG:\n\t\tSALMON, SHRIMP, SARDINES, ANCHORIES, MACKEREL, TROUT, HERRING.\n\n* NOTE *\n\t\tQUIT SMOKING.\n";
    }

    void diet3()
    {
        cout<<"\n\tFOLLOW YOUR CURRENT DIET.\n";
    }

    void diet4()
    {
        cout<<"\n\nOIL:\n\t\tOLIVE OIL, SOYBEAN OIL, SUNFLOWER OIL, COCONUT OIL.\n\nDAIRY PRODUCT:\n\t\tDARK CHOCOLATE.\n\nDRY FRUITS:\n\t\tALMONDS, WALNUTS, PEANUTS.\n\nMUST:\n\t\tEGGPLANT (BRINJAL), OKRA (LADIES FINGER), AVOCADO, APPLE, GRAPES, STRAWBERRY, OAT MEAL, OAT BRAN, BARLEY, BROWN RICE, SOY, MILLET, BLACK BEANS, KIDNEY BEANS, CHICK PEAS, GREEN PEAS.\n\nNON-VEG:\n\t\tSALMON, SHRIMP, SARDINES, ANCHORIES, MACKEREL, TROUT, HERRING.\n";
    }

    void tri_diet()
    {
        cout<<"\n\tOAT MEAL, OAT BRAN, APPLE, BANANA, ORANGE, PEAR, PRUNES, KIDNEY BEAN, LIMA BEAN, CHICK PEAS.\n\n* NOTE *\n\t\tAVOID EXCESS SUGAR.\n\t\tCONTROL WEIGHT.\n\t\tDO REGULAR EXCERCISE.\n";
    }
};

int main()
{
    int a,b,c;
    cout<<"\n\n\t\t\t---------------------Welcome to your Diet Planner---------------------"<<endl;
    cout<<"\t\t\t(kindly enter in digits form only)"<<endl;
    report_data p1;
    p1.in_age();
    p1.data();
    cout<<"\n--------------------------------------------------------------------------------------------"<<endl;
    c = p1.test_tri();
    b = p1.test_ldl();
    a = p1.test_hdl();

    cout<<"\n\n\n\n\t\t\tThank you for entering your data it is under processing"<<endl;
    cout<<"\t\t\tGetting your diet ready..."<<endl;

    if(a==0 && b==0)
    p1.diet1();
    else if(a==0 && b==1)
    p1.diet2();
    else if(a==1 && b==0)
    p1.diet3();
    else if(a==1 && b==1)
    p1.diet4();
    if(c==1)
    p1.tri_diet();

    return 0;
}

}







#include<iostream>
using namespace std;
class report_data
{
public:
    float ch,tri,hdl,ldl;
    int age;
    float data()
    {
        cout<<"\n   \t ENTER YOUR S.CHOLESTEROL (in mg/dl) : ";
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
    int test_tri()
    {
        cout<<"\n\t\t\t#** REPORT **#\n"<<endl;

    if(tri>0 && tri<150){
        cout<<"\t\t\tYOUR S.TRIGLYCERIDE LEVEL IS NORMAL.\n";
        return 0;
    }
    else if(tri>150 && tri<=199){
        cout<<"\t\t\tYOUR S.TRIGLYCERIDE LEVEL IS BODERLINE.\n";
        return 1;
    }
    else if(tri>=200){
        cout<<"\t\t\tYOUR S.TRIGLYCERIDE LEVEL IS HIGH.\n";
        return 1;
    }
    else
        cout<<"\t\t\tENTER VALID DATA.\n";
    }

    int test_hdl()
    {
        if(hdl>0 && hdl<60)
        {
            cout<<"\t\t\tYOUR S.HDL LEVEL IS LOW.\n";
            return 1;

        }
        else if(hdl>=60){
            cout<<"\t\t\tYOUR S.HDL LEVEL IS NORMAL.\n";
            return 0;

        }
        else
        cout<<"\t\t\tENTER VALID S.HDL LEVEL.\n"<<endl;
    }

    int test_ldl()
    {
        if(ldl>0 && ldl<=100)
        {
            cout<<"\t\t\tYOUR S.LDL LEVEL IS NORMAL.\n";
            return 0;

        }
        else if(ldl >= 101 && ldl < 129){
            cout<<"\t\t\tYOUR S.LDL LEVEL IS SUB-OPTIMUM.\n";
            return 1;
        }
        else if(ldl > 129 && ldl < 160){
            cout<<"\t\t\tYOUR S.LDL LEVEL IS BORDERLINE HIGH.\n";
            return 1;
        }
        else if(ldl > 159){
            cout<<"\t\t\tYOUR S.LDL LEVEL IS HIGH.\n";
            return 1;
        }
        else
        cout<<"\t\t\tENTER VALID S.LDL LEVEL.\n"<<endl;
    }


    void inc_satfat()
    {
        if(ldl<100 && hdl<60 && tri>0){
            cout<<"\n\n\t#**  YOUR DIET IS AS FOLLOW:  **#\n";
            cout<<"\t** OIL **: PALM OIL/ COCONUT OIL/ OLIVE OIL/ SUNFLOWER OIL/ SOYABEAN OIL/\n\t** DAIRY PRODUCTS** : DARK CHOCOLATE/ BUTTER/ CHEESE/ CREAM/ BUTTERMILK\n\t** NON-VEG ** : SARDINE(FISH)/ BEEF/ LAMB/ PORK\n\t** DRY FRUITS ** : ALMONDS/ WALNUTS/ PEANUT\n\t** MOST RECOMMENDED ** :\n\n\t\tOATS/ AVACADO/ MILLET/ CHICKPEA/ GREEN-PEA"<<endl;
        }
    }
    void diet1()
    {
        cout<<"\n\n\t#**  YOUR DIET IS AS FOLLOW:  **#\n";
        cout<<"\n\n\tOIL:\n\n\t\tOLIVE OIL/ SOYBEAN OIL/ SUNFLOWER OIL/ COCONUT OIL.\n\n\tDAIRY PRODUCT:\n\n\t\tDARK CHOCOLATE.\n\n\tDRY FRUITS:\n\n\t\tPEANUTS.\n\n\tMOST RECOMMENDED:\n\n\t\tEGGPLANT (BRINJAL), OKRA (LADIES FINGER), BLUEBERRIES/ BLACKBERRIES/ BROWN RICE/ CEREALS/ BLACK BEANS/ \n\t\tKIDNEY BEANS/ CHICK PEAS/ GREEN PEAS.\n\n\t* NOTE *\n\n\t\tIGNORE SMOKING.\n ";
    }

    void diet2()
    {
        cout<<"\n\n\t#**  YOUR DIET IS AS FOLLOW:  **#\n";
        cout<<"\n\n\tOIL:\n\n\t\tOLIVE OIL/ SOYBEAN OIL/ SUNFLOWER OIL/ COCONUT OIL.\n\n\tDAIRY PRODUCT:\n\n\t\tDARK CHOCOLATE.\n\n\tDRY FRUITS:\n\n\t\tALMONDS/ WALNUTS/ PEANUTS.\n\n\tMOST RECOMMENDED:\n\n\t\tEGGPLANT (BRINJAL)/ OKRA (LADIES FINGER)/ AVOCADO/ APPLE/ GRAPES/ STRAWBERRY/ BLUEBERRIES/ BLACKBERRIES/ \n\t\tOAT MEAL/ OAT BRAN/ BARLEY/ BROWN RICE/ SOY/ MILLET/ BLACK BEANS/ KIDNEY BEANS/ CHICK PEAS/ GREEN PEAS.\n\n\tNON-VEG:\n\n\t\tSALMON/ SHRIMP/ SARDINES/ ANCHORIES/ MACKEREL/ TROUT/ HERRING.\n\n\t* NOTE *\n\n\t\tIGNORE SMOKING.\n";
    }

    void diet3()
    {
        cout<<"\n\n\t#**  YOUR DIET IS AS FOLLOW:  **#\n";
        cout<<"\n\tFOLLOW YOUR CURRENT DIET.\n";
    }

    void diet4()
    {
        cout<<"\n\n\t#**  YOUR DIET IS AS FOLLOW:  **#\n";
        cout<<"\n\n\tOIL:\n\n\t\tOLIVE OIL/ SOYBEAN OIL/ SUNFLOWER OIL/ COCONUT OIL.\n\n\tDAIRY PRODUCT:\n\n\t\tDARK CHOCOLATE.\n\n\tDRY FRUITS:\n\n\t\tALMONDS/ WALNUTS/ PEANUTS.\n\n\tMOST RECOMMENDED:\n\n\t\tEGGPLANT (BRINJAL)/ OKRA (LADIES FINGER) /AVOCADO/ APPLE/ GRAPES/ STRAWBERRY/ OAT MEAL/ OAT BRAN/ BARLEY/ \n\t\tBROWN RICE/ SOY/ MILLET/ BLACK BEANS/ KIDNEY BEANS/ CHICK PEAS/ GREEN PEAS.\n\n\tNON-VEG:\n\n\t\tSALMON/ SHRIMP/ SARDINES/ ANCHORIES/ MACKEREL/ TROUT/ HERRING.\n";
    }

    void tri_diet()
    {
        cout<<"\n\n\tTO REDUCE S.TRIGLYCERIDE LEVEL:\n";
        cout<<"\n\t\tOAT MEAL/ OAT BRAN/ APPLE/ BANANA/ ORANGE/ PEAR/ PRUNES/ KIDNEY BEAN/ LIMA BEAN/ CHICK PEAS.\n\n\tSEA-FOOD:\n\n\t\tMackerel/ Salmon/ Cod Liver Oil/ Herring/ Oysters/ Sardines/ Anchovies/ Caviar/ \n\t\tIndian Salmon(Rawas)/ Seer Fish(Surmai)/ Shrimp/ Alsi/ Soya bean/ Kidney bean/ Flaxseed  \n\n\t* NOTE *\n\n\t\tAVOID EXCESS SUGAR.\n\t\tCONTROL WEIGHT.\n\t\tDO REGULAR EXCERCISE.\n";
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









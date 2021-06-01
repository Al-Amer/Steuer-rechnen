#include <iostream>
#include <string>
#include "Steuer.c++"
using namespace std;


int main (){
    //vareible.
    int i=1;   // um die porgramm endlos az machen .
    string steuer_einscheid;
    string steuer_sachenangabe;
    string  steuer_symbolie; // A oder B oder A+B.
    double einkaufsbetrag;
    double a;       // Ausnahme for setuer rechnen A+B
    double b;      // Ausnahme for setuer rechnen A+B
    double a1;     // Ausnahme for setuer rechnen A+B
    double b1;     // Ausnahme for setuer rechnen A+B


do{
    cout<<"velche stuer willst rechnen: einkommen/steuer";
    cin>>steuer_einscheid;
     //wort suchen .
    size_t erstewahlen_eikommen_1 = steuer_einscheid.find("einkommen");
    size_t erstewahlen_Einkommen_2 =steuer_einscheid.find("Einkommen");
    size_t zweitewahlen_steuerrechnen_1 = steuer_einscheid.find("steuer");
    size_t zweitewahlen_steuerrechnen_2 = steuer_einscheid.find("Steuer");
    if ( erstewahlen_eikommen_1 == string::npos or erstewahlen_Einkommen_2 == string::npos )
    {
        cout<<"bitte geb die sachen die die steuer rechnen :lebensmittel+getrunken/Alkohol+Anderesachen/Beide:"<<endl;
        cout<<"-";
        cin>>steuer_sachenangabe;
        size_t rechnen_A = steuer_sachenangabe.find("lebensmittel+getrunken");
        size_t rechnen_B = steuer_sachenangabe.find("Alkohol+Anderesachen");
        cout<<"geb bitte die betrag";
        cin>> einkaufsbetrag;
        if (rechnen_B == string::npos )
        {
            steuer_symbolie='A';
            Steuer st( steuer_symbolie, einkaufsbetrag);
            cout<<"for die Betrag"<<einkaufsbetrag;
            st.steuerprint(steuer_symbolie, einkaufsbetrag);
        }else if(rechnen_A==string::npos){
            steuer_symbolie='B';
            Steuer st( steuer_symbolie, einkaufsbetrag);
            cout<<"for die Betrag"<<einkaufsbetrag;
            st.steuerprint(steuer_symbolie, einkaufsbetrag);
        }else
        {
            
            cout<<"bitte gib betrag die lebensmittel+getrunken";
            cin>>a;
            cout<<"bitte jetzt geb betrag die alkohol+Anderesachen ";
            cin>>b;
            a1=a*0.05;
            b1=b*0.19;
            cout<<"for die Betrag"<<einkaufsbetrag;
            cout <<"so muss die stuer , die du bezahlt hast"<<endl;
            cout<<"for dielebensmittel+getrunken: "<<a1<<endl;
            cout<<"for  die alkohol+Anderesachen: "<<b1<<endl;
            cout<<"allgeimein="<<a1+b1<<endl;

        }       
    }
   


    
    




    cout<<"----------------------"<<endl;
    cout<<"bitte geb neue angabe .."<<endl;
  }  while (i==1);

    return 0;
}

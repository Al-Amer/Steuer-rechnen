# Steuer-rechnen
#include <iostream>
#include <string>

using namespace std;

class Steuer{
    public:
            string  steuer_symbolie;
            double einkaufsbetrag;

    Steuer( string steuer_symbolie,double einkaufsbetrag)
    {
         this->steuer_symbolie=steuer_symbolie;
         this->einkaufsbetrag=einkaufsbetrag;
    }
   
   void steuerprint( string steuer_symbolie,double einkaufsbetrag)
   {
       double a;
    if (steuer_symbolie == "A")
    {
       
       a = einkaufsbetrag*0.05;
       
     }else if (steuer_symbolie == "B")
     {
        
        a=einkaufsbetrag*0.19;
       
     }
     else {

     }
     cout <<"so muss die stuer , die du bezahlt hast"<<a<<"$"<<endl;
   }
};

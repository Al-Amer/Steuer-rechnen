#include <iostream>
#include <string>

using namespace std;


class Einkommen_class{
    public:
            double einkommen_A;
            int steuerklasse;
            double jahreseinkommen ;
            double steuer;
    Einkommen_class(double einkomen_A,int steuerklasse){   // class strucur
        this-> einkommen_A = einkommen_A;
        this->steuerklasse = steuerklasse;
    }
    void jahres_gehalt  ()
    {
        jahreseinkommen = einkommen_A * 12;
        cout<<"das ist Ihere jahres gehalt: "<<jahreseinkommen<<endl;
     }

    void einkommenrechnen(){
        
        if (steuerklasse == 1){
            steuer =jahreseinkommen * 0.0818;
        }else if (steuerklasse == 2){
           steuer =jahreseinkommen * 0.0623;
        }else if (steuerklasse == 3){
            steuer = jahreseinkommen * 00;
        }else if (steuerklasse == 4){
            steuer = jahreseinkommen * 0.0818;
        }else if (steuerklasse == 5){
            steuer = jahreseinkommen * 0.1995;
        }else if (steuerklasse == 6){
            steuer = jahreseinkommen * 0.2170;
        }
        cout<<"das ist ihre lohn steuer: "<<steuer<<"$"<<endl;
        
    }
    void versicherung()
    {
           cout <<"Rentenversicherung: "<<jahreseinkommen*0.093<<endl;
           cout<<"Arbeitslosversicherung: "<<jahreseinkommen*0.012<<endl;
           cout<<"Krankenversicherung: "<<jahreseinkommen*0.0795<<endl;
           cout<<"Pflegeversicherung: "<<jahreseinkommen*0.0178<<endl;

    }
    void netto(){
        cout<<"das ist Ihre netto: ";
        cout<<jahreseinkommen-steuer<<endl;
    }





};

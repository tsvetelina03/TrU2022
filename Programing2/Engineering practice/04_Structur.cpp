
#include <iostream>
#include <string>
using namespace std;

int main()
{
    
    struct student{
        string name;
        int fN;
        int kurs;
        string disciplina;
        int ocenka;
    };
    student s1,s2;
    s1.name ="Pesho";
    s1.fN = 100304;
    s1.kurs = 1;
    s1.disciplina = "Programirane";
    s1.ocenka = 6;

    s2.name ="Nasko";
    s2.fN = 100307;
    s2.kurs = 2;
    s2.disciplina = "Programirane";
    s2.ocenka = 3;

    cout<<" _________________________________________"<<endl;
    cout<<" | "<<s1.name<<" | "<<s1.fN<<" | "<<s1.kurs<<" | "<<s1.disciplina<<" | "<<s1.ocenka<<" | "<<endl;
    cout<<" _________________________________________"<<endl;
    cout<<" | "<<s2.name<<" | "<<s2.fN<<" | "<<s2.kurs<<" | "<<s2.disciplina<<" | "<<s2.ocenka<<" | "<<endl;
    cout<<" _________________________________________"<<endl;
    return 0;
}

#include<iostream>
#include<string>

struct nacimiento{
    int dia;
    int mes;
    int anio;
};
struct datos{
    std::string name;
    struct nacimiento fecha;
}personas[100]; 

int main(){

    int n=0;
    do{
        std::cout<<"Ingrese la cantidad de personas (mayor a cero, menor igual a 100): "; std::cin>>n;
        std::cout<<"=====================================================================\n";
    }while(n<=0 || n>100);

    for(int i=0; i<n; i++){
        char sepa;
        std::cin.ignore();

        std::cout<<"Nombre de la persona "<<i+1<<": ";
        std::getline(std::cin, personas[i].name);

        std::cout<<"Fecha de nacimiento de la persona "<<i+1<<": "; 
        std::cin>>personas[i].fecha.dia>>sepa
                >>personas[i].fecha.mes>>sepa
                >>personas[i].fecha.anio;

        std::cout<<"=====================================================================\n";
    }

    for(int i=0; i<n; i++){

        std::cout<<"Nombre: "<<personas[i].name<<"\n";

        std::cout<<personas[i].fecha.dia<<"/"
                <<personas[i].fecha.mes<<"/"
                <<personas[i].fecha.anio<<"\n";

    }
    return 0;
}
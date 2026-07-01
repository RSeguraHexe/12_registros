#include<iostream>
#include<string>
#include<cstdlib>

struct Empleado{
    std::string name;
    char sexo;
    float sueldo;
};

int main(){
    int n; system("cls");
    Empleado empleados[100];
    std::cout<<"Ingrese la cantidad de empleados: "; std::cin>>n;
    std::cin.ignore();
    
    for(int i=0; i<n; i++){
        
        std::cout<<"=====================================================================\n";
        std::cout<<"Nombre del empleado "<<i+1<<": "; std::getline(std::cin, empleados[i].name);
        std::cout<<"Genero del empleado [M/F] "<<i+1<<": "; std::cin>>empleados[i].sexo; 
        std::cout<<"Sueldo del empleado "<<i+1<<": "; std::cin>>empleados[i].sueldo;

        std::cin.ignore();
    }

    float mayor=0; int indicemayor=0;
    for(int i=0; i<n; i++){
        if(empleados[i].sueldo>mayor){
            mayor=empleados[i].sueldo;
            indicemayor=i;
        }
    }
    std::cout<<"=====================================================================\n";
    std::cout<<"Nombre del empleado con mayor sueldo: "<<empleados[indicemayor].name<<"\n"; 
    std::cout<<"Genero de empleado con mayor sueldo: "<<empleados[indicemayor].sexo<<"\n";
    std::cout<<"Sueldo del empleado con mayor sueldo: "<<empleados[indicemayor].sueldo<<"\n";
    std::cout<<"=====================================================================\n";

    float menor=mayor; int indicemenor=0;
    for(int i=0; i<n; i++){
        if(empleados[i].sueldo<menor){
            menor=empleados[i].sueldo;
            indicemenor=i;
        }
    }
    std::cout<<"Nombre del empleado con menor sueldo: "<<empleados[indicemenor].name<<"\n"; 
    std::cout<<"Genero de empleado con menor sueldo: "<<empleados[indicemenor].sexo<<"\n";
    std::cout<<"Sueldo del empleado con menor sueldo: "<<empleados[indicemenor].sueldo<<"\n";
    std::cout<<"=====================================================================\n";

    return 0;
}
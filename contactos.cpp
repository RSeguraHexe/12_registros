#include<iostream>
#include<string>
#include<cstdlib>

struct ContactoEmail{
    std::string nombre;
    char sexo;
    int edad;
    std::string email;
}contact[100];

int main(){

    int k=0;                /* Utilizo K para saber que numero de contacto estoy registrando */

    system("cls");

    std::cout<<"Ingrese su primer contacto! \n\n";

    std::cout<<"Nombre: ";  std::getline(std::cin, contact[0].nombre);
    std::cout<<"Sexo (M/F): ";  std::cin>>contact[0].sexo;
    std::cout<<"Edad: ";    std::cin>>contact[0].edad;   
    std::cout<<"Email: "; std::cin>>contact[0].email;

    std::cout<<"\n\nPerfecto! ya tiene agregado su primer contacto, por favor presione cualquier tecla\npara ir al menu principal.\n\n";

    system("pause");

    k++;
    
    int op=-1;
    do{

        system("cls");

        std::cout<<"============================================================\n";
        std::cout<<"Indique la accion\n";
        std::cout<<"============================================================\n";
        std::cout<<" 1 : Agregar contacto\n";
        std::cout<<" 2 : Mostrar todos los contactos\n";
        std::cout<<" 3 : Modificar contacto\n";
        std::cout<<" 4 : Eliminar contacto\n";
        std::cout<<" 5 : Mostrar los contactos por servidor\n";
        std::cout<<" 6 : Buscar contacto por email\n";
        std::cout<<" 0 : Salir del programa\n";
        std::cout<<"============================================================\n";
        std::cin>>op;


        switch(op){

            case 1: 

                system("cls");
                std::cin.ignore();

                std::cout<<"============================================================\n";
                std::cout<<"Ingrese los datos del contacto\n";
                std::cout<<"============================================================\n";
                std::cout<<"Nombre: ";  std::getline(std::cin, contact[k].nombre);
                std::cout<<"Sexo (M/F): ";  std::cin>>contact[k].sexo;
                std::cout<<"Edad: ";    std::cin>>contact[k].edad;   
                std::cout<<"Email: "; std::cin>>contact[k].email;
                std::cout<<"============================================================\n";
                system("pause");

                k++;        /* Aqui utilizo el K para saber que numero sera mi siguiente contacto agregado */

                break;

            case 2:

                system("cls");

                for(int i=0; i<k; i++){
                    std::cout<<"============================================================\n";
                    std::cout<<"Contacto ["<<i+1<<"]\n\n";

                    std::cout<<"Nombre: "<<contact[i].nombre<<"\n";
                    std::cout<<"Sexo: "<<contact[i].sexo<<"\n";
                    std::cout<<"Edad: "<<contact[i].edad<<"\n";
                    std::cout<<"Email: "<<contact[i].email<<"\n";
                }

                std::cout<<"\n\n";
                system("pause");
                break;

            case 3: 
                int contactoelegido;
                std::cout<<"============================================================\n";
                std::cout<<"Que contacto quiere modificar? (Eliga el numero)";

                for(int i=0; i<k; i++){
                    std::cout<<"============================================================\n";
                    std::cout<<"Contacto ["<<i+1<<"]\n\n";

                    std::cout<<"Nombre: "<<contact[i].nombre<<"\n";
                    std::cout<<"Sexo: "<<contact[i].sexo<<"\n";
                    std::cout<<"Edad: "<<contact[i].edad<<"\n";
                    std::cout<<"Email: "<<contact[i].email<<"\n";
                } 

                std::cin.ignore();
                std::cout<<"============================================================\n";
                std::cout<<"Contacto a modificar: "; std::cin>>contactoelegido; std::cout<<"\n\n";

                system("cls");

                std::cout<<"============================================================\n";
                std::cout<<"Contacto ["<<contactoelegido<<"]\n\n";

                std::cout<<"Nombre: "<<contact[contactoelegido-1].nombre<<"\n";
                std::cout<<"Sexo: "<<contact[contactoelegido-1].sexo<<"\n";
                std::cout<<"Edad: "<<contact[contactoelegido-1].edad<<"\n";
                std::cout<<"Email: "<<contact[contactoelegido-1].email<<"\n";

                std::cout<<"============================================================\n";
                std::cout<<"Modificando...";
                std::cout<<"============================================================\n";
                
                std::cout<<"Nombre: "; std::getline(std::cin, contact[contactoelegido-1].nombre); 
                std::cout<<"Sexo: "; std::cin>>contact[contactoelegido-1].sexo;
                std::cout<<"Edad: "; std::cin>>contact[contactoelegido-1].edad;
                std::cout<<"Email: "; std::cin>>contact[contactoelegido-1].email;
                std::cout<<"============================================================\n";

                system("pause");

                break; 

            case 4: 

                int eliminando=-1;
                char confirmacion='N';

                do{
                    system("cls");

                    std::cout<<"============================================================\n";
                    std::cout<<"Ingrese el numero de contacto que desea eliminar (escriba 0 para salir): "; std::cin>>eliminando;

                    if(eliminando==0){break;}

                    std::cout<<"============================================================\n";
                    std::cout<<"Contacto ["<<eliminando<<"]\n\n";

                    std::cout<<"Nombre: "<<contact[eliminando-1].nombre<<"\n";;
                    std::cout<<"Sexo: "<<contact[eliminando-1].sexo<<"\n";
                    std::cout<<"Edad: "<<contact[eliminando-1].edad<<"\n";
                    std::cout<<"Email: "<<contact[eliminando-1].email<<"\n";
                    std::cout<<"============================================================\n";
                    std::cout<<"Confirmar contacto (S/N): "; std::cin>>confirmacion;

                    if(confirmacion==('S' || 's')){

                        system("cls");

                        for(int i=eliminando-1; i<k-1; i++){
                            contact[i] = contact[i+1];
                        }

                        std::cout<<"============================================================\n";
                        std::cout<<"El contacto ha sido eliminado correctamente";
                        std::cout<<"============================================================\n\n";

                        k--;

                        system("pause");
                    }
                }while(confirmacion==('N' || 'n'));
                
                break; 
        }
    }while(op!=0);
}
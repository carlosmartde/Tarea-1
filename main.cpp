#include <iostream>
#include <stdio.h>

using namespace std;

int main () {
    int opcion;
    do {
        cout << "================MENU================" << endl;
        cout << "OPCION 1.MAYOR DE EDAD O NO" << endl;
        cout << "OPCION 2.CALCULAR QUE NUMERO ES MAYOR" << endl;
        cout << "OPCION 3.CALCULAR SI UN NUMERO ES PAR O IMPAR"<< endl;
        cout << "OPCION 4.CALCULAR EL FACTORIAL DE UN NUMERO" << endl;
        cout << "OPCION 5.NUMEROS IMPARES ENTRE 10 Y 30"<< endl;
        cout << "OPCION 6.CALCULAR QUE DIA DE LA SEMANA ES" << endl;
        cout << "OPCION 7.SALIR" << endl;
        cout<<"SELECCIONA UNA OPCION DEL MENU: "<<endl;
        cin >> opcion;

        switch (opcion) {
            case 1:
                if (opcion==1){
                int edad;
                cout << "HAS SELECCIONADO LA OPCION NUMERO 1" << endl;
                cout << "INGRESA LA EDAD QUE DESEA SABER SI ES MAYOR DE EDAD O NO: " << endl;
                cin >> edad;
                if (edad >= 18) {
                    cout << "SI ES MAYOR DE EDAD" << endl;
                } else {
                    cout << "NO ES MAYOR DE EDAD" << endl;
                }
        }
        break;
        case 2:
            if (opcion==2){
                double numero1;
                double numero2;
                cout<<"HAS SELCCIONADO LA OPCION NUMERO 2"<<endl;
                cout<<"INGRESA EL PRIMER NUMERO: "<<endl;
                cin>>numero1;
                cout<<"INGRESA EL SEGUNDO NUMERO: "<<endl;
                cin>>numero2;
                if (numero1>numero2){
                    cout<<numero1<<" ES EL NUMERO MAYOR"<<endl;
                }else{
                    cout<<numero2<<" ES EL NUMERO MAYOR"<<endl;
                }

            }
            break;
        case 3:
            if (opcion==3){
                int numero;
                cout<<"HAS SELECCIONADO LA OPCION NUMERO 3"<<endl;
                cout<<"INGRESA EL NUMERO QUE DESEAS SABER SI ES PAR O IMPAR: "<<endl;
                cin>>numero;
                if (numero %2 ==0){
                    cout<<numero<<" ES UN NUMERO PAR"<<endl;
                }else{
                    cout<<numero<<" ES UN NUMERO IMPAR"<<endl;
                }
            }
            break;
        case 4:
            if (opcion==4){
                int numero,factorial;
                int i;
                cout<<"HAS SELECCIONADO LA OPCION NUMERO 4"<<endl;
                cout<<"INGRESA EL NUMERO AL QUE DESESA CALCULARLE EL FACTORIAL: "<<endl;
                cin>>numero;
                factorial=1;
                for (i=1; i<=numero; i++)
                    factorial=factorial*i;
                cout<<endl<<"EL FACTORIAL DE "<<numero<<" ES = "<<factorial<<endl;
            }
            break;
        case 5:
            if(opcion==5){
                int numero;
                int i=1;
                int impar=1;
                cout<<"HAS SELCCIONADO LA OPCION NUMERO 5"<<endl;
                cout<<"SELECCIONE UN NUMERO MAYOR QUE 10 Y MENOR QUE 30: "<<endl;
                cin>>numero;
                cout << "LOS NUMEROS IMPARES SON "<<endl;
                for (i=1; i<=numero; i+=2) {
                    cout<<i<<endl;
                }
            }
            break;
        case 6:
            if(opcion==6){
                int dia;
                cout<<"HAS SELECCIONADO LA OPCION 6"<<endl;
                cout<<"INGRESA UN NUMERO ENTRE EL 1 Y EL 5 Y TE DIRE QUE DIA DE LA SEMANA ES: "<<endl;
                cin>>dia;
                switch (dia){
                    case 1:
                        if (dia==1){
                            cout<<"EL DIA DE LA SEMANA ES LUNES"<<endl;
                        }else {
                            break;
                        }
                    case 2:
                        if (dia==2) {
                            cout << "EL DIA DE LA SEMANA ES MARTES" << endl;
                        }else {
                            break;
                        }
                    case 3:
                        if (dia==3) {
                            cout << "EL DIA DE LA SEMANA ES MIERCOLES" << endl;
                            {
                                break;
                            }
                            case 4:
                                if (dia == 4) {
                                    cout << "EL DIA DE LA SEMANA ES JUEVES" << endl;
                                } else {
                                    break;
                                }
                            case 5:
                                if (dia == 5) {
                                    cout << "EL DIA DE LA SEMANA ES VIERNES" << endl;
                                } else {
                                    break;
                                }
                            default:
                                cout << "EL NUMERO QUE INGRESO NO ES VALIDO, PORFAVOR SELECCIONA UN NUMERO VALIDO: "
                                     << endl;
                            break;
                        }
                }
            }
            break;
        case 7:
            break;
        default:
            cout << "LA OPCION QUE HA SELECCIONADO NO ES VALIDA, PORFAVOR SELECCIONE UNA OPCION VALIDA" << endl;
        break;
    }
}while (opcion !=7);






    return 0;
}
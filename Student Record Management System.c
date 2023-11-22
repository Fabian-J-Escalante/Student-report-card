#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

void cargando();
void encabezado();
void regresoMenu();
void pantallaPresentacion();
void opcionIncorrecta();
void capturarBoleta();
void imprimirBoleta();
void buscar();
void eliminar();
void salir();

int main(){
int password, menu, i, a, t=3, alumnos=1, alumnosTotal=0, ciclo=0;

struct agenda{
    struct agendaAlumnos{
        char e_m[30], notas[80], nombre[45], domicilio[30], fracc[30], ciudad[25], sexo[20];
        long long int telefono, cp, edad;
    }aga;
    struct datosAcademicos{
        char carrera[45], escuela[45], calendario[20], centroUniversitario[25], clave[20];
        long long int codigo, creditos;
        int semestre,materias;
        float promedio;
    }da;
}ag[10];

void opcionIncorrecta(){
    puts("\n<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
    printf("\t\t¡¡OPCIÓN INCORRECTA!!");
    puts("\n<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
    Sleep(2000);

}

void encabezado(){
    system("color 8F");
    puts("\n----------------------------------------------------------");
    printf("\t\t AGENDA ALUMNOS");
    puts("\n----------------------------------------------------------");
}

void cargando(){
        for(i=0;i<5;i++){
            system("cls");
            Sleep(100);
            encabezado();
            printf("\nCARGANDO SISTEMA...      \n");
            printf("%i%c\n", i*20+20, 37);
            for(a=0;a<i;a++){
                printf("||||||||");
            }
            Sleep(280);

        }
}

void regresoMenu(){
        system("cls");
        printf("\n    ___                        __         ___    __ ");
        printf("\n   /   | ____ ____  ____  ____/ ____ _   /   |  / __  ______ ___  ____  ____  _____  ");
        printf("\n  / /| |/ __ `/ _  / __  / __  / __ `/  / /| | / / / / / __ `__  / __  / __  / ___/");
        printf("\n / ___ / /_/ /  __/ / / / /_/ / /_/ /  / ___ |/ / /_/ / / / / / / / / / /_/ (__  )");
        printf("\n/_/  |_  _, / ___/_/ /_/ __,_/ __,_/  /_/  |_/_/ __,_/_/ /_/ /_/_/ /_/ ____/____/");
        printf("\n      /____/  ");
        puts("\n\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
        printf("\n\tPRESIONE 1 PARA REGRESAR AL MENÚ PRINCIPAL\n\tPRESIONE 0 PARA SALIR DEL SISTEMA: \n", i);
        scanf("%i",&t);

        while(t<0 || t> 1){
            opcionIncorrecta();
            printf("\n\tPRESIONE 1 PARA REGRESAR AL MENÚ PRINCIPAL\n\tPRESIONE 0 PARA SALIR DEL SISTEMA: \n", i);
            scanf("\n%i",&t);
            system("cls");
        }
    }

void capturarBoleta(){
                system("cls");
                encabezado();
                printf("CAPTURAR BOLETA");
                printf("\nPuede guardar los datos de 1 a 10 alumnos");
                printf("\n¿De cuántos alumnos quiere guardar datos? ");
                scanf("%i", &alumnos);


                while(alumnos < 0 || alumnos > 10){
                    system("cls");
                    encabezado();
                    printf("CAPTURAR BOLETA");
                    printf("\nPuede guardar los datos de 1 a 10 alumnos. El límite son 10 alumnos");
                    printf("\nError. Escoja un número de alumnos entre 1 y 10: ");
                    scanf("%i", &alumnos);
                }
                fflush(stdin);
                alumnosTotal = alumnos + alumnosTotal;

                if(alumnosTotal<11){
                    for(i=ciclo;i<alumnosTotal;i++){
                        system("cls");
                        encabezado();
                        printf("\t\tDATOS PERSONALES");
                        puts("\n----------------------------------------------------------");
                        printf("\nNOMBRE: ");
                        gets(ag[i].aga.nombre);
                        puts("----------------------------------------------------------");
                        fflush(stdin);
                        printf("EDAD: ");
                        scanf("%lld", &ag[i].aga.edad);
                        fflush(stdin);
                        printf("SEXO: ");
                        fflush(stdin);
                        gets(ag[i].aga.sexo);
                        fflush(stdin);
                        printf("DOMICILIO: ");
                        gets(ag[i].aga.domicilio);
                        printf("FRACCIONAMIENTO: ");
                        fflush(stdin);
                        gets(ag[i].aga.fracc);
                        printf("CÓDIGO POSTAL: ");
                        scanf("%lld", &ag[i].aga.cp);
                        fflush(stdin);
                        printf("CIUDAD: ");
                        gets(ag[i].aga.ciudad);
                        fflush(stdin);
                        printf("TELÉFONO: ");
                        scanf("%lld", &ag[i].aga.telefono);
                        fflush(stdin);
                        printf("E-MAIL: ");
                        gets(ag[i].aga.e_m);
                        fflush(stdin);
                        printf("NOTAS: ");
                        gets(ag[i].aga.notas);
                        fflush(stdin);
                        puts("\n----------------------------------------------------------");
                        printf("\t\tDATOS ACADÉMICOS");
                        puts("\n----------------------------------------------------------");
                        printf("ESCUELA: ");
                        gets(ag[i].da.escuela);
                        fflush(stdin);
                        printf("CENTRO UNIVERSITARIO: ");
                        gets(ag[i].da.centroUniversitario);
                        fflush(stdin);
                        printf("CÓDIGO DE ALUMNO: ");
                        scanf("%lld", &ag[i].da.codigo);
                        fflush(stdin);
                        printf("CALENDARIO ESCOLAR: ");
                        gets(ag[i].da.calendario);
                        fflush(stdin);
                        printf("CARRERA: ");
                        gets(ag[i].da.carrera);
                        fflush(stdin);
                        printf("CLAVE DE LA CARRERA: ");
                        gets(ag[i].da.clave);
                        fflush(stdin);
                        printf("SEMESTRE: ");
                        scanf("%i", &ag[i].da.semestre);
                        printf("NÚMERO DE MATERIAS INSCRITAS: ");
                        scanf("%i", &ag[i].da.materias);
                        fflush(stdin);
                        printf("PROMEDIO: ");
                        scanf("%f", &ag[i].da.promedio);
                        fflush(stdin);
                        printf("CRÉDITOS: ");
                        scanf("%lld", &ag[i].da.creditos);
                        fflush(stdin);
                        puts("\n----------------------------------------------------------");
                        ciclo++;
                        system("cls");
                    }
                }

                else{
                    alumnosTotal = alumnosTotal - alumnos;
                    system("cls");
                    encabezado();
                    printf("\nYA SE LLEGÓ AL MÁXIMO DE ALUMNOS \nALUMNOS ACTUALES: %i", alumnosTotal);
                }
                regresoMenu();
                system("cls");
}

void imprimirBoleta(){
            for(i=0;i<alumnosTotal;i++){
                system("cls");
                encabezado();
                puts("\n-----------------------------------------------------------");
                printf("||\t\tDATOS PERSONALES");
                puts("\n||-------------------------------------------------------");
                printf("||NOMBRE: %s", ag[i].aga.nombre);
                printf("\n||EDAD: %lld", ag[i].aga.edad);
                printf("\n||SEXO: %s", ag[i].aga.sexo);
                printf("\n||DOMICILIO: %s", ag[i].aga.domicilio);
                printf("\n||FRACCIONAMIENTO: %s", ag[i].aga.fracc);
                printf("\n||CÓDIGO POSTAL: %lld", ag[i].aga.cp);
                printf("\n||CIUDAD: %s", ag[i].aga.ciudad);
                printf("\n||TELÉFONO: %lld", ag[i].aga.telefono);
                printf("\n||E-MAIL: %s", ag[i].aga.e_m);
                printf("\n||NOTAS: %s", ag[i].aga.notas);
                puts("\n||-------------------------------------------------------");
                printf("||\t\tDATOS ACADÉMICOS");
                puts("\n||-------------------------------------------------------");
                printf("||ESCUELA: %s", ag[i].da.escuela);
                printf("\n||CENTRO UNIVERSITARIO: %s", ag[i].da.centroUniversitario);
                printf("\n||CÓDIGO DE ALUMNO: %lld", ag[i].da.codigo);
                printf("\n||CALENDARIO ESCOLAR: %s", ag[i].da.calendario);
                printf("\n||CARRERA: %s", ag[i].da.carrera);
                printf("\n||CLAVE DE LA CARRERA: %s", ag[i].da.clave);
                printf("\n||SEMESTRE: %i", ag[i].da.semestre);
                printf("\n||NÚMERO DE MATERIAS INSCRITAS: %i", ag[i].da.materias);
                printf("\n||PROMEDIO: %0.2f", ag[i].da.promedio);
                printf("\n||CRÉDITOS: %lld", ag[i].da.creditos);
                puts("\n----------------------------------------------------------");

                printf("\nPresione cualquier tecla para continuar...");
                getch();
            }
            system("cls");
            regresoMenu();
}

void buscar(){
                i=0;
                while(i<1 || i>2){
                    system("cls");
                    encabezado();
                    printf("\t\t   BUSCADOR");
                    puts("\n----------------------------------------------------------");
                    printf("\nBuscar por: \n1.-Registro \n2.-Campo \n");
                    scanf("%i", &i);
                    if (i<1 || i>2){
                        printf("\nError. \nSeleccione una opción correcta");
                    }
                }
                if (i==1){
                    system("cls");
                    encabezado();
                    printf("\t\t   BUSCADOR");
                    puts("\n----------------------------------------------------------");
                    printf("\nIngrese el número de registro del alumno: ");
                    scanf("%i", &i);
                    i--;

                    if(i< 0 || i>=alumnosTotal){
                        printf("\nError. \nNo hay ningún alumno con ese número");
                        Sleep(2000);
                    }

                    else{
                        system("cls");
                        encabezado();
                        printf("\t\tDATOS PERSONALES");
                        puts("\n----------------------------------------------------------");
                        printf("\nNOMBRE: %s", ag[i].aga.nombre);
                        printf("\nEDAD: %lld", ag[i].aga.edad);
                        printf("\nSEXO: %s", ag[i].aga.sexo);
                        printf("\nDOMICILIO: %s", ag[i].aga.domicilio);
                        printf("\nFRACCIONAMIENTO: %s", ag[i].aga.fracc);
                        printf("\nCÓDIGO POSTAL: %lld", ag[i].aga.cp);
                        printf("\nCIUDAD: %s", ag[i].aga.ciudad);
                        printf("\nTELÉFONO: %lld", ag[i].aga.telefono);
                        printf("\nE-MAIL: %s", ag[i].aga.e_m);
                        printf("\nNOTAS: %s", ag[i].aga.notas);
                        puts("\n----------------------------------------------------------");
                        printf("\t\tDATOS ACADÉMICOS");
                        puts("\n----------------------------------------------------------");
                        printf("\nESCUELA: %s", ag[i].da.escuela);
                        printf("\nCENTRO UNIVERSITARIO: %s", ag[i].da.centroUniversitario);
                        printf("\nCÓDIGO DE ALUMNO: %lld", ag[i].da.codigo);
                        printf("\nCALENDARIO ESCOLAR: %s", ag[i].da.calendario);
                        printf("\nCARRERA: %s", ag[i].da.carrera);
                        printf("\nCLAVE DE LA CARRERA: %s", ag[i].da.clave);
                        printf("\nSEMESTRE: %i", ag[i].da.semestre);
                        printf("\nNÚMERO DE MATERIAS INSCRITAS: %i", ag[i].da.materias);
                        printf("\nPROMEDIO: %0.2f", ag[i].da.promedio);
                        printf("\nCRÉDITOS: %lld", ag[i].da.creditos);
                        puts("\n----------------------------------------------------------");
                        printf("\nPresione cualquier tecla para continuar...");
                        getch();
                    }
                }
                else{
                    system("cls");
                    encabezado();
                    printf("\t\t   BUSCADOR");
                    puts("\n----------------------------------------------------------");
                    printf("\nIngrese el número de registro del alumno: ");
                    scanf("%i", &i);
                    i--;

                    if(i< 0 || i>=alumnosTotal){
                        printf("\nError. \nNo hay ningún alumno con ese número");
                        Sleep(2000);
                    }

                    else{
                        system("cls");
                        encabezado();
                        printf("\t\t   BUSCADOR");
                        puts("\n----------------------------------------------------------");
                        printf("\nIngrese el número del campo de su elección: ");
                        printf("\n1.-NOMBRE \n2.-EDAD \n3.-SEXO \n4.-DOMICILIO");
                        printf("\n5.-FRACCIONAMIENTO \n6.-CÓDIGO POSTAL \n7.-CIUDAD \n8.-EMAIL");
                        printf("\n9.-NOTAS \n10.-CÓDIGO DE ALUMNO \n11.-CENTRO UNIVERSITARIO");
                        printf("\n12.-CALENDARIO ESCOLAR \n13.-CARRERA \n14.-CLAVE DE LA CARRERA \n15.-SEMESTRE");
                        printf("\n16.-NÚMERO DE MATERIAS INSCRITAS \n17.-ESCUELA \n18.-PROMEDIO");
                        printf("\n19.-CRÉDITOS \n20.-TELÉFONO \n");
                        scanf("%i", &t);

                        switch(t){
                            case 1:
                                system("cls");
                                encabezado();
                                printf("\nRESULTADO DE LA BUSQUEDA: ");
                                printf("\nNOMBRE: %s", ag[i].aga.nombre);
                                break;
                            case 2:
                                system("cls");
                                encabezado();
                                printf("\nRESULTADO DE LA BUSQUEDA: ");
                                printf("\nEDAD: %lld", ag[i].aga.edad);
                                break;
                            case 3:
                                system("cls");
                                encabezado();
                                printf("\nRESULTADO DE LA BUSQUEDA: ");
                                printf("\nSEXO: %s", ag[i].aga.sexo);
                                break;
                            case 4:
                                system("cls");
                                encabezado();
                                printf("\nRESULTADO DE LA BUSQUEDA: ");
                                printf("\nDOMICILIO: %s", ag[i].aga.domicilio);
                                break;
                            case 5:
                                system("cls");
                                encabezado();
                                printf("\nRESULTADO DE LA BUSQUEDA: ");
                                printf("\nFRACCIONAMIENTO: %s", ag[i].aga.fracc);
                                break;
                            case 6:
                                system("cls");
                                encabezado();
                                printf("\nRESULTADO DE LA BUSQUEDA: ");
                                printf("\nCÓDIGO POSTAL: %lld", ag[i].aga.cp);
                                break;
                            case 7:
                                system("cls");
                                encabezado();
                                printf("\nRESULTADO DE LA BUSQUEDA: ");
                                printf("\nCIUDAD: %s", ag[i].aga.ciudad);
                                break;
                            case 8:
                                system("cls");
                                encabezado();
                                printf("\nRESULTADO DE LA BUSQUEDA: ");
                                printf("\nE-MAIL: %s", ag[i].aga.e_m);
                                break;
                            case 9:
                                system("cls");
                                encabezado();
                                printf("\nRESULTADO DE LA BUSQUEDA: ");
                                printf("\nNOTAS: %s", ag[i].aga.notas);
                                break;
                            case 10:
                                system("cls");
                                encabezado();
                                printf("\nRESULTADO DE LA BUSQUEDA: ");
                                printf("\nCÓDIGO DE ALUMNO: %lld", ag[i].da.codigo);
                                break;
                            case 11:
                                system("cls");
                                encabezado();
                                printf("\nRESULTADO DE LA BUSQUEDA: ");
                                printf("\nCENTRO UNIVERSITARIO: %s", ag[i].da.centroUniversitario);
                                break;
                            case 12:
                                system("cls");
                                encabezado();
                                printf("\nRESULTADO DE LA BUSQUEDA: ");
                                printf("\nCALENDARIO ESCOLAR: %s", ag[i].da.calendario);
                                break;
                            case 13:
                                system("cls");
                                encabezado();
                                printf("\nRESULTADO DE LA BUSQUEDA: ");
                                printf("\nCARRERA: %s", ag[i].da.carrera);
                                break;
                            case 14:
                                system("cls");
                                encabezado();
                                printf("\nRESULTADO DE LA BUSQUEDA: ");
                                printf("\nCLAVE DE LA CARRERA: %s", ag[i].da.clave);
                                break;
                            case 15:
                                system("cls");
                                encabezado();
                                printf("\nRESULTADO DE LA BUSQUEDA: ");
                                printf("\nSEMESTRE: %i", ag[i].da.semestre);
                                break;
                            case 16:
                                system("cls");
                                encabezado();
                                printf("\nRESULTADO DE LA BUSQUEDA: ");
                                printf("\nNÚMERO DE MATERIAS INSCRITAS: %i", ag[i].da.materias);
                                break;
                            case 17:
                                system("cls");
                                encabezado();
                                printf("\nRESULTADO DE LA BUSQUEDA: ");
                                printf("\nESCUELA: %s", ag[i].da.escuela);
                                break;
                            case 18:
                                system("cls");
                                encabezado();
                                printf("\nRESULTADO DE LA BUSQUEDA: ");
                                printf("\nPROMEDIO: %0.2f", ag[i].da.promedio);
                                break;
                            case 19:
                                system("cls");
                                encabezado();
                                printf("\nRESULTADO DE LA BUSQUEDA: ");
                                printf("\nCRÉDITOS: %lld", ag[i].da.creditos);
                                break;
                            case 20:
                                system("cls");
                                encabezado();
                                printf("\nRESULTADO DE LA BUSQUEDA: ");
                                printf("\nTELÉFONO: %lld", ag[i].aga.telefono);
                                break;
                            default:
                                opcionIncorrecta();
                            }
                            printf("\nPresione cualquier tecla para continuar...");
                            getch();
                        }
                    }

                i=0;

                system("cls");
                regresoMenu();
}

void eliminar(){
                i=0;
                while(i<1 || i>2){
                    system("cls");
                    encabezado();
                    printf("\t\t   BORRADOR");
                    puts("\n----------------------------------------------------------");

                    printf("\nBorrar por: \n1.-Registro \n2.-Campo \n");
                    scanf("%i", &i);
                    if (i<1 || i>2){
                        printf("\nError. \nSeleccione una opción correcta");
                    }
                }
                if (i==1){
                    system("cls");
                    encabezado();
                    printf("\t\t   BORRADOR");
                    puts("\n----------------------------------------------------------");

                    printf("\nIngrese el número de registro del alumno: ");
                    scanf("%i", &i);
                    i--;

                    if(i< 0 || i>=alumnosTotal){
                        printf("\nError. \nNo hay ningún alumno con ese número");
                        Sleep(2000);
                    }

                    else{
                        system("cls");
                        encabezado();
                        printf("\nREGISTRO BORRADO CON ÉXITO: ");
                        if(i!=alumnosTotal-1){
                            for(i;i<alumnosTotal;i++){
                                strcpy(ag[i].aga.nombre, ag[i+1].aga.nombre);
                                ag[i].aga.edad = ag[i+1].aga.edad;
                                strcpy(ag[i].aga.domicilio, ag[i+1].aga.domicilio);
                                strcpy(ag[i].aga.sexo, ag[i+1].aga.sexo);
                                strcpy(ag[i].aga.fracc, ag[i+1].aga.fracc);
                                ag[i].aga.cp = ag[i+1].aga.cp;
                                strcpy(ag[i].aga.ciudad, ag[i+1].aga.ciudad);
                                strcpy(ag[i].aga.e_m, ag[i+1].aga.e_m);
                                strcpy(ag[i].aga.notas, ag[i+1].aga.notas);
                                ag[i].da.codigo = ag[i+1].da.codigo;
                                strcpy(ag[i].da.centroUniversitario, ag[i+1].da.centroUniversitario);
                                strcpy(ag[i].da.calendario, ag[i+1].da.calendario);
                                strcpy(ag[i].da.carrera, ag[i+1].da.carrera);
                                strcpy(ag[i].da.clave, ag[i+1].da.clave);
                                ag[i].da.semestre = ag[i+1].da.semestre;
                                ag[i].da.materias = ag[i+1].da.materias;
                                strcpy(ag[i].da.escuela, ag[i+1].da.escuela);
                                ag[i].da.promedio = ag[i+1].da.promedio;
                                ag[i].da.creditos = ag[i+1].da.creditos;
                                ag[i].aga.telefono = ag[i+1].aga.telefono;
                            }
                        }
                        else{
                            ag[i].aga.nombre[0] = 0;
                            ag[i].aga.edad = 0;
                            ag[i].aga.sexo[0] = 0;
                            ag[i].aga.domicilio[0] = 0;
                            ag[i].aga.fracc[0] = 0;
                            ag[i].aga.cp = 0;
                            ag[i].aga.ciudad[0] = 0;
                            ag[i].aga.e_m[0] = 0;
                            ag[i].aga.notas[0] = 0;
                            ag[i].da.codigo = 0;
                            ag[i].da.centroUniversitario[0] = 0;
                            ag[i].da.calendario[0] = 0;
                            ag[i].da.carrera[0] = 0;
                            ag[i].da.clave[0] = 0;
                            ag[i].da.semestre = 0;
                            ag[i].da.materias = 0;
                            ag[i].da.escuela[0] = 0;
                            ag[i].da.promedio = 0;
                            ag[i].da.creditos = 0;
                            ag[i].aga.telefono = 0;
                        }
                        ciclo--;
                        alumnosTotal--;
                        puts("\n----------------------------------------------------------");
                        printf("\nPresione cualquier tecla para continuar...");
                        getch();
                    }
                }
                else{
                    system("cls");
                    encabezado();
                    printf("\t\t   BORRADOR");
                    puts("\n----------------------------------------------------------");

                    printf("\nIngrese el número de registro del alumno: ");
                    scanf("%i", &i);
                    i--;

                    if(i< 0 || i>=alumnosTotal){
                        printf("\nError. \nNo hay ningún alumno con ese número");
                        Sleep(2000);
                    }

                    else{
                        system("cls");
                        encabezado();
                        printf("\t\t   BORRADOR");
                        puts("\n----------------------------------------------------------");
                        printf("\nIngrese el número del campo de su elección para borrar: ");
                        printf("\n1.-NOMBRE \n2.-EDAD \n3.-SEXO \n4.-DOMICILIO");
                        printf("\n5.-FRACCIONAMIENTO \n6.-CÓDIGO POSTAL \n7.-CIUDAD \n8.-EMAIL");
                        printf("\n9.-NOTAS \n10.-CÓDIGO DE ALUMNO \n11.-CENTRO UNIVERSITARIO");
                        printf("\n12.-CALENDARIO ESCOLAR \n13.-CARRERA \n14.-CLAVE DE LA CARRERA \n15.-SEMESTRE");
                        printf("\n16.-NÚMERO DE MATERIAS INSCRITAS \n17.-ESCUELA \n18.-PROMEDIO");
                        printf("\n19.-CRÉDITOS \n20.-TELÉFONO \n");
                        scanf("%i", &t);

                        switch(t){
                            case 1:
                                system("cls");
                                encabezado();
                                printf("\nCAMPO BORRADO CON ÉXITO: ");
                                ag[i].aga.nombre[0] = 0;
                                break;
                            case 2:
                                system("cls");
                                encabezado();
                                printf("\nCAMPO BORRADO CON ÉXITO: ");
                                ag[i].aga.edad = 0;
                                break;
                            case 3:
                                system("cls");
                                encabezado();
                                printf("\nCAMPO BORRADO CON ÉXITO: ");
                                ag[i].aga.sexo[0] = 0;
                                break;
                            case 4:
                                system("cls");
                                encabezado();
                                printf("\nCAMPO BORRADO CON ÉXITO: ");
                                ag[i].aga.sexo[0] = 0;
                                break;
                            case 5:
                                system("cls");
                                encabezado();
                                printf("\nCAMPO BORRADO CON ÉXITO: ");
                                ag[i].aga.fracc[0] = 0;
                                break;
                            case 6:
                                system("cls");
                                encabezado();
                                printf("\nCAMPO BORRADO CON ÉXITO: ");
                                ag[i].aga.cp = 0;
                                break;
                            case 7:
                                system("cls");
                                encabezado();
                                printf("\nCAMPO BORRADO CON ÉXITO: ");
                                ag[i].aga.ciudad[0] = 0;
                                break;
                            case 8:
                                system("cls");
                                encabezado();
                                printf("\nCAMPO BORRADO CON ÉXITO: ");
                                ag[i].aga.e_m[0] = 0;
                                break;
                            case 9:
                                system("cls");
                                encabezado();
                                printf("\nCAMPO BORRADO CON ÉXITO: ");
                                ag[i].aga.notas[0] = 0;
                                break;
                            case 10:
                                system("cls");
                                encabezado();
                                printf("\nCAMPO BORRADO CON ÉXITO: ");
                                ag[i].da.codigo = 0;
                                break;
                            case 11:
                                system("cls");
                                encabezado();
                                printf("\nCAMPO BORRADO CON ÉXITO: ");
                                ag[i].da.centroUniversitario[0] = 0;
                                break;
                            case 12:
                                system("cls");
                                encabezado();
                                printf("\nCAMPO BORRADO CON ÉXITO: ");
                                ag[i].da.calendario[0] = 0;
                                break;
                            case 13:
                                system("cls");
                                encabezado();
                                printf("\nCAMPO BORRADO CON ÉXITO: ");
                                ag[i].da.carrera[0] = 0;
                                break;
                            case 14:
                                system("cls");
                                encabezado();
                                printf("\nCAMPO BORRADO CON ÉXITO: ");
                                ag[i].da.clave[0] = 0;
                                break;
                            case 15:
                                system("cls");
                                encabezado();
                                printf("\nCAMPO BORRADO CON ÉXITO: ");
                                ag[i].da.semestre = 0;
                                break;
                            case 16:
                                system("cls");
                                encabezado();
                                printf("\nCAMPO BORRADO CON ÉXITO: ");
                                ag[i].da.materias = 0;
                                break;
                            case 17:
                                system("cls");
                                encabezado();
                                printf("\nCAMPO BORRADO CON ÉXITO: ");
                                ag[i].da.escuela[0] = 0;
                                break;
                            case 18:
                                system("cls");
                                encabezado();
                                printf("\nCAMPO BORRADO CON ÉXITO: ");
                                ag[i].da.promedio = 0;
                                break;
                            case 19:
                                system("cls");
                                encabezado();
                                printf("\nCAMPO BORRADO CON ÉXITO: ");
                                ag[i].da.creditos = 0;
                                break;
                            case 20:
                                system("cls");
                                encabezado();
                                printf("\nCAMPO BORRADO CON ÉXITO: ");
                                ag[i].aga.telefono = 0;
                                break;
                            default:
                                opcionIncorrecta();
                            }
                            printf("\nPresione cualquier tecla para continuar...");
                            getch();
                        }
                    }

                i=0;

                system("cls");
                regresoMenu();
}

void salir(){
                system("cls");
                encabezado();
                printf("\tELEGISTE LA OPCIÓN SALIR");
                Sleep(1300);
                t = 0;
}


void pantallaPresentacion(){
        system("cls");
        encabezado();
        printf("\n+----------------------------------------------------------+");
        printf("\n|                                                          |");
        printf("\n|                    DATOS PERSONALES                      |");
        printf("\n+----------------------------------------------------------+");
        printf("\n|NOMBRE                                                    |");
        printf("\n|EDAD                                                      |");
        printf("\n|SEXO                                                      |");
        printf("\n|DOMICILIO                                                 |");
        printf("\n|FRACCIONAMIENTO                                           |");
        printf("\n|CÓDIGO POSTAL                                             |");
        printf("\n|CIUDAD                                                    |");
        printf("\n|TELÉFONO                                                  |");
        printf("\n|E-MAIL                                                    |");
        printf("\n|NOTAS                                                     |");
        printf("\n+----------------------------------------------------------+");
        printf("\n|                                                          |");
        printf("\n|                    DATOS ACADÉMICOS                      |");
        printf("\n+----------------------------------------------------------+");
        printf("\n|ESCUELA                                                   |");
        printf("\n|CENTRO UNIVERSITARIO                                      |");
        printf("\n|CÓDIGO DE ALUMNO                                          |");
        printf("\n|CALENDARIO ESCOLAR                                        |");
        printf("\n|CARRERA                                                   |");
        printf("\n|CLAVE DE LA CARRERA                                       |");
        printf("\n|SEMESTRE                                                  |");
        printf("\n|NÚMERO DE MATERIAS INSCRITAS                              |");
        printf("\n|PROMEDIO                                                  |");
        printf("\n|CRÉDITOS                                                  |");
        printf("\n+----------------------------------------------------------+");
        printf("\nNombre del autor: ");
        printf("Fabián Joheshua Escalante Fernández");
        Sleep(2200);
        cargando();
}

setlocale(LC_ALL,"");

while(t>0){
    cargando();
    system("cls");
    encabezado();
    puts("\n\n\t\tESCRIBA SU NIP: (123) \n");

    scanf("%i", &password);
    if (password == 123){
        system("cls");
        cargando();
        pantallaPresentacion();


        do{
            system("cls");
            encabezado();
            printf("\n1.-CAPTURAR BOLETA               &&&&&@#?????#@&");
            printf("\n                                  &&&&@#????G@&&&&&");
            printf("\n2.-IMPRIMIR BOLETA                 &&&@#???5@&&&&&&&&");
            printf("\n                                   &&&@#??JB@&&&&&&&&&");
            printf("\n3.-BUSCAR                        &&&&&@#???J5#@&&&&&&&");
            printf("\n                               &&&&@&BP5?????J&@&&&&&&");
            printf("\n4.-ELIMINAR UN REGISTRO       &&&&@GJ?????????#@&&&&&&");
            printf("\n   O CAMPO                    &&&@&?????????JB@&&&&&&");
            printf("\n                              &&&@@PJ??????P&@&&&&&");
            printf("\n5.-SALIR                        &&&@&BGPPJ?Y&@&&&");
            printf("\n                                  &&&&&@@5??J#@&&&");
            printf("\n                                    &&&&@5???J#@&&&");
            printf("\n                                   &&&&&@5????JB@&&&&");
            printf("\n                                   &&&&&@5??????G@&&&&&");
            printf("\nELIGE UNA OPCIÓN:                 &&&&&&@5???????G@&&&&&\n");
            scanf("%i",&menu);

            switch(menu){

                case 1:
                capturarBoleta();
                break;

                case 2:
                imprimirBoleta();
                break;

                case 3:
                buscar();
                break;

                case 4:
                eliminar();
                break;

                case 5:
                salir();
                break;

                default:
                opcionIncorrecta();

            }
        } while (t > 0);
    }

    else{
        t--;
        if (t>0){
            system("color 8E");
            puts("\n<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
            printf("\t\t¡¡NIP INCORRECTO!! \n\t        TIENE %i INTENTOS MÁS", t);
            puts("\n<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
            Sleep(2000);
        }
        else{
            system("color 8E");
            puts("\n<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
            printf("\tHAS ALCANZADO EL NÚMERO MÁXIMO DE INTENTOS \n\t        EL PROGRAMA SE CERRARÁ");
            puts("\n<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
            Sleep(4000);
        }

    }
}

for(i=0;i<5;i++){
    system("cls");
    encabezado();
    printf("¡GRACIAS POR USAR EL PROGRAMA! TENGA UN BUEN DÍA \nSALIENDO DEL SISTEMA...");
    printf("\n%i%c\n", i*20+20, 37);
    for(a=0;a<i;a++){
        printf("||||||||");
    }
            Sleep(280);
}
system("cls");
return 0;
}

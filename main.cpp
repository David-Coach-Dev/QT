#include "mainwindow.h"
//#include <iostream.h>
#include "stdio.h"
//#include "conio.h"
//#include <dos.h>
#include <ctype.h>
//#include <process.h>
#include <string.h>
#include <QApplication>

/****************************************************************/
/*			  FUNCIONES                                */
/****************************************************************/
int  menu(void);






/****************************************************************/
/*			    MAIN                                */
/****************************************************************/

int main(int argc, char *argv[])
{
    int pos;

            //alarma();
            for( ; ; ){
              pos=menu();
              switch(pos){
                    case  6 :   /*cargar();*/
                                break;
                    case  8 :   /*aniversarios();*/
                                break;
                    case  10 :  /*modificar()*/;
                                break;
                    case  12 :  /*backup()*/;
                                break;
                    case  14 :  /*buscar()*/;
                                break;
                    case  16 :  exit(0);
                }
            }

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}

/****************************************************************/
/*		            	MENU PRINCIPAL                          */
/****************************************************************/

int menu(){

    int pos=6;
    char aux;

//	poner_recuadro('m');

    for( ; ; ){

       switch(pos){
            case 6 :  /*gotoxy(28,pos);
                      textcolor(YELLOW);
                      textbackground(BLACK);*/
                      printf("  Cargar           ");
                      /*aux=getch();
                      textcolor(15);
                      textbackground(4);
                      gotoxy(28,pos);
                      cprintf("  Cargar           ");*/
                      break;
            case 8 :  /*gotoxy(28,pos);
                      textcolor(YELLOW);
                      textbackground(BLACK);*/
                      printf("  Aniversarios     ");
                      /*aux=getch();
                      textcolor(15);
                      textbackground(4);
                      gotoxy(28,pos);
                      cprintf("  Aniversarios     ");*/
                      break;
            case 10 :  /*gotoxy(28,pos);
                      textcolor(YELLOW);
                      textbackground(BLACK);*/
                      printf("  Modificar datos  ");
                      /*aux=getch();
                      textcolor(15);
                      textbackground(4);
                      gotoxy(28,pos);
                      cprintf("  Modificar datos  ");*/
                      break;
            case 12 : /*gotoxy(28,pos);
                      textcolor(YELLOW);
                      textbackground(BLACK);*/
                      printf("  Hacer Backup     ");
                     /* aux=getch();
                      textcolor(15);
                      textbackground(4);
                      gotoxy(28,pos);
                      cprintf("  Hacer Backup     ");*/
                      break;
            case 14 : /*gotoxy(28,pos);
                      textcolor(YELLOW);
                      textbackground(BLACK);*/
                      printf("  Buscar ...       ");
                      /*aux=getch();
                      textcolor(15);
                      textbackground(4);
                      gotoxy(28,pos);
                      cprintf("  Buscar ...       ");*/
                      break;
            case 16 : /*gotoxy(28,pos);
                      textcolor(YELLOW);
                      textbackground(BLACK);*/
                      printf("  Salir            ");
                      /*aux=getch();
                      textcolor(15);
                      textbackground(4);
                      gotoxy(28,pos);
                      cprintf("  Salir            ");*/
                      break;
       }
       switch(aux){
            case 0x48 : pos=pos-2;
                        if(pos==4) pos=16;
                        break;
            case 0x50 : pos=pos+2;
                        if(pos==17) pos=3;
                        break;
            case 0x0d : return pos;
            case 0x44 : exit(0);
            case 0x3b : /*ayuda_menu();*/
                        break;
            case 0x3c : /*acerca_de()*/;
       }
    }
}

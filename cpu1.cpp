
#include <windows.h>//biblioteca de sleep()
#include <process.h>//biblioteca para _beginthread()
#include <time.h>//biblioteca para el reloj
#include <stdio.h>//biblioteca para getchar()

void  task1(void*);

int main(int,char**)
{

//variable  para la funcion _beginthread
int ThreadNr;

//se colocan la cantidad de nuecleos
int nucleos = 350;

//se hace el separado por hilos de ejecucion por numero de nucleos
for(int i=0; i < nucleos; i++)_beginthread(task1, 0, &ThreadNr);

//escribe cualquier tecla para acabar
(void)getchar();
return 0;
}


void task1(void*)
{
     //ciclo infinito para usar el procesador
     //termina el programa usando enter
while(1)
{
        //reloj +50
clock_t wakeup = clock() + 50;

//damos 50 ticks de reloj que ocupa el uso de la cpu
while(clock() < wakeup){}

//despues de los 50 ticks, dormimos 50 milisegundos para que respire el procesador
Sleep(50);
}
}

     

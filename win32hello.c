#include<windows.h>
main()
{
	char mensagem[]="Hello World!\n";
	
	WriteConsole(GetStdHandle(STD_OUTPUT_HANDLE),mensagem,strlen(mensagem),0,0);
}
























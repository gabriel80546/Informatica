#include<windows.h>

int main()
{
	int i;
	HANDLE hout=GetStdHandle(STD_OUTPUT_HANDLE);
    char text[]="hello world";
    SHORT stringlen=strlen(text);
    CHAR_INFO consoletext[stringlen];
    COORD a={stringlen,1}, b={0,0};
    SMALL_RECT c={20,10,50,11};
    for (i=0; i<=stringlen;i++)
    {
        consoletext[i].Char.AsciiChar  =text[i];
        consoletext[i].Attributes=FOREGROUND_RED|FOREGROUND_INTENSITY;
    }
    WriteConsoleOutput(hout,consoletext,a,b,&c);
}
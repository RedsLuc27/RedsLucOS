#define W 0x07
#define P 0xD
#define G 0xA
#define B 0x9
#define C 0x3
#define R 0x4
#define M 0x5
#define Brown 0x6


void k_clear_screen();
/*unsigned int Welcome(char *message, unsigned int line);
unsigned int Version(char *message, unsigned int line);
unsigned int Smiley(char *message, unsigned int line);
unsigned int Easter_Egg(char *message, unsigned int line);
*/



void k_main() 
{

	k_clear_screen();
	//Welcome("Welcome to RedsLucOS", 0);
    //Version("V0.0.2", 0);
	/*Smiley("     ___   \n"
       " /\\  \\  \\   \n"
       " \\/   \\  \\  \n"
       " /\\    )  ) \n"
       " \\/   /  /  \n"
       "     /__/   ", 0);
	Easter_Egg("1212", 0);*/
	print("Welcome to RedsLucOS", 0, W);
	print("                                            V0.0.4", 1, W);
	print("     ___   \n"
       " /\\  \\  \\   \n"
       " \\/   \\  \\  \n"
       " /\\    )  ) \n"
       " \\/   /  /  \n"
       "     /__/   ", 2, B);
	print("Changelog of the V0.0.4:", 10, W);
	print(" -Text color have been added", 11, B);
	print(" -The following color are actually present:", 12, W);
	print("                                                Brown", 13, Brown);
	print("                                       Magenta,", 13, M);
	print("                                  Red,", 13, R);
	print("                            Cyan,", 13, C);
	print("                      Blue,", 13, B);
	print("               Green,", 13, G);
	print("         Pink,", 13, P);
	print(" -White,", 13, W);
};



void k_clear_screen()
{
	char *vidmem = (char *) 0xb8000;
	unsigned int i=0;
	while(i < (80*25*2))
	{
		vidmem[i]=' ';
		i++;
		vidmem[i]=W;
		i++;
	};
};

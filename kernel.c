#define WHITE_TXT 0x07

void k_clear_screen();
unsigned int Welcome(char *message, unsigned int line);
unsigned int Version(char *message, unsigned int line);
unsigned int Smiley(char *message, unsigned int line);
unsigned int Easter_Egg(char *message, unsigned int line);

void print(char *message, unsigned int line)
{
	char *vidmem = (char *) 0xb8000;
	unsigned int i=0;
	i=(line*80*2);

	while(*message!=0)
	{
		if(*message=='\n')
		{
			line++;
			i=(line*80*2);
			*message++;
		} else {
			vidmem[i]=*message;
			*message++;
			i++;
			vidmem[i]=WHITE_TXT;
			i++;
		};
	};
}

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
	print("Welcome to RedsLucOS", 0);
	print("                                            V0.0.3", 1);
	print("     ___   \n"
       " /\\  \\  \\   \n"
       " \\/   \\  \\  \n"
       " /\\    )  ) \n"
       " \\/   /  /  \n"
       "     /__/   ", 2);
};



void k_clear_screen()
{
	char *vidmem = (char *) 0xb8000;
	unsigned int i=0;
	while(i < (80*25*2))
	{
		vidmem[i]=' ';
		i++;
		vidmem[i]=WHITE_TXT;
		i++;
	};
};

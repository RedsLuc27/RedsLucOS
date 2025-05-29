// Here are the print function

void print(char *message, unsigned int line, int color)
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
			vidmem[i]=color;
			i++;
		};
	};
}
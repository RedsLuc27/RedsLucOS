all:
	nasm -f elf32 ./src/boot.asm -o kasm.o
	gcc -m32 -c ./src/kernel.c -o kc.o
	ld -m elf_i386 -T ./src/link.ld -o kernel kasm.o kc.o

clean:
	rm -f ./bin/boot.bin
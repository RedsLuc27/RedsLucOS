all:
	nasm -f elf32 ./src/boot.asm -o kasm.o
	gcc -m32 -c ./src/print.c -o print.o
	gcc -m32 -c ./src/input.c -o input.o
	gcc -m32 -c ./src/kernel.c -o kc.o
	ld -m elf_i386 -T ./src/link.ld -o kernel kasm.o kc.o print.o input.o

clean:
	rm -f ./bin/boot.bin
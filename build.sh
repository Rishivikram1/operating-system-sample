nasm -f elf32 kernel.asm -o kasm.o
gcc -m32 -c kernel.c -o kc.o -ffreestanding
ld -m elf_i386 -T link.ld -o pulse/boot/kernel.bin kasm.o kc.o
qemu-system-i386 -kernel pulse/boot/kernel.bin
grub-mkrescue -o pulse.iso pulse/

read a

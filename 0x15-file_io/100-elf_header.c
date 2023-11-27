#include "main.h"
#include <elf.h>
#include <string.h>
#include <errno.h>

/*
 * print_elf_info - i do not know *sad moji*
 * @Elf64_Ehdr: structure in ELF containing the ELF header
 *
 * Return: NULL
 */
void print_elf_info(Elf64_Ehdr header)
{
	int i;

    printf("Magic:   ");
    for (i = 0; i < EI_NIDENT; ++i) {
        printf("%02x ", header.e_ident[i]);
    }
    printf("\n");

    printf("Class:   %s\n", header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
    printf("Data:    %s\n", header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "Invalid data encoding");
    printf("Version: %d (current)\n", header.e_ident[EI_VERSION]);

    printf("OS/ABI:  ");
    switch (header.e_ident[EI_OSABI]) {
        case ELFOSABI_SYSV:
            printf("UNIX - System V\n");
            break;
        case ELFOSABI_LINUX:
            printf("UNIX - Linux\n");
            break;
        default:
            printf("Unknown OS/ABI\n");
    }

    printf("ABI Version: %d\n", header.e_ident[EI_ABIVERSION]);

    printf("Type:    ");
    switch (header.e_type) {
        case ET_NONE:
            printf("NONE (Unknown type)\n");
            break;
        case ET_REL:
            printf("REL (Relocatable file)\n");
            break;
        case ET_EXEC:
            printf("EXEC (Executable file)\n");
            break;
        case ET_DYN:
            printf("DYN (Shared object file)\n");
            break;
        case ET_CORE:
            printf("CORE (Core file)\n");
            break;
        default:
            printf("Unknown type\n");
    }

    printf("Entry point address: %#lx\n", (unsigned long)header.e_entry);
}

/**
 * main - displays information contained in ELF header
 * @argc: no of arguments
 * @argv: arguments passed to main
 *
 * Return: Always 0
 */
int main(int argc, char *argv[]) 
{
	const char *file_name;
	size_t bytes_read;
	int fd;
	Elf64_Ehdr header;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        return 98;
    }

    file_name = argv[1];
    fd = open(file_name, O_RDONLY);
    if (fd == -1) {
        fprintf(stderr, "Error opening file: %s\n", strerror(errno));
        return 98;
    }

    bytes_read = read(fd, &header, sizeof(header));
    if (bytes_read != sizeof(header) || memcmp(header.e_ident, ELFMAG, SELFMAG) != 0) {
        fprintf(stderr, "Error: Not an ELF file\n");
        close(fd);
        return 98;
    }

    print_elf_info(header);

    close(fd);
    return 0;
}

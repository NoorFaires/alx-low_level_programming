#include "main.h"
#include <elf.h>

void print_osabi_more(Elf64_Ehdr elfstruct);

/**
 * print_magic - prints ELF magic bytes
 * @elfstruct: the ELF header struct
 */
void print_magic(Elf64_Ehdr elfstruct)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%2.2x%s", elfstruct.e_ident[i], i == EI_NIDENT - 1 ? "\n" : " ");
}

/**
 * print_class - prints ELF class
 * @elfstruct: the ELF header struct
 */
void print_class(Elf64_Ehdr elfstruct)
{
	printf("  Class:                             ");
	switch (elfstruct.e_ident[EI_CLASS])
	{
		case ELFCLASS64:
			printf("ELF64");
		break;
		case ELFCLASS32:
			printf("ELF32");
		break;
		case ELFCLASSNONE:
			printf("none");
		break;
	}
	printf("\n");
}

/**
 * print_data - prints ELF data
 * @elfstruct: the ELF header struct
 */
void print_data(Elf64_Ehdr elfstruct)
{
	printf("  Data:                              ");
	switch (elfstruct.e_ident[EI_DATA])
	{
		case ELFDATA2MSB:
			printf("2's complement, big endian");
		break;
		case ELFDATA2LSB:
			printf("2's complement, little endian");
		break;
		case ELFDATANONE:
			printf("none");
		break;
	}
	printf("\n");
}

/**
 * print_version - prints ELF version
 * @elfstruct: the ELF header struct
 */
void print_version(Elf64_Ehdr elfstruct)
{
	printf("  Version:                           %d",
			elfstruct.e_ident[EI_VERSION]);
	switch (elfstruct.e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)");
		break;
		case EV_NONE:
			printf("%s", "");
		break;
		break;
	}
	printf("\n");
}

/**
 * print_osabi - prints ELF osabi
 * @elfstruct: the ELF header struct
 */
void print_osabi(Elf64_Ehdr elfstruct)
{
	printf("  OS/ABI:                            ");
	switch (elfstruct.e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris");
			break;
		case ELFOSABI_AIX:
			printf("UNIX - AIX");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64");
			break;
		default:
			print_osabi_more(elfstruct);
			break;
	}
	printf("\n");
}


/**
 * print_osabi_more - prints ELF osabi more
 * @elfstruct: the ELF header struct
 */
void print_osabi_more(Elf64_Ehdr elfstruct)
{
	switch (elfstruct.e_ident[EI_OSABI])
	{
		case ELFOSABI_MODESTO:
			printf("Novell - Modesto");
			break;
		case ELFOSABI_OPENBSD:
			printf("UNIX - OpenBSD");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App");
			break;
		case ELFOSABI_ARM:
			printf("ARM");
			break;
		default:
			printf("<unknown: %x>", elfstruct.e_ident[EI_OSABI]);
			break;
	}
}

/**
 * print_abiversion  - prints ELF ABI version
 * @elfstruct: the ELF header struct
 */
void print_abiversion(Elf64_Ehdr elfstruct)
{
	printf("  ABI Version:                       %d\n",
		elfstruct.e_ident[EI_ABIVERSION]);
}

/**
 * print_type - prints the ELF type
 * @elfstruct: the ELF header struct
 */
void print_type(Elf64_Ehdr elfstruct)
{
	char *p = (char *)&elfstruct.e_type;
	int i = 0;

	printf("  Type:                              ");
	if (elfstruct.e_ident[EI_DATA] == ELFDATA2MSB)
		i = 1;
	switch (p[i])
	{
		case ET_NONE:
			printf("NONE (None)");
			break;
		case ET_REL:
			printf("REL (Relocatable file)");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)");
			break;
		case ET_CORE:
			printf("CORE (Core file)");
			break;
		default:
			printf("<unknown>: %x", p[i]);
		break;
	}
	printf("\n");
}

/**
 * print_entry - prints the ELF entry point address
 * @elfstruct: the ELF header struct
 */
void print_entry(Elf64_Ehdr elfstruct)
{
	int i = 0, len = 0;
	unsigned char *p = (unsigned char *)&elfstruct.e_entry;

	printf("  Entry point address:               0x");
	if (elfstruct.e_ident[EI_DATA] != ELFDATA2MSB)
	{
		i = elfstruct.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!p[i])
			i--;
		printf("%x", p[i--]);
		for (; i >= 0; i--)
			printf("%02x", p[i]);
		printf("\n");
	}
	else
	{
		i = 0;
		len = elfstruct.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!p[i])
			i++;
		printf("%x", p[i++]);
		for (; i <= len; i++)
			printf("%02x", p[i]);
		printf("\n");
	}
}

/**
 * main - program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int fo;
	Elf64_Ehdr elfstruct;
	ssize_t nb;

	if (argc != 2)
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);
	fo = open(argv[1], O_RDONLY);
	if (fo == -1)
		dprintf(STDERR_FILENO, "Can't open file: %s\n", argv[1]), exit(98);
	nb = read(fo, &elfstruct, sizeof(elfstruct));
	if (nb < 1 || nb != sizeof(elfstruct))
		dprintf(STDERR_FILENO, "Can't read from file: %s\n", argv[1]), exit(98);
	if (elfstruct.e_ident[0] == 0x7f && elfstruct.e_ident[1] == 'E' &&
			elfstruct.e_ident[2] == 'L' && elfstruct.e_ident[3] == 'F')
	{
		printf("ELF Header:\n");
	}
	else
		dprintf(STDERR_FILENO, "Not ELF file: %s\n", argv[1]), exit(98);

	print_magic(elfstruct);
	print_class(elfstruct);
	print_data(elfstruct);
	print_version(elfstruct);
	print_osabi(elfstruct);
	print_abiversion(elfstruct);
	print_type(elfstruct);
	print_entry(elfstruct);
	if (close(fo))
		dprintf(STDERR_FILENO, "Error closing file descriptor: %d\n", fo), exit(98);
	return (EXIT_SUCCESS);
}

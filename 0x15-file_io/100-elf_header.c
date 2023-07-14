#include "main.h"
#include <elf.h>
#include <stdio.h>

void osabi_more(Elf64_Ehdr h);

/**
 * magic - prints ELF magic bytes
 * @h:the ELF header struct
 */
void magic(Elf64_Ehdr h)
{
	int i;

	printf(" Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%2.2x%s", h.e_ident[i], i == EI_NIDENT - 1 ? "\n" : " ");
}

/**
 * class - prints ELF Class
 * @h:the Elf header struct
 */
void class(Elf64_Ehdr h)
{
	printf("class:         ");
	switch (h.e_ident[EI_CLASS])
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
 * data - prints ELF data
 * @h:the Elf header struct
 */
void data(Elf64_Ehdr h)
{
	printf(" Data:       ");
	switch (h.e_ident[EI_DATA])
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
 * version - prints Elf version
 * @h: the Elf header struct
 */
void version(Elf64_Ehdr h)
{
	printf("Version:        %d", h.e_ident[EI_VERSION]);
	switch (h.e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)");
		break;
		case EV_NONE:
			printf("%s", " ");
		break;
		break;
	}
	printf("\n");
}

/**
 * osabi - prints ELF osabi
 * @h:the Elf header struct
 */
void osabi(Elf64_Ehdr h)
{
	printf("  OS/ABI:               ");
	switch (h.e_ident[EI_OSABI])
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
			printf("UNIX - LINUX");
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
			osabi_more(h);
			break;
	}
	printf("\n");
}

/**
 * osabi_more - prints ELF osabi more
 * @h:the Elf header struct
 */
void osabi_more(Elf64_Ehdr h)
{
	switch (h.e_ident[EI_OSABI])
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
			printf("<unknown: %x>", h.e_ident[EI_OSABI]);
			break;
	}
}

/**
 * abiversion - prints the ELF ABI Version
 * @h:the ELF header struct
 */
void abiversion(Elf64_Ehdr h)
{
	printf("     ABI Version:           %d\n", h.e_ident[EI_ABIVERSION]);
}

/**
 * type - function that prints the ELF type
 * @h:the Elf header struct
 */
void type(Elf64_Ehdr h)
{
	char *s = (char *)&h.e_type;
	int i = 0;

	printf("    Type:          ");
	if (h.e_ident[EI_DATA] == ELFDATA2MSB)
		i = 1;
	switch (s[i])
	{
		case ET_NONE:
			printf("NONE (NONE)");
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
			printf("<unknown>: %x", s[i]);
		break;
	}
	printf("\n");
}

/**
 * entry - prints the elf entry point address
 * @h:the ELF header struct
 */
void entry(Elf64_Ehdr h)
{
	int i = 0, len = 0;
	unsigned char *s = (unsigned char *)&h.e_entry;

	printf("Entry point address: 0x");
	if (h.e_ident[EI_CLASS] != ELFDATA2MSB)
	{
		i = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!s[i])
			i--;
		printf("%x", s[i--]);
		for (; i >= 0; i--)
			printf("%02x", s[i]);
		printf("\n");
	}
	else
	{
		i = 0;
		len = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!s[i])
			i++;
		printf("%x", s[i++]);
		for (; i <= len; i++)
			printf("%02x", s[i]);
		printf("\n");
	}
}

/**
 * main - function that executes program
 * @ac: argument count
 * @av:argument vector
 *
 * Return:1 on success and 0 on failure
 */
int main(int ac, char **av)
{
	int fd;
	Elf64_Ehdr h;
	ssize_t b;

	if (ac != 2)
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		dprintf(STDERR_FILENO, "Can't open file: %s\n", av[1]), exit(98);
	b = read(fd, &h, sizeof(h));
	if (b < 1 || b != sizeof(h))
		dprintf(STDERR_FILENO, "Can't read from file: %s\n", av[1]), exit(98);
	if (h.e_ident[0] == 0x7f && h.e_ident[1] == 'E' && h.e_ident[2] == 'L'
		&& h.e_ident[3] == 'F')
		printf("ELF Header: \n");
	else
		dprintf(STDERR_FILENO, "Not ELF file: %s\n", av[1]), exit(98);
	magic(h);
	class(h);
	data(h);
	version(h);
	osabi(h);
	abiversion(h);
	type(h);
	entry(h);
	if (close(fd))
		dprintf(STDERR_FILENO, "Error closing file descriptor: %d\n", fd), exit(98);
	return (EXIT_SUCCESS);
}

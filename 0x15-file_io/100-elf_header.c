#include "main.h"

/**
  * error - prints error
  * @message: message
  * return: void
  */

void error(const char *message)
{
	fprintf(stderr, "error: %s\n", message);
	exit(98);
}

/**
  * print_elf - print elf
  * @header: extracted headers
  * return: elf
  */

void print_elf(const elf64_ehdr *header)
{
	printf("magic: ");
	for (int i = 0; i < ei_nident; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
	printf("class: ");
	switch (header->e_ident[ei_class])
	{
		case elfclass32:
			printf("elf32\n");
			break;
		case elfclass64:
			printf("elf64\n");
			break;
		default:
			printf("unknown\n");
			break;
	}

	printf("data: ");
	switch (header->e_ident[ei_data])
	{
		case elfdata2lsb:
			printf("2's complement, little-endian\n");
			break;
		case elfdata2msb:
			printf("2's complement, big-endian\n");
			break;
		default:
			printf("unknown\n");
			break;
	}
	printf("version: %d\n", header->e_ident[ei_version]);
	printf("os/abi: ");
	switch (header->e_ident[ei_osabi])
	{
		case elfosabi_sysv:
			printf("unix system v abi\n");
			break;
		case elfosabi_linux:
			printf("linux abi\n");
			break;
		default:
			printf("unknown\n");
			break;
	}
	printf("abi version: %d\n", header->e_ident[ei_abiversion]);
	printf("type: ");
	switch (header->e_type)
	{
		case et_none:
			printf("none\n");
			break;
		case et_rel:
			printf("relocatable\n");
			break;
		case et_exec:
			printf("executable\n");
			break;
		case et_dyn:
			printf("shared object\n");
			break;
		case et_core:
			printf("core dump\n");
			break;
		default:
			printf("unknown\n");
			break;
	}
	printf("entry point address: 0x%lx\n", header->e_entry);
}

/**
  * main - entry point
  * @argc: arguments
  * @argv: argument counter
  * return: 0
  */

int main(int argc, char *argv[])
{
	elf64_ehdr header;
	const char *filename = argv[1];
	int fd = open(filename, o_rdonly);

	if (argc != 2)
		error("usage: elf_header elf_filename");
	if (fd == -1)
		error("failed to open the file");
	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		error("failed to read elf header");
	}
	if (header.e_ident[ei_mag0] != elfmag0 || header.e_ident[ei_mag1] != elfmag1 || header.e_ident[ei_mag2] != elfmag2 || header.e_ident[ei_mag3] != elfmag3)
	{
		error("not an elf file");
	}

	print_elf(&header);

	close(fd);

	return (0);
}

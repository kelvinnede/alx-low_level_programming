#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
* display_error - Display error message and exit with status code 98
* @msg: Error message
*/
void display_error(char *msg)
{
	dprintf(2, "Error: %s\n", msg);
	exit(98);
}

/**
* read_elf_header - Read and display ELF header information
* @fd: File descriptor of the ELF file
*/
void read_elf_header(int fd)
{
	char magic[16];
	char class, data, version, os_abi;
	char abi_version, elf_type;
	unsigned long entry_point;

	if (read(fd, &magic, 16) != 16)
		display_error("Unable to read ELF header");

	if (lseek(fd, 0, SEEK_SET) == -1)
		display_error("Unable to move file pointer");

	if (read(fd, &class, 1) != 1 || read(fd, &data, 1) != 1 ||
		read(fd, &version, 1) != 1 || read(fd, &os_abi, 1) != 1 ||
		read(fd, &abi_version, 1) != 1 || lseek(fd, 7, SEEK_CUR) == -1 ||
		read(fd, &elf_type, 2) != 2 || lseek(fd, 7, SEEK_CUR) == -1 ||
		read(fd, &entry_point, 8) != 8)
		display_error("Unable to read ELF header");

	printf("ELF Header:\n");
	printf("	Magic:   ");
	int i;
	for (i = 0; i < 16; i++)
		printf("%02x ", magic[i]);
	printf("\n");
	printf("	Class: ELF%d\n", class == 1 ? 32 : 64);
	printf("	Data: 2's complement, %s endian\n", data == 1 ? "little" : "big");
	printf("	Version: %d (current)\n", version);
	printf("	OS/ABI: UNIX - %s\n", os_abi == 0 ? "System V" : "unknown");
	printf("	ABI Version: %d\n", abi_version);
	printf("	Type: %s (Executable file)\n", elf_type == 2 ? "EXEC" : "DYN");
	printf("	Entry point address: 0x%lx\n", entry_point);
}

/**
* main - Display the information contained in the ELF header of an ELF file
* @argc: Number of arguments
* @argv: Array of arguments
* Return: 0 on success, 98 on failure
*/
int main(int argc, char *argv[])
{
	int fd;

	if (argc != 2)
		display_error("Usage: elf_header elf_filename");

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		display_error("Unable to open file");

	read_elf_header(fd);

	if (close(fd) == -1)
		display_error("Unable to close file descriptor");

	return (0);
}

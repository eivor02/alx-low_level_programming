#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

void checkElf(unsigned char *e_ident);
void printMagic(unsigned char *e_ident);
void printClass(unsigned char *e_ident);
void printData(unsigned char *e_ident);
void printVersion(unsigned char *e_ident);
void printOsabi(unsigned char *e_ident);

void checkElf(unsigned char *e_ident) {
    for (int i = 0; i < 4; i++) {
        if (e_ident[i] != 127 && e_ident[i] != 'E' && e_ident[i] != 'L' && e_ident[i] != 'F') {
            fprintf(stderr, "Error: Not an ELF file\n");
            exit(98);
        }
    }
}

void printMagic(unsigned char *e_ident) {
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", e_ident[i]);
    }
    printf("\n");
}

void printClass(unsigned char *e_ident) {
    printf("  Class:   ");
    switch (e_ident[EI_CLASS]) {
        case ELFCLASSNONE:
            printf("none\n");
            break;
        case ELFCLASS32:
            printf("ELF32\n");
            break;
        case ELFCLASS64:
            printf("ELF64\n");
            break;
        default:
            printf("<unknown>\n");
            break;
    }
}

void printData(unsigned char *e_ident) {
    printf("  Data:    ");
    switch (e_ident[EI_DATA]) {
        case ELFDATANONE:
            printf("none\n");
            break;
        case ELFDATA2LSB:
            printf("2's complement, little endian\n");
            break;
        case ELFDATA2MSB:
            printf("2's complement, big endian\n");
            break;
        default:
            printf("<unknown>\n");
            break;
    }
}

void printVersion(unsigned char *e_ident) {
    printf("  Version: %d", e_ident[EI_VERSION]);
    switch (e_ident[EI_VERSION]) {
        case EV_CURRENT:
            printf(" (current)\n");
            break;
        default:
            printf("\n");
            break;
    }
}

void printOsabi(unsigned char *e_ident) {
    printf("  OS/ABI:  ");
    switch (e_ident[EI_OSABI]) {
        case ELFOSABI_NONE:
            printf("UNIX - System V\n");
            break;
        case ELFOSABI_HPUX:
            printf("UNIX - HP-UX\n");
            break;
        case ELFOSABI_NETBSD:
            printf("UNIX - NetBSD\n");
            break;
        case ELFOSABI_LINUX:
            printf("UNIX - Linux\n");
            break;
        case ELFOSABI_SOLARIS:
            printf("UNIX - Solaris\n");
            break;
        case ELFOSABI_IRIX:
            printf("UNIX - IRIX\n");
            break;
        case ELFOSABI_FREEBSD:
            printf("UNIX - FreeBSD\n");
            break;
        case ELFOSABI_TRU64:
            printf("UNIX - TRU64\n");
            break;
        case ELFOSABI_ARM:
            printf("ARM\n");
            break;
        case ELFOSABI_STANDALONE:
            printf("Standalone App\n");
            break;
        default:
            printf("<unknown>\n");
            break;
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <elf_file>\n", argv[0]);
        return 1;
    }

    const char *filename = argv[1];
    int fd = open(filename, O_RDONLY);
    if (fd == -1) {
        perror("Error opening file");
        return 1;
    }

    Elf64_Ehdr elfHeader;
    if (read(fd, &elfHeader, sizeof(elfHeader)) != sizeof(elfHeader)) {
        perror("Error reading ELF header");
        close(fd);
        return 1;
    }

    close(fd);

    unsigned char *e_ident = elfHeader.e_ident;

    checkElf(e_ident);
    printMagic(e_ident);
    printClass(e_ident);
    printData(e_ident);
    printVersion(e_ident);
    printOsabi(e_ident);

    return 0;
}

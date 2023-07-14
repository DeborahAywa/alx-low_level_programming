#ifndef MAIN_H
#define MAIN_H

#define USAGE "Usage: cp file_from file_to \n"
#define ERROR_READ_FAILURE "Error: Can't read from file %s\n"
#define ERROR_WRITE_FAILURE "Error: Can't write to %s\n"
#define ERROR_CLOSE_FAILURE "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
char *create_space(char *file);
void close_file(int fptr);
int main(int argc, char *argv[]);

#endif

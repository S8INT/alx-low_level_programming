#include "main.h"

/**
 *read_textfile - reads a file and prints the letters
 *@filename: name of the file
 *@letters- the letters to be printed
 *
 *Return: number of leters printed and return 0 on failure.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
  int fd;
  ssize_t rd, Nwr;
  char *buf;
  if (!filename)
    return(0);
  fd = open(filename, O_RDONLY);
  if(fd == -1)
    return (0);
  buf = malloc(sizeof(char) *(letters));
  if (!buf)
    return (0);
  rd = read(fd, buf, letters);
  Nwr = write(STDOUT_FILENO, buf, rd);
  close (fd);
  free (buf);
  return (Nwr);
}

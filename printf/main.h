#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/* FLAGS */
#define F-MINUS 1
#define F-PLUS 2
#define F-ZERO 4
#define F-HASH 8
#define F-SPACE 16

/* SIZES */
#define S-LONG 2
#define S-SHORTS 1

/**
 * struct fmt - Struct op
 *
 * @fmt: The format
 * @fn: The function associated.
 */
struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};

/**
 * typedef struct fmt fmt_t - Struct op
 *
 * @fmt: The formart.
 * @fm_t: The function associated.
 */

typedef struct fmt fmt_t;

void print_buffer(char buffer[], int *buff_ind);
int _printf(const char *format, ...);
void print_buffer(char buffer[], int *buff_ind);
int print_char(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_int(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_binary(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_unsigned(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_octal(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_hexadecimal(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_hexa_upper(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_hexa(va_list types, char map_to[], char buffer[], int flags, char flag_ch, int width, int precision, int size);
int print_pointer(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_non_printable(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_reverse(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_rot13string(va_list types, char buffer[], int flags, int width, int precision, int size);
int get_flags(const char *format, int *i);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int handle_print(const char *fmt, int *ind, va_list list, char buffer[], int flags, int width, int precision, int size);


#endif

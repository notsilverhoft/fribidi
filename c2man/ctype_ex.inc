.\" WARNING! THIS FILE WAS GENERATED AUTOMATICALLY BY c2man!
.\" DO NOT EDIT! CHANGES MADE TO THIS FILE WILL BE LOST!
.ds [H ctype\|(\|3\|)
.ds [D UNIX Programmer's Manual
.po +1i
.lt -1.5i
.tl @\*([H@\*([D@\*([H@
.lt +1.5i
.po -1i
.RS +1i
.nr CL \n(.l-0.5i
.br
.ne 3
.RE
.po +1i
.SH "NAME"
.po -1i
.RS +1i
.ll \n(CLu
isalnum,
isalpha,
iscntrl,
isdigit,
isgraph,
islower,
isprint,
ispunct,
isspace,
isupper,
isxdigit \- character classification functions
.br
.ne 3
.RE
.po +1i
.SH "SYNOPSIS"
.po -1i
.RS +1i
.ll \n(CLu
.ft B
#include <ctype.h>
.sp
inline int isalnum(int c);
.sp
inline int isalpha(int c);
.sp
inline int iscntrl(int c);
.sp
inline int isdigit(int c);
.sp
inline int isgraph(int c);
.sp
inline int islower(int c);
.sp
inline int isprint(int c);
.sp
inline int ispunct(int c);
.sp
inline int isspace(int c);
.sp
inline int isupper(int c);
.sp
inline int isxdigit(int c);
.ft R
.br
.ne 3
.RE
.po +1i
.SH "PARAMETERS"
.po -1i
.RS +1i
.ll \n(CLu
.TP
.B "int c"
.ll \n(CLu
The character to classify.
.br
.ne 3
.RE
.po +1i
.SH "DESCRIPTION"
.po -1i
.RS +1i
.ll \n(CLu
.br
.ne 3
.RE
.po +1i
.SS "isalnum"
.po -1i
.RS +1i
.ll \n(CLu
Character is alphanumeric.
.br
.ne 3
.RE
.po +1i
.SS "isalpha"
.po -1i
.RS +1i
.ll \n(CLu
Character is a letter.
.br
.ne 3
.RE
.po +1i
.SS "iscntrl"
.po -1i
.RS +1i
.ll \n(CLu
Character is a control character.
.br
.ne 3
.RE
.po +1i
.SS "isdigit"
.po -1i
.RS +1i
.ll \n(CLu
Character is a digit.
.br
.ne 3
.RE
.po +1i
.SS "isgraph"
.po -1i
.RS +1i
.ll \n(CLu
Character is a graphic.
.br
.ne 3
.RE
.po +1i
.SS "islower"
.po -1i
.RS +1i
.ll \n(CLu
Character is a lower case letter.
.br
.ne 3
.RE
.po +1i
.SS "isprint"
.po -1i
.RS +1i
.ll \n(CLu
Character is printable.
.br
.ne 3
.RE
.po +1i
.SS "ispunct"
.po -1i
.RS +1i
.ll \n(CLu
Character is punctuation.
.br
.ne 3
.RE
.po +1i
.SS "isspace"
.po -1i
.RS +1i
.ll \n(CLu
Character is a a form of whitespace.
.br
.ne 3
.RE
.po +1i
.SS "isupper"
.po -1i
.RS +1i
.ll \n(CLu
Character is an upper case letter.
.br
.ne 3
.RE
.po +1i
.SS "isxdigit"
.po -1i
.RS +1i
.ll \n(CLu
Character is a hexadecimal digit.
.br
.ne 3
.RE
.po +1i
.SH "RETURNS"
.po -1i
.RS +1i
.ll \n(CLu
.br
.ne 3
.RE
.po +1i
.SS "isalnum"
.po -1i
.RS +1i
.ll \n(CLu
0 if the character doesn't fit the
classification; non-zero (but not necessarily 1)
if it does.
.ll \n(CLu+0.5i
.RE

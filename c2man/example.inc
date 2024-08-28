.\" WARNING! THIS FILE WAS GENERATED AUTOMATICALLY BY c2man!
.\" DO NOT EDIT! CHANGES MADE TO THIS FILE WILL BE LOST!
.ds [H dowork\|(\|3\|)
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
dowork \- do some useful work for a change.
.br
.ne 3
.RE
.po +1i
.SH "SYNOPSIS"
.po -1i
.RS +1i
.ll \n(CLu
.ft B
#include <example.h>
.sp
int dowork
.br
(
.br
	int count,
.br
	enum Place where,
.br
	long fiveoclock
.br
);
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
.B "int count"
.ll \n(CLu
How much work to do.
.TP
.B "enum Place where"
.ll \n(CLu
Where to do the work.
.sp
Possible values for an \fBenum Place\fR are as follows:
.RS 0.75in
.PD 0
.ft B
.nr TL \w'COUNTRY'u+0.2i
.ft R
.TP \n(TLu
\fBHOME\fR
.ll \n(CLu
Home, Sweet Home.
.TP \n(TLu
\fBWORK\fR
.ll \n(CLu
Where I spend lots of time.
.TP \n(TLu
\fBMOVIES\fR
.ll \n(CLu
Saturday nights mainly.
.TP \n(TLu
\fBCITY\fR
.ll \n(CLu
New York, New York.
.TP \n(TLu
\fBCOUNTRY\fR
.ll \n(CLu
Bob's Country Bunker.
.RE
.PD
.TP
.B "long fiveoclock"
.ll \n(CLu
When to knock off.
.br
.ne 3
.RE
.po +1i
.SH "DESCRIPTION"
.po -1i
.RS +1i
.ll \n(CLu
This function will actually get some productive
work done, if you are really lucky.
.br
.ne 3
.RE
.po +1i
.SH "RETURNS"
.po -1i
.RS +1i
.ll \n(CLu
The number of milliseconds in a second.
.ll \n(CLu+0.5i
.RE

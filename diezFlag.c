#include <stdio.h>

int main(void)
{
	int i = 0;
	int i2 = 32;
	int i3 = - 32;
	double d = 0;
	double d2 = 4.666666;
	double d3 = 14.88888888;
	double d4 = -4.333;
	double d5 = 567;
	
	//For o conversions, the first character of the output string is made zero (by prefixing a 0 if it was not zero already).
	//For x and X conversions, a nonzero result has the string "0x" (or "0X" for X conversions) prepended to it.
	printf("i = 0: o %o si #o %#o\n", i, i);
	printf("i2 = 32: o %o si #o %#o\n\n", i2, i2);
	printf("i3 = - 32: o %o si #o %#o\n\n", i3, i3);

	printf("i = 0: x %x si X %X\n", i, i);
    printf("i = 0: #x %#x si #X %#X\n", i, i);
    printf("i2 = 32: x %x si X %X\n", i2, i2);
    printf("i2 = 32: #x %#x si #X %#X\n", i2, i2);
    printf("i3 = - 32: x %x si X %X\n", i3, i3);
    printf("i3 = - 32: #x %#x si #X %#X\n\n", i3, i3);
    
	//For a, A, e, E, f, F, g, and G conversions, the result will always contain a decimal point, even if no digits follow it 
	//(normally, a decimal point appears in the results of those conversions only if a digit follows). 
    //For g and G conversions, trailing zeros are not removed from the result as they would otherwise be.

    printf("d = 0: a %a si A %A\n", d, d);
    printf("d = 0: #a %#a si #A %#A\n", d, d);
    printf("d2 = 4.666666: a %a si A %A\n", d2, d2);
    printf("d2 = 14.666666: #a %#a si #A %#A\n", d2, d2);
    printf("d3 = 14.88888888: a %a si A %A\n", d3, d3);
    printf("d3 = 14.88888888: #a %#a si #A %#A\n", d3, d3);
	printf("d4 = -4.333: a %a si A %A\n", d4, d4);
    printf("d4 = -4.333: #a %#a si #A %#A\n", d4, d4);
	printf("d5 = 567: a %a si A %A\n", d5, d5);
    printf("d5 = 567: #a %#a si #A %#A\n", d5, d5);
    printf("d5 = 567 si precizie 3: #.3a %#.3a si #.3A %#.3A\n\n", d5, d5);


    printf("d = 0: e %e si E %E\n", d, d);
    printf("d = 0: #e %#e si #E %#E\n", d, d);
    printf("d2 = 4.666666: e %e si E %E\n", d2, d2);
    printf("d2 = 4.666666: #e %#e si #E %#E\n", d2, d2);
 	printf("d3 = 14.88888888: e %e si E %E\n", d3, d3);
    printf("d3 = 14.88888888: #e %#e si #E %#E\n", d3, d3);
	printf("d4 = -4.333;: e %e si E %E\n", d4, d4);
    printf("d4 = -4.333;: #e %#e si #E %#E\n", d4, d4);
	printf("d5 = 567: e %e si E %E\n", d5, d5);
	printf("d5 = 567: #e %#e si #E %#E\n", d5, d5);
    printf("d5 = 567 si precizie 3: #.3e %#.3e si #.3E %#.3E\n\n", d5, d5);

    printf("d = 0: f %f si F %F\n", d, d);
    printf("d = 0: #f %#f si #F %#F\n", d, d);
    printf("d2 = 4.666666: f %f si F %F\n", d2, d2);
    printf("d2 = 4.666666: #f %#f si #F %#F\n", d2, d2);
    printf("d3 = 14.88888888: f %f si F %F\n", d3, d3);
    printf("d3 = 14.88888888: #f %#f si #F %#F\n", d3, d3);
	printf("d4 = -4.333;: f %f si F %F\n", d4, d4);
    printf("d4 = -4.333;: #f %#f si #F %#F\n", d4, d4);
	printf("d5 = 567: f %f si F %F\n", d5, d5);
    printf("d5 = 567: #f %#f si #F %#F\n\n", d5, d5);

    printf("d = 0: g %g si G %G\n", d, d);
    printf("d = 0: #g %#g si #G %#G\n", d, d);
    printf("d2 = 4.666666: g %g si G %G\n", d2, d2);
    printf("d2 = 4.666666: #g %#g si #G %#G\n", d2, d2);
    printf("d3 = 14.88888888: g %g si G %G\n", d3, d3);
    printf("d3 = 14.88888888: #g %#g si #G %#G\n", d3, d3);
    printf("d4 = -4.333;: g %g si G %G\n", d4, d4);
    printf("d4 = -4.333;: #g %#g si #G %#G\n", d4, d4);
	printf("d5 = 567: g %g si G %G\n", d5, d5);
    printf("d5 = 567: #g %#g si #G %#G\n\n", d5, d5);
}
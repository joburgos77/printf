<h1>Subject</h1>
This is the <a href="https://github.com/joburgos77/subjects/blob/main/es.subject.pdf" rel="nofollow"> subject</a> for this project.

<b>Introduction</b>
Welcome to the ft_printf project! This project is part of the curriculum at 42 Málaga and aims to develop your understanding of variadic functions and string formatting in the C programming language. ft_printf is a custom implementation of the printf function, which allows for formatted output to the standard output stream.

<h3>Objective</h3>
The main objective of this project is to recreate the printf function, providing similar functionality and behavior. By building your own version of printf, you will deepen your understanding of the inner workings of the function and gain hands-on experience in string manipulation, handling format specifiers, and managing variadic arguments.
Features

<h3>Format Specifiers</h3>
The ft_printf function supports a wide range of format specifiers, allowing you to format and print various types of data. Some of the commonly used format specifiers include:

%c: Character<br>
%s: String<br>
%d or %i: Signed decimal integer<br>
%u: Unsigned decimal integer<br>
%x or %X: Unsigned hexadecimal integer<br>
%f: Floating-point number<br>
%p: Pointer address<br>


These format specifiers enable you to print data in a specific format, making it easier to display and interpret different types of information.
Width and Precision You can specify the width and precision of the output using optional flags in the format specifier. The width determines the minimum number of characters to be printed, while the precision specifies the maximum number of characters to be printed for strings or the number of decimal places for floating-point numbers.

Flags and Modifiers The ft_printf function supports various flags and modifiers to customize the output. Some of the commonly used flags include:

-: Left-justify the output +: Prepend a plus sign to positive numbers 0: Pad the output with zeros #: Add the "0x" or "0X" prefix for hexadecimal values

These flags and modifiers allow you to modify the appearance of the output to meet your specific requirements.
Variadic Argument Handling

One of the key aspects of ft_printf is its ability to handle variadic arguments. By utilizing the stdarg.h header and the va_list type, you can process a variable number of arguments passed to the function. This flexibility enables you to handle different types of data and dynamically generate the output based on the provided format specifiers.
How it Works

The ft_printf function follows a systematic process to handle the provided format string and corresponding arguments:
Parse the format string and identify format specifiers, flags, width, precision, and modifiers. Retrieve the arguments based on the format specifiers and perform necessary data conversions. Generate the formatted output according to the specified format and desired appearance. Print the final output to the standard output stream.
By following this process, ft_printf ensures accurate formatting and printing of the provided data, mimicking the behavior

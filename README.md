# Linux-Utilities

## my-cat
The program my-cat is a simple program. It reads a file as specified by the user and prints its contents.

__Details__

* Your program my-cat can be invoked with one or more files on the command line; it should just print out each file in turn.
* In all non-error cases, my-cat should exit with status code 0, usually by returning a 0 from main() (or by calling exit(0)).
* If no files are specified on the command line, my-cat should just exit and return 0. Note that this is slightly different than the behavior of normal UNIX cat (if you'd like to, figure out the difference).
* If the program tries to fopen() a file and fails, it should print the exact message "my-cat: cannot open file" (followed by a newline) and exit with status code 1. If multiple files are specified on the command line, the files should be printed out in order until the end of the file list is reached or an error opening a file is reached (at which point the error message is printed and my-cat exits).

## my-grep
The second utility is called my-grep, a variant of the UNIX tool grep. This tool looks through a file, line by line, trying to find a user-specified search term in the line. If a line has the word within it, the line is printed out, otherwise it is not.

__Details__

 * Your program my-grep is always passed a search term and zero or more files to grep through (thus, more than one is possible). It should go through each line and see if the search term is in it; if so, the line should be printed, and if not, the line should be skipped.
 * The matching is case sensitive. Thus, if searching for foo, lines with Foo will not match.
 * Lines can be arbitrarily long (that is, you may see many many characters before you encounter a newline character, \n). my-grep should work as expected even with very long lines. For this, you might want to look into the getline() library call (instead of fgets()), or roll your own.
 * If my-grep is passed no command-line arguments, it should print "my-grep: searchterm [file ...]" (followed by a newline) and exit with status 1.
 * If my-grep encounters a file that it cannot open, it should print "my-grep: cannot open file" (followed by a newline) and exit with status 1.
 * In all other cases, my-grep should exit with return code 0.
 * If a search term, but no file, is specified, my-grep should work, but instead of reading from a file, my-grep should read from standard input. Doing so is easy, because the file stream stdin is already open; you can use fgets() (or similar routines) to read from it.
 * For simplicity, if passed the empty string as a search string, my-grep can either match NO lines or match ALL lines, both are acceptable.

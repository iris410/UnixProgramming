//Name: Jingyi Cui; StudentNumber:19204584; Email: jingyi.cui1@ucdconnect.ie
/*1.how well this code completed the task?
    This code implemented my own version of utility head and both even and odd line listing in C,
    and it fully implements all functions as required by the specification.
*/
/*2.code explanation:
In order to complete all the requirements of this assignment I mainly divided the program into two parts:
1.Processing command line arguments:
    1.1 Reading options by using method 'getopt'. When 'getopt' returns -1, indicating no more expected options are present,
        the loop terminates. Inside each iteration, the switch statement is used to update flags and parameters, including
        number of lines to read and read odd/even lines only.
    1.2 By default the program read 10 lines from the beginning of a file, and it reads both even and odd lines.
        Default values can be overwritten by command line options.
2.Processing file:
    It supports up to one file name. `optind` and `argc` from `unistd.c` library are used to decide if a filename is provided.
    2.1  `optind == argc` means filename is not provided. The program will promote user to input test content from console
         and end with letter 'q'. `strcmp()` is used to copy input from console, and char array[128][128] is used to store user
         inputs line by line.
    2.2 `optind != argc` means that a filename is provided. The program will open that file with `fopen()` and read it line-by-line
        with `getline()`.
    2.3 When `-o` or `-e` is provided from command line, this program support `reading only odd/even lines` feature. To achieve that,
        the program uses `line_index` indicating line index internally, and uses `line_count` counting how many lines matching criteria
        has been read already.
        Here is an example to show how `line_index` and `line_count` accumulates respectively:
        `./head -n 2 -o ./my-sample-file.txt` user wants to read first 2 odd lines.
            The first line will be printed on console, where `line_index = 1` and `line_count = 1`
            The second line will not be printed, where `line_index = 2` and `line_count = 1`
            The third line will be printed on console, where `line_index = 3` and `line_count = 2`
            The program stops.
*/
#include<stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>

#define BUFFER_LENGTH 128
#define LINE_BUFFER_SIZE 128

void display_help_message(void);

int main(int argc, char *argv[]) {

    int option;//variable to accept return value of getopt method
    FILE *fp;//file pointer to be use when open file
    char *filename; //variable to store file name
    char *line = NULL;
    size_t len = 0;
    int line_index = 1;//variable to count number of lines when read file
    int line_count = 0;//variable for counting number of lines user want
    int number_of_lines = 10;//default value for no option be indicated
    bool only_print_even = false;
    bool only_print_odd = false;

    //deal with menu options "nVheo" by using while loop, read them one by one until no more argument.
    while ((option = getopt(argc, argv, "n:Vheo")) != -1) {
        //deal with user command options by using switch
        switch (option) {
            case 'V':
                printf("Name: Jingyi Cui;\nStudentNumber:19204584;\n"
                       "Email: jingyi.cui1@ucdconnect.ie.\n");
                return 0;
            case 'h':
                display_help_message();
                return 0;
            case 'n':
                number_of_lines = atoi(optarg);//change number input into a integer
                break;
            case 'e':
                only_print_even = true;
                only_print_odd = false;
                break;
            case 'o':
                only_print_even = false;
                only_print_odd = true;
                break;
            default:
                display_help_message();
                return 0;
        }
    }
    //if lack of filename
    if (optind == argc) {
        char array[BUFFER_LENGTH][LINE_BUFFER_SIZE];//to store input
        printf("Please enter your file content and end with letter 'q':\n");
        //collect user input content to array util meet "q"
        int index = 0;
        while (index < BUFFER_LENGTH) {
            getline(&line, &len, stdin);
            if (strcmp(line, "q\n") != 0) {
                strcpy(array[index], line);//copy user input into array
                index++;
            } else {
                break;
            }
        }
        //print with conditions
        for (int i = 0; i < index && line_count < number_of_lines; i++) {
            //print odd lines
            if (line_index % 2 != 0 && only_print_even == false) {
                printf("%s", array[i]);
                line_count++;
            }
            //print even lines
            if (line_index % 2 == 0 && only_print_odd == false) {
                printf("%s", array[i]);
                line_count++;
            }
            line_index++;
        }

    } else {//file name be provided
        filename = argv[argc - 1];
        fp = fopen(filename, "r");
        if (fp == NULL) {//if file open not correctly
            printf("File doesn't exit.");
            return -1;
        }
        //file be open successfully
        while (getline(&line, &len, fp) != -1 && line_count < number_of_lines) {
            if (line_index % 2 != 0 && only_print_even == false) {
                printf("%s", line);
                line_count++;
            }

            if (line_index % 2 == 0 && only_print_odd == false) {
                printf("%s", line);
                line_count++;
            }
            line_index++;
        }
    }
}

void display_help_message() {
    printf("Options :\n"
           "-n K output the first|last K lines.\n"
           "-V Output version info: name, email, student number.\n"
           "-h display all options.\n"
           "-e|-o print even|odd lines.\n");

}



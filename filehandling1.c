//data 
//keeping data in file or taking data from file is file handling
//file is a structure (non primitive dta type)
typedef struct 
{
    short level;
    unsigned flags;
    char id;
    unsigned char hold;
    short bsize;
    unsigned char *buffer;
    unsigned *curp;
    unsigned istemp;
    short token;


}FILE;

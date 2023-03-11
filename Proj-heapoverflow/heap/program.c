#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <sys/types.h>

struct data {
 char name[64];
};

struct fp {
 int (*fp)();
};

void success()
{
 printf("Congratulations\n");
}

void fail()
{
 printf("Goal Failed\n");
}

int main(int argc, char **argv)
{
 struct data *d;
 struct fp *f;

 d = malloc(sizeof(struct data));
 f = malloc(sizeof(struct fp));
 f->fp = fail;

 printf("data is at %p, fp is at %p\n", d, f);

 strcpy(d->name, argv[1]);

 f->fp();

}


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	if(argc != 3){
		printf("usage: %s [filename] [filesize in bytes]\n", argv[0]);
		exit(1);
	}
	FILE * fp = fopen(argv[1],"w");
	fseek(fp, atol(argv[2]) - 1, SEEK_SET);
	fwrite("", 1, 1, fp);
	fclose(fp);
}

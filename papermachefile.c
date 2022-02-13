#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	if(argc != 3)
		printf("usage: %s [filename] [filesize in bytes]\n", argv[0]);
	long size = atol(argv[2]);
	FILE* fp = fopen(argv[1], "w");
	fseek(fp, size, SEEK_SET);
	char buf[1] = {'\0'};
	fwrite(buf, 1, 1, fp);
	fclose(fp);
}

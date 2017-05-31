//main.cxx
//#include <stdio.h>
#include "header.h"

//Buffer
#define BUF_DEF_AC_FIXED 128 //This is fixed because we wanna sort an full memory allocated, so we move structs from/in the array


void mateusmt_c_pause(){
	printf("Press ENTER to continue...\n");
	getchar();
}

struct s_int_key{
	int i_identification;
};

struct s_intANDchar_key{
	int i_identification;
	char ac_fixed[BUF_DEF_AC_FIXED][BUF_DEF_AC_FIXED];
};

int main(){
	printf("s_int_key size: %d bytes\ts_intANDchar_key size: %d bytes\n", sizeof(struct s_int_key), sizeof(struct s_intANDchar_key));
	mateusmt_c_pause();
	return 0;
}


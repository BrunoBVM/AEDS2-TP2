//main.cxx
//#include <stdio.h>
#include "header.h"

//Buffer
#define BUF_DEF_AC_FIXED_COL 50 
#define BUF_DEF_AC_FIXED_LIN 50 


void mateusmt_c_pause(){
	printf("Pressione ENTER para continuar...\n");
	getchar();
}

struct s_int_key{
	int i_identification;
};

struct s_intANDchar_key{
	int i_identification;
	char ac_fixed[BUF_DEF_AC_FIXED_LIN][BUF_DEF_AC_FIXED_COL];
};

int main(){
	printf("s_int_key tamanho: %d bytes\ts_intANDchar_key tamanho: %d bytes\n", sizeof(struct s_int_key), sizeof(struct s_intANDchar_key));
	f_qs_tester();
	mateusmt_c_pause();
	return 0;
}


/*Bibliografia:


*/
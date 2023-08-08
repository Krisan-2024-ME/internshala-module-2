#include <stdio.h>

//memory allocation
int main() {

	long score[5] = {147,258,369,123,456};
	for(int i = 0; i<5; i++){
	    printf("%ld\n",&score);
	}
	return 0;
}
#include <stdio.h>
int main(void) {                      //ポイントはfor文の二重構造
	for(int row = 1; row <= 9; row++){// 繰り返し関数　for(初期値; 条件: 増え方;)
		for(int col = 1; col <= 9; col++){
			printf("%2d ", row * col );	//「d と　2dの違い」　2dだと最低２文字分のスペースを用意してくれる 例:5-> 5(１桁のときにスペース入れてくれる), 10->10, 123->123
		}
		printf("\n");//改行コード（注意：¥nではない！）
	}
	return 0;
}

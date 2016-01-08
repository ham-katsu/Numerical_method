# Numerical_method
---
##なかみ
- mylib.h  
	ベクトル、行列の領域確保のライブラリです。
- example(d)  
	中に使い方のサンプルコードがあります。  

## はうとぅーゆーず
ソースコードと同じディレクトリにmylib.hを置きます。ソースコードに　　
`#include "mylib.h" `　　と書きインクルードします。

　　
## mylib.h
	`double *d1vector(int n)　
		n次元のベクトルの領域を確保します。添字は１からです。（返り値は配列のアドレス−１が返ります。）
	double *free_d1vec(double *vec)　
		メモリを開放します。vec にはNULLが入ります。
	double **d1matrix(int row,int col)　
		row*col行列の領域を確保します。添字は行列それぞれ１からです。
	double *free_d1mat(double **mat)　
		 メモリを開放します。mat にはNULLが入ります。
	double *addrow(double *vec, int n)　
		double型ベクトルvecを添字が大きい方向にn増やします。元のvecは開放されます。
		  
### 最後に
単位を落としても僕には関係ないですので👋。
適当に直したりプルリクエストしてください。質問もどうぞ。






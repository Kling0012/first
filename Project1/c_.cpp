#include<stdio.h>

//ctrl+f5 debug
//ctrl+s  save

/*

#defineと#if #elif を使用して実行されるコードを選出する。

#define lessen の後の数字を対応したコードが実行される。 

*/

#define lessen 3
<<<<<<< HEAD:Project1/ソース.cpp
//レッスン 1
#if lessen==0
#include<stdio.h>
=======

//レッスン 1
#if lessen==0
>>>>>>> first:Project1/c_.cpp

int main() {
	printf("hellw world\n");
	return 0;
}
#elif lessen==1
int main() {

	printf("test テスト \n");
	return 0;
}

#elif lessen==2

//レッスン2

<<<<<<< HEAD:Project1/ソース.cpp
#include<stdio.h>
=======
>>>>>>> first:Project1/c_.cpp
/*
C言語　古い高級言語
関数より成り立つプログラミング言語
学習の目標は独自で簡単なプログラムを復元できること。

面向过程的函数式编程语言
目标：独立编写复现简单的算法
*/

//导入头文件 stdio.h定义了众多函数
// ヘッダーファイル　一般的に使用する関数を含んでいる
// 下の文で指定する。
// #include<stdio.h>

/*  

int main (){
return 0 ;
}
メイン関数　Ｃ言語を実行する時、すべてmain関数から始まる
実行される順序は上から下へ
左から右へ

主函数 C语言执行程序时 皆从main开始 顺序为从上到下，从左到右。

*/
int main() {
	printf("HELLOW WORLD");
	return 0;
}


#elif lessen==3
//レッスン３　変数と四則演算

<<<<<<< HEAD:Project1/ソース.cpp
=======
int main(){
>>>>>>> first:Project1/c_.cpp
/*変数をデータを置く箱として考える

整数型int 単精度浮動小数点型float 倍精度浮動小数点型double 文字型char

文字型は英字一文字まで

整数か小数か確定しない時　小数点型を使う。

七桁以下の小数を使うときfloat型を使用する。これ以上はdubole型を使う。

変数の宣言は
変数型 変数名;　

例　aを整数型で宣言する。

　int a ;

 aは英数もしくは_で始まり、スペースを含んではならない

*/


	//年齢と身長を表す変数を宣言する
	//変数を宣言するとき、直接変数に値を与えることもできる。

<<<<<<< HEAD:Project1/ソース.cpp
	int age=18; //年齢を小数で表すことはないので整数型を使用する
	float height=1.7f;//身長を表すに七桁以下で事足りるのでfloat型を使用する。
=======
	int age = 18; //年齢を小数で表すことはないので整数型を使用する
	float height = 1.7f;//身長を表すに七桁以下で事足りるのでfloat型を使用する。
>>>>>>> first:Project1/c_.cpp
	/*
		float型に値をあたえるとき、値の最後にｆをつけてfloat型であることを表す必要がある。
	*/
	//変数に与えた値に変化を加える場合は再度値を与える

	//年齢が19歳になったとする。

	age = 19;

	//身長が1.8になったとする

<<<<<<< HEAD:Project1/ソース.cpp
	height = 1.8;

	//レッスン３前半終了
=======
	height = 1.8f;

	//レッスン３前半終了

	//レッスン３　四則演算


	/*
	四則演算を活用することで、演算子を用いて変数に変化を与えることができる。
	演算の順序は通常の計算と同じく、かけ割→足し引きの順で行われる。
	カッコを利用して優先度を帰ることもできる。
	*/

	//では年齢が一歳増加したとする
	age = age + 1;
	//身長が五センチ伸びたとする。
	height = height + 0.5f;
		//これは最初の変数の値ではなく、順序的に一度書き換えられた物が適用され計算されている

	//printfを利用して出力することができる。
	//この時の表現は以下のようになる

	printf("%d", age);
	printf("\n%f",height);

	//printfはスクリーンに出力するコマンドである



		//また変数同士での演算もできる

		int a, b, c;

		a = 2;
		b = 4;
		c = 6;

		//最終的にprintfで
>>>>>>> first:Project1/c_.cpp

	return 0;
}
  
#endif 






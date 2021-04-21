﻿#include<stdio.h>

//ctrl+f5 debug
//ctrl+s  save

/*

#defineと#if #elif を使用して実行されるコードを選出する。

#define lessen の後の数字を対応したコードが実行される。 

*/

#define lessen 99


//レッスン 1
#if lessen==0

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


int main() {

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


	int age = 18; //年齢を小数で表すことはないので整数型を使用する
	float height = 1.7f;//身長を表すに七桁以下で事足りるのでfloat型を使用する。


	/*
		float型に値をあたえるとき、値の最後にｆをつけてfloat型であることを表す必要がある。
	*/
	//変数に与えた値に変化を加える場合は再度値を与える

	//年齢が19歳になったとする。

	age = 19;

	//身長が1.8になったとする


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
	printf("\n%f", height);

	//printfはスクリーンに出力するコマンドである


	int a, b, c, sum;

	a = 2;
	b = 4;
	c = 6;


	printf("aは%d ｂは%d cは%d となる", a, b, c);

	sum = a + b + c;
	printf("\n%d", sum);

	sum = a - b - c;
	printf("\n%d", sum);

	sum = a * b * c;
	printf("\n%d", sum);

	sum = c / b / a;
	printf("\n%d", sum);

	sum = a * c / b;
	printf("\n%d", sum);

	sum = a + b - c;
	printf("\n%d", sum);

	/*

	1 2 12 12 -20 -21    などの数字はすべて整数=>int型

	1.4f 1.5f 6.6f 6.0f	 などの数字はすべて単精度浮動小数点型=>float型である

	4.467 67.44 7.054    などの数字はすべて倍精度浮動小数点型=>double型である

	c r - g ! F G R		 などの一文字は文字型=>charを使用する。

	これらの精度には順序がある。

	int < float < double

	これらを精度の大きな型より小さな型へ転換すると、精度が失われる。
	例えば、double型の2.5をint型に転換すると'2'となってしまう。


	*/

	int d = 5 / 2;
	printf("\ndoubleからintへ転換の結果%dである.", d);

	//では、これをfloat型に変更した時の注意点について考え

	float e = 5 / 2;

	printf("\n%f", e);

	/*

	上の文では結果、ゼロ以下の小数が省かれてしまう。
	原因として5/2が行われ、結果は2.5となる。

	この後	計算のデータより精度が確定されるが、
	5と2が両方int型であるから、その計算結果もint型となってしまうからである。
	そのため、2.5の精度は破棄され、2となる。

	 つまりこれは　float e = 2 ; と同じになる

	では、この記述をするときに。次のように文を書きます。
	*/

	float f = 5.0 / 2;

	printf("\n%f", f);

	/*
	
	上の文ではしっかりと2.5と出力される。
	
	この処理は最初に5.0/2が行われ、結果が2.5となる。

	この後計算のデータにより精度が確定されるが、

	’5.0’の精度は最高のdouble型、2の精度はint型である。
	このため、精度は最高のdouble型に統合され、double型となる。

	よって float f = 2.5に相当する。

	注意すべきは以上の処理より、二度の精度の転換がされている事である。
	初回では右辺の計算時に使用データ最高の精度に転換され、数値確定後に左側の指定する型の精度へと変換される。

	*/


	//レッスン3 後半終了

	//レッスン3 追加 変数型の変換

	/*
	型の変換では 手動で強制的に転換させる方法と、システムが自動で転換してくれる場合があります。
	*/

	//自動転換の例
	//整数型のｇはfloat型に変換されてｈに付与される。
	
	int g = 5;
	float h;
	
	h = g;

	printf("\n%f", h);




	/*
	
	また、以下の場合ではｈはfloat型とint型の計算がされるため、精度の高いfloat型に統一される。
	そして、ｈをｇへ付与する時、ｇはint型のため、自動でint型へ精度が変化され付与される。
	
	*/

	h = 5.4321+1;
	g = h;

	printf("\n%d", g);




	//強制転換の例

	// double i =5+2 ; では計算に使用されるデータの最高精度がint型のため、計算結果はint型にされてしまい小数点以下が出力されない。
	double i = 5/2;
	printf("\n%lf",i);

	//これを解決するために、手動っで強制的に変換させる必要がある。
	//()の中に指定した型を書く事で強制的に変換させる事ができる。
	double j = (double)5 / 2;
	printf("\n%lf", j);


	//この時、



	return 0;
}

#elif lessen==4

//printf関数について

/*

printfを使用するに当たって、その仕組みと書式について理解しなけばならない。

printf関数の書き方は

	printf("文字や型指定子",変数名);

で記述することができる、型指定子は順番に変数に対応する。

*/

//例　整数型変数a を表示させる

int main() {

	int a = 66;
	
	printf("%d", a);
	// %dは整数型を指定する型指定子である。
	
//また、これを文字と組み合わせて使用すると以下のようになる。

	int year = 18;

	printf("私は今年で%d歳である", year);

	/*
	
	また、使用する変数の型によって指定子は変化する。

	int->%d 
	float->%f
	double->%lf
この時、float型とdouble型は六桁になるようにデフォルトで設定されている。
　　
	*/

	float height = 1.8f;
	double gold = 11.3;

	printf("私の身長は%fで、所持金は%lf万円である。", height, gold);

	/*
	
	これらの結果を見ると、六桁を達成させるために無駄なゼロが追加されている
	これを回避するための方法として、
	float->%g
	double->%lg
	を利用するものと、
	自分で桁数をしてする二つが上げられる。

	ここで、指定子の仕組みについて説明する、指定子が必要な原因としては

	我々が指定した変数はプログラムの中では二進数として保管され、
	呼び出すときに二進数から変換する形を指定するためである、

	gを利用する二つの関数では、実数として、最も短い方法で出力されるようになるため、
	余分なゼロが表示されずにすむ。
	*/

	//手動で設定する方法について

	/*
	
	手動で桁数を指定するには、指定子に文字や数字を加えることで実現する。

	%f->%4f とすると、最大桁が４桁となり不足時にスペースが補充される。
	$f->%04fとすると、最大桁が４桁で不足時に０が補充される。
	$f->%.4fとすると、小数部分の最大が四桁となり、	最大四桁までしか表示されない

	上三つは不足時に補填がある場合は前に補充される。
	%f->$-4fとすると、左揃えになり、不足時には後ろ側に補充される。




	
	*/

	return	0;


	}

#elif lessun==5

int mian() {

	//lessen 5 scanf関数について


	return 0;
}


#endif 






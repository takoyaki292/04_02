#include <stdio.h>
//Type型自体を作る
template<typename Type1, typename Type2>


class NumMin
{
public:

	//Type型のメンバ変数を作る
	Type1 one;
	Type2 two;
	//コンストラクタ
	NumMin(Type1 numOne, Type2 numTwo) :one(numOne), two(numTwo) {};

	//小さい値を返す関数
	Type1 Min()
	{
		if (one < two)
		{
			//oneを呼び出す
			return static_cast<Type1>(one);
		}
		else
		{
			//twoを呼び出す
			return static_cast<Type1>(two);
		}
	}
};

int main()
{
	//クラステンプレートを使って、初期化している
	NumMin<int,int>b1(10, 20);
	NumMin<float,float>b2(3.0, 2.0);
	NumMin<double,double>b3(50.0, 20.0);
	NumMin<int, float>b4(10, 2.0);
	NumMin<int, double>b5(10, 20);
	NumMin<float, double>b6(1.0, 2.0);
	//出力する
	printf("%d\n", b1.Min());
	printf("%f\n", b2.Min());
	printf("%lf\n", b3.Min());
	printf("%d \n", b4.Min());
	printf("%d\n", b5.Min());
	printf("%lf\n", b6.Min());

	return 0;
}
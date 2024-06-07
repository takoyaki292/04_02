#include <stdio.h>
//Type型自体を作る
template<typename Type>


class NumMin
{
public:

	//Type型のメンバ変数を作る
	Type one;
	Type two;
	//コンストラクタ
	NumMin(Type numOne, Type numTwo) :one(numOne), two(numTwo) {};

	//小さい値を返す関数
	Type Min()
	{
		if (one < two)
		{
			//oneを呼び出す
			return static_cast<Type>(one);
		}
		else
		{
			//twoを呼び出す
			return static_cast<Type>(two);
		}
	}
};

int main()
{
	//クラステンプレートを使って、初期化している
	NumMin<int>b1(10, 20);
	NumMin<float>b2(3.0, 2.0);
	NumMin<double>b3(50.0, 20.0);

	//出力する
	printf("%d\n", b1.Min());
	printf("%f\n", b2.Min());
	printf("%lf\n", b3.Min());
	return 0;
}
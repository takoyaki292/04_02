#include <stdio.h>
//Type�^���̂����
template<typename Type1, typename Type2>


class NumMin
{
public:

	//Type�^�̃����o�ϐ������
	Type1 one;
	Type2 two;
	//�R���X�g���N�^
	NumMin(Type1 numOne, Type2 numTwo) :one(numOne), two(numTwo) {};

	//�������l��Ԃ��֐�
	Type1 Min()
	{
		if (one < two)
		{
			//one���Ăяo��
			return static_cast<Type1>(one);
		}
		else
		{
			//two���Ăяo��
			return static_cast<Type1>(two);
		}
	}
};

int main()
{
	//�N���X�e���v���[�g���g���āA���������Ă���
	NumMin<int,int>b1(10, 20);
	NumMin<float,float>b2(3.0, 2.0);
	NumMin<double,double>b3(50.0, 20.0);
	NumMin<int, float>b4(10, 2.0);
	NumMin<int, double>b5(10, 20);
	NumMin<float, double>b6(1.0, 2.0);
	//�o�͂���
	printf("%d\n", b1.Min());
	printf("%f\n", b2.Min());
	printf("%lf\n", b3.Min());
	printf("%d \n", b4.Min());
	printf("%d\n", b5.Min());
	printf("%lf\n", b6.Min());

	return 0;
}
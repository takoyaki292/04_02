#include <stdio.h>
//Type�^���̂����
template<typename Type>


class NumMin
{
public:

	//Type�^�̃����o�ϐ������
	Type one;
	Type two;
	//�R���X�g���N�^
	NumMin(Type numOne, Type numTwo) :one(numOne), two(numTwo) {};

	//�������l��Ԃ��֐�
	Type Min()
	{
		if (one < two)
		{
			//one���Ăяo��
			return static_cast<Type>(one);
		}
		else
		{
			//two���Ăяo��
			return static_cast<Type>(two);
		}
	}
};

int main()
{
	//�N���X�e���v���[�g���g���āA���������Ă���
	NumMin<int>b1(10, 20);
	NumMin<float>b2(3.0, 2.0);
	NumMin<double>b3(50.0, 20.0);

	//�o�͂���
	printf("%d\n", b1.Min());
	printf("%f\n", b2.Min());
	printf("%lf\n", b3.Min());
	return 0;
}
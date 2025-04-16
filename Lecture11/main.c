/* 11�� printf 2��° */

/* �ڷ��� (Primitive Types)
	* ������
	int				4byte ������
	long			8byte �� ����
	long long		8byte �ſ� ������
	short			2byte ���� ����
	unsigned (������)	  �� Ű���带 �տ� ���̸� ���� ������ ���
		���� > unsigned int ��������

	* ������
	char			1byte ������
	signed			1byte ��ȣ�� �ִ� 8��Ʈ ���� (-127~128)
	unsigned		1byte ��ȣ�� ���� 8��Ʈ ���� (0~255)

	* �Ǽ���
	float			4byte �Ǽ���(floating point number)
	double			8byte ū�Ǽ�
	long double		16byte �ſ�ū���� �Ǽ�

	* Ư���ڷ��� (no type)
	void			��ȯ���� ����.
	void *			(�Ÿ���̴� ���� ����)�޸��ּҰ��� ����

	* ǥ�� �߰� �ڷ������� �������
	stdint.h
	stdbool.h
*/
#include <stdio.h>
#include <stdarg.h>

short add(short a, short b)
{
	short c = a + b;
	return c;	
}

//�������� ����
int sum(int count, ...)
{
	int total = 0;

	va_list	args;		//�������� ����Ʈ
	va_start(args, count);

	int i = 0;
	while (i<count)
	{
		total = total + va_arg(args, int);
		i = i + 1;
	}	
	
	return total;
}

int main()
{
	int hp;
	hp = (int)add(10, -3);//����ȯ

	/*format specifiers (���� ������) ��� (%)
	 *
	 * %d, %i	: ������ (decimal(������) / integer)
	 * %x,%X	: ������ (16���� : ��ҹ��ڸ� ����) 
	 * %o		: ������ (8����)
	 * %f,%lf   : �Ǽ���
	 * %e,%E	: ������
	 * %g,%G	: ������
	 * %c		: ������
	 * %s		: ���ڿ���
	 * %p		: �ּҰ�
	 */
	printf("HP = %i\n", 7);
	printf("%c%c = %i\n", 'H', 80, 7);
	printf( "���� ������ = %i\n", sum(5, 1, 2, 3, 4, 5) );	//���������� ����
	printf("�̸� : %s", "������");
	
	float fl = 0.342;
	double dl = 0.0201;

	printf("����� �ŷ�: %f\n", fl);
	printf("����� �ŷ�: %lf\n", dl);
	printf("����� �ŷ�: %e\n", dl);
	printf("����� �ŷ�: %E\n", dl);

	int attack = 31;
	printf("����� ����: %d\n", attack);
	printf("����� ����: Ox%x\n", attack);
	printf("����� ����: Ox%X\n", attack);
	printf("����� �����ּ�: %p\n", &attack);

	void* attack_address = &attack;
	printf("����� �����ּ�: %d\n", *(int*)attack_address);
		
	return 0;
}
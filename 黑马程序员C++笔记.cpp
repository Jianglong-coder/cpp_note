// ���峣�����ַ�ʽ
// 1 #define �곣��
// 2 const ���εı���

// 1 #define �곣��
// #define Day 7 //Day �ǳ��� �������޸�

// ��������
// void swap(int a, int b);
// ��������
// void swap(int a,int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
// }

// ����ע�� ˫б�� /*����ע��*/
/*int a = 10;
cout << "a=" << a<<endl;
cout << "hello world" << endl;
cout << "һ���ܹ��У�" << Day << "��" << endl;*/
// 2 const ���εı���
// const int month = 12;//const ���εı���Ҳ�����޸�
// short �������� 2�ֽڣ� int��4�ֽڣ�long ��windows��ռ4�ֽ� linux��32λ��4�ֽ�  linux��64λ��8�ֽ�
// long long��8�ֽ�
// sizeof �����������ʹ�С
/*short num1 = 10;
cout << "shortռ�ڴ�ռ�Ϊ��" << sizeof(short) << endl;
int num2 = 10;
cout << "intռ�ڴ�ռ�Ϊ��" << sizeof(int) << endl;*/
// ������
// float��7λ��Ч���֣� ռ4�ֽڣ� double��15-16λ��Ч���֣� ռ8�ֽ�
// float f1 = 3.14f;//�����дf����Ĭ��3.14Ϊdouble���ͣ�Ȼ����float����ʱת��Ϊfloat������ں������f��ֱ��Ϊfloat���ͣ�����ת��
// Ĭ������� ���һ��С����ֻ��ʾ6λ��Ч����

// ��ѧ��������ʾС��
/*float f3 = 3e-2;
cout << "f3=" << f3 << endl;*/

// �ַ����� ''��������ֻ����һ���ַ���˫�����в���ֻ��1���ַ����ַ�����ռ��1���ֽ�
// bool����ռ1���ֽ�

// ���� ����������������õ������� ����С����������õ��Ľ��������С��Ҳ����������
// С��������ȡģ����

// ��Ŀ�����
// ��a��b���Ƚϣ���������ĸ�ֵ������c
// int a1 = 10;
// int b = 20;
// int c = 0;
// c = (a1 > b ? a1 : b);
// cout << "c=" << c << endl;
// zai C++����Ŀ��������ص��Ǳ��������Լ�����ֵ
//(a1 > b ? a1 : b) = 100;
// cout << "a1=" << a1 << endl;
// cout << "b=" << b << endl;

/*swich(���ʽ){
case1:ִ�����;break;
case2:ִ�����;break;
...
default:ִ�����;break;
};*/
/*
do{}
while();*/

// sizeof(������)ͳ�����鳤��

// ���������������ж�Σ�һ��дһ��

// �������ļ���дһ�����ĸ�����
// 1 ������׺��λ.h���ļ�
// 2 ������׺��λ.cpp���ļ�
// 3 ��ͷ�ļ���д����������
// 4 ��Դ�ļ��ļ���д�����Ķ���

// ָ��ռ4���ֽڣ�32λ����ϵͳ,����ѡ��x86��  ռ8���ֽڣ�64λ����ϵͳ������ѡ��x64��

// ��ָ��:ָ���ڴ��б��Ϊ0�Ŀռ�(0~255֮����ڴ�����ϵͳռ�õ�,���ɷ���),ָ���ʼ��û��ָ��ʱ,��ָ����,��ָ��ָ����ڴ�ʱ�����Է��ʵ�
// int* p = NULL;//��ָ�벻���Է���

// Ұָ��:ָ�����ָ��Ƿ����ڴ�ռ�

// const����ָ��,���������
// 1 const����ָ��,����ָ��
// 2 const���γ���,ָ�볣��
// 3 const������ָ��,�����γ���

/*
	1 const����ָ��,����ָ��
	��ָ��ǰ����� const , ���� const int *p = &a;
	��ʱ,ָ���ָ������޸�,ָ��ָ���ֵ�������޸�

*/

/*
	2 const���γ���,ָ�볣��
		int * const p = &a; ��ʱΪָ�볣��
		ָ���ָ�򲻿��Ը�,ָ��ָ���ֵ���Ը�

*/

/*
	3 const����ָ��ͳ���
		const int * const p3 = &a;
		ָ��ָ���ָ��ָ���ֵ�������Ը�

*/

// �ṹ��
/*
struct �ṹ���� {�ṹ���Ա�б�};

struct Student
{
	//��Ա�б�
	string name;//����
	int age;    //����
	int score;  //����
};
�����ṹ�������
	1 struct Student s1;
		s1.name="����";
		s1.age=18;
		s1.score=100;
	2 struct Student s2={"����",19,80};
	3 ����ṹ��ʱ�����ṹ�����:
	struct Student
{
	//��Ա�б�
	string name;//����
	int age;    //����
	int score;  //����
}s3;
����ʱ����ʡ�Խṹ������ Student s1;
*/

// ͨ��ָ����ʽṹ������е����� ��->
/*
	student s={"����",18,100};
	student *p = &s;
	cout<<"����:"<<p->name<<endl;
*/

// �ṹ��Ƕ�׽ṹ��
/*
	struct teacher
	{
		int id;//��ʦ���
		string name;//��ʦ����
		int age;//����
		struct student stu;
	}
	struct student
	{
		string name;//����
			int age;//����
			int score;//����

	}
*/

/*
c++ִ��ʱ�����ڴ滮��Ϊ4��������������ȫ������ջ������������4����������ʱ��ͬ����ŵ����ݣ����費ͬ���������ڣ������ı��
����������ź�����Ķ����ƴ��룬�ɲ���ϵͳ���й���������ֻ�������cpuִ�еĻ���ָ��
ȫ���������ȫ�ֱ����;�̬�����Լ����������ַ�����������������(����ȫ�ֳ������������ֲ�����)��ȫ�����������ڳ���������ɲ���ϵͳ�ͷ�
ջ�����ɱ������Զ������ͷţ���ź����Ĳ���ֵ���ֲ������ȣ��������β�Ҳ�����ջ��
�������ɳ���Ա������ͷţ�������Ա���ͷţ��������ʱ�ɲ���ϵͳ����

C++���ڳ�������ǰ��Ϊȫ�����ʹ�������ջ���Ͷ��������к����

��̬���� ����ͨ����ǰ���static�����ھ�̬����
static int s_a=10;
static int s_b=10;


ջ������ע�������Ҫ���ؾֲ������ĵ�ַ(������صĻ���һ�λᱣ����֮���ٱ���)
ʾ��:int *func()
{
	int a=10;
	return &a;
}
int main()
{
	int *p = func();

	cout<<*p<<endl;
	cout<<*p<<endl;

	system("pause");

	return 0;
}


��C++����Ҫʹ��new�ٶ��������ڴ�
ʾ��:
int *func()
{
	//����new�ؼ��� ���Խ����ݿ��ٵ�������new���ص��Ǵ������ݵĵ�ַ
	//ָ�� ����Ҳ�Ǿֲ���������ջ�У�ָ�뱣��������Ƿ��ڶ���
	int *p = new int(10);
	return p;
}
int main()
{
	int *p = func();
}

�ڶ�������new��������
ʾ��:
void test02()
{
	//����10���������ݵ����飬�ڶ���
	int  *arr = new int[10];//���������׵�ַ
	for(int i=0;i<10;i++)
	{
		arr[i] = i + 100;
	}
	delete[] arr;// �ͷ�����ʱ��Ҫ��[]
}
*/

/*
����:
int a = 10;
int &b = a;
���ñ����ʼ��,���ó�ʼ���󲻿ɸ���

��������������
1.ֵ����:
void mySwap01(int a,int b)
{
int temp = a;
a = b;
b = temp;
}
2.��ַ����
void mySwap02(int * a,int *b)
{
int temp =*a;
*a = *b;
*b = temp;
}
�����������ķ���ֵ
1.��Ҫ���ؾֲ�����������
int&  test01()
{
int a = 10;
return a;
}
int main(){
int &ref = test01();
cout<<"ref="<<ref<<endl;//��һ�η��صĽ����ȷ ��Ϊ���������˱���
cout<<"ref="<<ref<<endl;//�ڶ��ν������ a���ڴ��Ѿ��ͷ�
}
2.�����ĵ��ÿ�����Ϊ��ֵ
int&  test02()
{
static int a = 10;//��̬�����������ȫ������ȫ�����ϵ������ڳ��������ϵͳ�ͷ�
return a;
}
int main(){
int &ref2 = test02();
cout<<"ref2="<<ref2<<endl;//���Ϊ10
cout<<"ref2="<<ref2<<endl;//���Ϊ10
test02() = 1000;//��������ķ���ֵ������ �������ÿ�����Ϊ��ֵ
cout<<"ref2="<<ref2<<endl;//���Ϊ1000
cout<<"ref2="<<ref2<<endl;//���Ϊ1000
}

���õı���:���õı�����C++�ڲ�����һ��ָ�볣��
//���������ã�ת��Ϊint* const ref = &a;
void func(int& ref)
{
ref=100;//ref�����ã�ת��Ϊ*ref=100��
}
int main()
{
int a=100;

//�Զ�ת��Ϊint* const ref = &a;ָ�볣����ָ��ָ�򲻿ɸģ�Ҳ˵��Ϊʲô���ò��ɸ���
int& ref =a;
ref = 20;//�ڲ�����ref�����ã��Զ�ת��Ϊ:*ref =20;

cout<<"a:"<<a<<endl;
cout<<"ref:"<<ref<<endl;

func(a);
return 0;
}

��������
int & ref=10;//�����÷�
//����const֮�� �������������޸�Ϊ int temp=10; cosnt int &ref = temp;
const int & ref=10;//��ȷ�÷�
*/
/*
	����������Ĭ�ϲ���������ʵ�־Ͳ�����Ĭ�ϲ�����������ʵ��ֻ����һ����Ĭ�ϲ���
*/

/*
	��������:��������ͬ ������ͬ ��������ֵ������Ϊ�������ص�����
	1.������Ϊ�������ص�����
	void func(int &a) //int &a = 10; ���Ϸ�
	{
		cout<<"func(int &a)����"<<endl;
	}
	void func(const int &a) //const int &a = 10; �Ϸ�
	{
		cout<<"func(const int &a)����"<<endl;
	}
	int main����
	{
		int a = 10;
		func(a);//�ߵ�һ��
		func(10);//�ߵڶ���
	}

	2.������������Ĭ�ϲ���
	void func(int a)
	{
		cout<<"func(int a)����"<<endl;
	}
	void func(int a,int b=10)
	{
		cout<<"func(int a,int b=10)����"<<endl;
	}
	int main()
	{
		//func(10)//���� ���ֶ����� ��������֪�������ĸ�
	}
*/
/*
	����ռλ����:����ֵ���� ������ (��������){},ռλ����Ҳ������Ĭ�ϲ���
	void func(int a,int = 10)
	{
		cout<<"this is func"<<endl;
	}
*/
/*
	�����Ȩ��
	protected ������Է��ʸ�����protected����
	struct��classĬ�ϵķ���Ȩ�޲�ͬ structĬ��Ϊ���� classĬ��Ϊ˽��
*/

/*
	���캯������������:
	���캯������������û�з���ֵ
	���캯�������в��� ���Կ�������
	���������������в��� ���Բ�������
	�����ڶ�Ц����ǰ�Զ����������������ֶ����ã�����ֻ�� ����һ��

	�������캯��:
	class Person
	{
	public:

		Person(int a)
		{
			age=a;
		}
		Person(const Person &p)
		{
			age=p.age;//������������Կ�������ǰ����
		}

		int age;
	}

	��ʾ����������:
	Person p1;
	Person p2 = Person(10);
	Person p3 = Person(p2);

	Person(10);//�������� �ص㣺��ǰִ�н����� ϵͳ���������յ���������


	Person(p3);//��Ҫ���ÿ������캯����ʼ���������� ����������Ϊ Person(p3)�ȼ���Person p3;

	��ʽת������������:
	Person p4 = 10;//�൱��д�� Person p4 = Person(10);
	Person p5 = p4;//��������

	������������ʱ�� 3��
	1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
	class Person
	{
	public:
		Person()
		{
			cout << "PersonĬ�Ϲ��캯������" << endl;
		}
		Person(int age)
		{
			m_Age = age;
			cout << "Person�вι��캯������" << endl;
		}
		Person(const Person &p)
		{
			m_Age = p.m_Age;
			cout << "Person�������캯������" << endl;
		}
		~Person()
		{
			cout << "Person������������" << endl;
		}
		int m_Age;

	};
	void test01()
	{
		Person p1(20);
		Person p2(p1);
	}
	int main() {
		test01();
		return 0;

	2.ֵ���ݵķ�ʽ������������ֵ

	class Person
	{
	public:
		Person()
		{
			cout << "PersonĬ�Ϲ��캯������" << endl;
		}
		Person(int age)
		{
			m_Age = age;
			cout << "Person�вι��캯������" << endl;
		}
		Person(const Person &p)
		{
			m_Age = p.m_Age;
			cout << "Person�������캯������" << endl;
		}
		~Person()
		{
			cout << "Person������������" << endl;
		}
		int m_Age;

	};
	void test01()
	{
		Person p1(20);
		Person p2(p1);
	}
	void dowork(Person p)
	{

	}
	void test02()
	{
		Person p;
		dowork(p);
	}
	int main() {
		//test01();
		test02();
		return 0;
	}
	3.��ֵ�ķ�ʽ���ؾֲ�����

	class Person
	{
	public:
		Person()
		{
			cout << "PersonĬ�Ϲ��캯������" << endl;
		}
		Person(int age)
		{
			m_Age = age;
			cout << "Person�вι��캯������" << endl;
		}
		Person(const Person &p)
		{
			m_Age = p.m_Age;
			cout << "Person�������캯������" << endl;
		}
		~Person()
		{
			cout << "Person������������" << endl;
		}
		int m_Age;

	};
	//3.ֵ��ʽ���ؾֲ�����
	Person doWork2()
	{
		Person p1;
		cout << (int*)&p1 << endl;
		return p1;
	}
	void test03()
	{
		Person p = doWork2();
		cout << (int*)&p << endl;
	}

	int main() {
		test03();
		return 0;
	}
*/
/*
* �������
	class Person
	{
	public:

		Person(int age, int height)
		{
			m_Age = age;
			m_Height = new int(height);
			cout << "Person�вι��캯������" << endl;
		}

		//��� ���ǳ��������������
		Person(const Person &p)
		{
			cout << "Person�������캯������" << endl;
			m_Age = p.m_Age;
			//m_Height = p.m_Height;������Ĭ��ʵ�ֵĿ���
			//�������
			m_Height = new int(*p.m_Height);

		}
		~Person()
		{
			if (m_Height != NULL)
			{
				delete m_Height;
				m_Height = NULL;
			}
			cout << "Person������������" << endl;
		}
		int m_Age;
		int* m_Height;

	};
	void test01()
	{
		Person p1(20,160);
		cout << "p1������Ϊ��" << p1.m_Age << "���Ϊ��"<<p1.m_Height<<endl;
		Person p2(p1);
		cout << "p2������Ϊ��" << p2.m_Age << "���Ϊ��" << p2.m_Height << endl;
	}

	int main() {
		test01();
		return 0;
	}
*/

/*
��ʼ���б�:������ʼ������
���캯��():����1(ֵ1),����2(ֵ2)...{}
*/

/*
�������Ϊ������Աʱ �ȹ��캯����Ա�Ķ��� �ٹ������������ ������������� ���������������
//�ֻ���
class Phone
{
public:
	Phone(string pName) :m_PName(pName)
	{
		cout << "phone�Ĺ��캯������" << endl;
	}
	~Phone()
	{
		cout << "phone��������������" << endl;
	}
	//�ֻ�Ʒ��
	string m_PName;
};
class Person
{
public:
	//����
	string m_Name;
	//�ֻ�
	Phone m_Phone;
	Person(string name, string pName) :m_Name(name), m_Phone(pName)
	{
		cout << "person�Ĺ��캯������" << endl;
	}
	~Person()
	{
		cout << "person��������������" << endl;
	}
};
void test01()
{
	Person p("����", "iphone");
	cout << p.m_Name << "���ţ�" << p.m_Phone.m_PName << endl;
}
int main() {
	test01();
	return 0;
}
*/

/*
//��̬��Ա:��̬��Ա���� ��̬��Ա����
//��̬��Ա����
class Person
{
	//��̬��Ա����:���ж����� ����׶η����ڴ�(��ȫ����) �������� �����ʼ��
public:
	static int m_A;//��������

	//��̬��Ա����Ҳ���з���Ȩ�޵�
private:
	static int m_B;
};

int Person::m_A = 100;//�����ʼ��
int Person::m_B = 200;//�����ʼ��
void test01() {
	Person p;
	cout << p.m_A << endl;
	//cout << p.m_B << endl; ˽�����ݲ��ܷ���

}
void test02()
{

	//��̬��Ա���� ������ĳ�������� ���ж��󶼹���ͬһ������
	//��˾�̬��Ա���������ַ��ʷ�ʽ
	//1.ͨ��������з���
	Person p;
	cout << p.m_A << endl;
	//2.ͨ���������з���
	cout << Person::m_A << endl;
}
int main() {
	test01();
	return 0;
}
*/

/*
	��̬��Ա����:���ж�����һ������ ��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
*/

/*
	��C++�����ڵĳ�Ա�����ͳ�Ա�����ֿ��洢  ֻ�зǾ�̬��Ա������������Ķ�����
	�ն���ռ���ڴ�ռ�Ϊ1�ֽ�  C++���������ÿ���ն���Ҳ����һ���ֽڿռ� ��Ϊ�����ֿն���ռ�ڴ��λ��
	ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ
*/

/*
	thisָ��:
	���βκͳ�Ա����ͬ��ʱ������thisָ��������
	����ķǾ�̬��Ա�����з��ض����� ����return *this
class Person
{
public:
	Person(int age)
	{
		this->age = age;
	}
	Person& PersonAddAge(Person& p)//�����������ΪPerson�ᴴ���µĶ��󷵻� ÿ�ε��ö������¶��� ����Person&�᷵�ر���
	{
		this->age += p.age;
		return *this;
	}
	int age;
};
void test02()
{
	Person p1(10);
	Person p2(10);
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);//��ʽ����  ��return *thisʵ��
	cout << "p2������Ϊ��" << p2.age << endl;
}
int main() {
	test02();
	return 0;
}
*/

/*
C++�п�ָ����Ե��ó�Ա���� ����Ҫע����û���õ�thisָ��
����õ�thisָ��  �����жϱ�֤����Ľ�׳��
class Person
{
public:
	void showClassName()
	{
		cout << "this is Person class " << endl;
	}
	void showPersonAge()
	{
		cout << "age=" << m_Age << endl;//m_Age�൱��this->m_Age
	}
	int m_Age;
};
void test01()
{
	Person* p = NULL;
	p->showClassName(); //��ȷ  ��ָ����Է��ʳ�Ա���� ���ǲ�����thisָ��
	//p->showPersonAge(); ����
}
int main()
{
	test01();
	return 0;
}
*/

/*
const���γ�Ա����:
������:	��Ա�������const�����ǳ�Ϊ�������Ϊ������
		�������ڲ������޸ĳ�Ա����
		��Ա��������ʱ�ӹؼ���mutable���ڳ���������Ȼ�����޸�
������:	��������ǰ��const�Ƹö���Ϊ������
		������ֻ�ܵ��ó�����


class Person
{
public:
	//thisָ��ı��� ��ָ�볣�� ָ���ָ���ǲ������޸ĵ�
	//�ڳ�Ա���������const ���ε���thisָ����ָ��ָ���ֵҲ�������޸� ����������
	void showPerson() const
	{
		//m_A = 100; ��Ϊ������const ���Բ����޸�
		m_B=100;//��Ϊ����ǰ����mutable ���Կ����޸�
		//this =NULL; thisָ�벻�����޸�ָ���ָ�� ����thisָ��ָ���ֵ�ǿ����޸ĵ�
	}

	int m_A;
	mutable int m_B; //������� ��ʹ�ڳ������� �ڳ������� Ҳ�����޸����ֵ
};
void test01()
{
	Person p;
	p.showPerson();
}
void test01()
{
	const Person p;//�ڶ���ǰ��һ��const��ɳ����� �ö�������ֵ�������޸ģ�����m_B����mutable�����޸�
	//������ֻ�ܵ��ó�����
}
int main()
{
	test01();
	return 0;
}
*/

/*
��Ԫ����ʵ��:ȫ�ֺ�������Ԫ
			������Ԫ
			��Ա��������Ԫ
ȫ�ֺ�������Ԫ:
class Building
{
	//goodGayȫ�ֺ�������Ԫ���� ���Է���building�е�˽�г�Ա
	friend void goodGay(Building* building);
public:
	Building()
	{
		m_SittingRoom = "����";
		m_BedRoom = "����";
	}
public:
	string m_SittingRoom;//����
private:
	string m_BedRoom;//����
};

void goodGay(Building *building)
{
	cout << "���ڷ��ʣ�" << building->m_BedRoom << endl;
	cout << "���ڷ��ʣ�" << building->m_SittingRoom << endl;
}
void test01()
{
	Building b;
	goodGay(&b);
}
int main() {
	test01();
	return 0;
}

������Ԫ:
class Building
{
	friend class GoodGay;
public:
	Building();
	string m_SittingRoom;//����
private:
	string m_BedRoom;//����

};
class GoodGay
{
public:
	GoodGay();
	void visit();//�ιۺ��� ����Building�е�����
	Building* building;
};
GoodGay::GoodGay()
{
	//�������������
	building = new Building;
}
void GoodGay::visit()
{
	cout << "���ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "���ڷ��ʣ�" << building->m_BedRoom << endl;
}
void test01()
{
	GoodGay g;
	g.visit();
}
//�����Ա����
Building::Building()
{
	m_SittingRoom = "����";
	m_BedRoom = "����";
}
int main()
{
	test01();
	return 0;
}



��Ա��������Ԫ:
class Building;
class GoodGay
{
public:
	GoodGay();
	void visit();//��visit�������Է���Building��˽�г�Ա
	void visit2();//��visit2���������Է���Building��˽�г�Ա
	Building* building;
};
class Building
{
	//GoodGay���µ�visit��Ա������Ϊ�����friend ���Է���˽�г�Ա
	friend void GoodGay::visit();
public:
	Building();
	string m_SittingRoom;//����
private:
	string m_BedRoom;//����

};

GoodGay::GoodGay()
{
	//�������������
	building = new Building;
}
void GoodGay::visit()
{
	cout << "visit���ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "visit���ڷ��ʣ�" << building->m_BedRoom << endl;
}
void GoodGay::visit2()
{
	cout << "visit2���ڷ��ʣ�" << building->m_SittingRoom << endl;
}
void test01()
{
	GoodGay g;
	g.visit();
	g.visit2();
}
//�����Ա����
Building::Building()
{
	m_SittingRoom = "����";
	m_BedRoom = "����";
}
int main() {
	test01();
	return 0;
}
*/

/*
���������:
class Person
{
public:
	int m_A;
	int m_B;
	Person(int m_A=0, int m_B=0) { this->m_A = m_A; this->m_B = m_B; }
	//�ӷ�����(��Ա����)
	//Person operator+(Person &p)
	//{
	//	Person temp;
	//	temp.m_A = this->m_A + p.m_A;
	//	temp.m_B = this->m_B + p.m_B;
	//	return temp;
	//}

};
//�ӷ�����(��������)
Person operator+(Person& p1,Person &p2)
{
	Person temp;
	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p1.m_B + p2.m_B;
	return temp;
}
Person operator+(Person& p1, int num)
{
	Person temp;
	temp.m_A = p1.m_A + num;
	temp.m_B = p1.m_B + num;
	return temp;
}
void test01()
{
	Person p1(10, 10);
	Person p2(10, 10);
	Person p3 = p1 + p2;
	Person p4 = p1 + 100;
	cout << "p3.m_A=" << p3.m_A << endl;
	cout << "p3.m_B=" << p3.m_B << endl;
	cout << "p4.m_A=" << p4.m_A << endl;
	cout << "p4.m_B=" << p4.m_B << endl;
}
int main() {
	test01();
	return 0;
}


//��ֵ���������
class Person
{

public:
	int* m_Age;
	Person(int age)
	{
		m_Age = new int(age);
	}
	~Person()
	{
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;

		}
	}
	Person& operator=(Person&p)
	{
		if (this->m_Age != NULL)
		{
			delete this->m_Age;
			m_Age = NULL;
		}
		this->m_Age = new int(*p.m_Age);
		return *this;
	}

};
void test01()
{
	Person p1(18);
	Person p2(20);
	Person p3(30);
	p3=p2 = p1;
	cout << "p1������Ϊ:" << *p1.m_Age << endl;
	cout << "p2������Ϊ:" << *p2.m_Age << endl;
	cout << "p3������Ϊ:" << *p3.m_Age << endl;
}
int main() {
	test01();
	return 0;
}





//�������������  ǰ��++�ͺ���++���������
class MyInteger
{
	friend ostream& operator<<(ostream& cout,MyInteger);
private:
	int m_Num;
public:
	MyInteger()
	{
		m_Num = 0;
	}
	//����++�����(ǰ��)
	MyInteger& operator++()
	{
		this->m_Num++;
		return *this;
	}
	//����++�����(����)
	MyInteger operator++(int)//int����ռλ���� ������������ǰ�úͺ��õ���
	{
		//���õ������ص��Ǿֲ����� �������ý����� ������ͷŵ� ���Բ��ܷ������� Ҫ����ֵ
		MyInteger temp = *this;
		m_Num++;
		return temp;
	}
};

ostream& operator<<(ostream& cout, MyInteger myint)
{
	cout << myint.m_Num;
	return cout;
}

void test01()
{
	MyInteger myint;
	cout << ++myint << endl;
}
void test02()
{
	MyInteger myint;
	cout << myint++ << endl;
}
int main() {
	test01();
	test02();
	return 0;
}
*/

/*
�̳�:
	public:���м̳� ������������ ����Ȩ�޲���
	protected:�����̳� �����е�public��protected�����protectedȨ��
	private:˽�м̳� �����е�public��protected�����privateȨ��


	�̳��еĹ����������˳��:���๹��->���๹��->��������->��������


	�̳�ͬ����Ա����ʽ: ��������ͬ����Ա ֱ�ӷ��ʼ���  s.m_A
						���ʸ���ͬ����Ա ��Ҫ�Ӽ������� s.Base::m_A
	��������г��ֺ͸���ͬ���ĳ�Ա���� �����ͬ����Ա�����ص�����������ͬ����Ա����
	�������ʵ������б����ص�ͬ����Ա������Ҫ��������


	�̳���ͬ����̬��Ա������:��̬��Ա�ͷǾ�̬��Ա�Ĵ���ʽһ�� �������򼴿�
	����Son::Base::m_A   Son::Base::func()����

	����ͬʱ�̳ж����:
	class ����:�̳з�ʽ ����1,�̳з�ʽ ����2
	ʵ�ʿ����в�����ʹ�ö�̳�

*/

/*
	���μ̳�:
					����
				-    -
				-      -
				��        ����
				-     -
					- -
					����
���μ̳����⣺1��̳��˶�������� ���ռ̳��˶�������� ������ʹ������ʱ �����������
				2���ռ̳��Զ�������ݼ̳������ݣ���ʵֻ��Ҫһ�ݼ���

������̳� �̳��Ǽ��Ϲؼ���virtual��Ϊ��̳� Animal��Ϊ�����  ��: class Sheep:virtual public Animal{};
��̳к� �������ݾ�ֻ��һ�� ��̳�ʱ�̳е���vbptr(�����ָ��) ����ָ�����vbtable(������) �������¼�˸���ƫ����(����ͬ)
����ָ���ͨ��ƫ�����ҵ�Ψһ��һ������
*/

/*
��̬:
		��̬��̬: �������غ���������� ���ú�����
		��̬��̬:��������麯��ʵ������ʱ��̬
��̬�Ͷ�̬������:
			��̬��̬�ĺ�����ַ��󶨣�����׶�ȷ��������ַ
			��̬��̬�ĺ�����ַ��󶨣����н׶�ȷ��������ַ

//��̬

//������
class Animal
{
private:

public:
	virtual void speak()
	{
		cout << "������˵��" << endl;
	}
};
//����
class Dog :public Animal {
public:
		void speak()
	{
		cout << "С����˵��" << endl;
	}
};
//è��
class Cat :public Animal
{
public:
	//�麯��
		void speak()
	{
		cout << "Сè��˵��" << endl;
	}
};
//ִ��˵���ĺ���
//��ַ��� �ڱ���׶�ȷ��������ַ
//�����ִ����è˵�� ��ô���������ַ�Ͳ�����ǰ�󶨣���Ҫ�����н׶ν��а󶨣����е�ַ���
//����취�� �ڻ���ĺ���ǰ����virtual ����麯��

//��̬��̬��������
//1. �м̳й�ϵ
//2. ������д������麯��

//��̬��̬ʹ��
//����ָ��������� ִ���������
void doSpeak(Animal &animal)
{
	animal.speak();
}
void test01()
{
	Cat cat;
	doSpeak(cat);
	Dog dog;
	doSpeak(dog);
}
int main() {
	test01();
	return 0;
}

*/

/* P137  ��̬ʵ�� ��������
class Calculator
{
public:
	int getResult(string oper)
	{
		if (oper == "+")
		{
			return m_Num1 + m_Num2;
		}
		if (oper == "-")
		{
			return m_Num1 - m_Num2;
		}
		if (oper == "*")
		{
			return m_Num1 * m_Num2;
		}
		//�������ᳫ����ԭ��:����չ���п��ţ����޸Ľ��йر�
		//
	}
	int m_Num1;
	int m_Num2;
};
class AbstractCalculator
{
public:
	virtual int getResult()
	{
		return 0;
	}
	int m_Num1;
	int m_Num2;
};
//�ӷ���������
class AddCalculator :public AbstractCalculator
{
	virtual int getResult()
	{
		return m_Num1 +m_Num2;
	}
};
//������������
class SubCalculator :public AbstractCalculator
{
	virtual int getResult()
	{
		return m_Num1 - m_Num2;
	}
};
//�˷���������
class MulCalculator :public AbstractCalculator
{
	virtual int getResult()
	{
		return m_Num1 * m_Num2;
	}
};
void test02()
{
	//��̬ʹ������
	//����ָ���������ָ���������

	//�ӷ�����
	AbstractCalculator* abc = new AddCalculator;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;
	cout << abc->m_Num1 << "+" << abc->m_Num2 << "=" << abc->getResult() << endl;
	delete abc;
	AbstractCalculator* abcd = new SubCalculator;
	abcd->m_Num1 = 100;
	abcd->m_Num2 = 100;
	cout << abcd->m_Num1 << "-" << abcd->m_Num2 << "=" << abcd->getResult() << endl;
	delete abcd;
}
void test01()
{
	Calculator c;
	c.m_Num1 = 10;
	c.m_Num2 = 10;
	cout << c.m_Num1 << "+" << c.m_Num2 << "=" << c.getResult("+") << endl;
	cout << c.m_Num1 << "-" << c.m_Num2 << "=" << c.getResult("-") << endl;
	cout << c.m_Num1 << "*" << c.m_Num2 << "=" << c.getResult("*") << endl;

}
int main() {
	test01();
	test02();
	return 0;
}
*/

/*P138 ���麯��
д��:virtual ����ֵ���� ������ (�����б�) =0 ;
�������д��麯�� ���Ϊ������
������: �޷�ʵ�����������������д�������еĴ��麯��������Ҳ���ڳ�����

class Base {
public:
	//ֻҪ��һ�����麯���������ͳ�Ϊ������
	virtual void func() = 0;
};
class Son :public Base
{
public:
	virtual void func() {
		cout << "func�����ĵ���" << endl;
	};
};
void test01() {
	Base* base = new Son;
	base->func();
}
int main()
{
	test01();
	return 0;
}

*/
/*P140 �������ʹ�������
��̬ʹ��ʱ����������������Կ��ٵ�����������ָ�����ͷ�ʱ�޷������������������
����������������е�����������Ϊ���������ߴ�������
�������ʹ��������Ĺ��ԣ�
	�����Խ������ָ���ͷ��������
	����Ҫ�о���ĺ���ʵ��
�������ʹ�������������
	����Ǵ����������������ڳ����࣬�޷�ʵ��������
class Animal
{
public:
	Animal()
	{
		cout << "Animal�Ĺ��캯������" << endl;
	}
	//virtual ~Animal()
	//{
	//	cout << "Animal��������������" << endl;
	//}
	//��������  ����������������ֻ�ܴ���һ��
	//�д���������Ҳ���ڳ����� ����ʵ����
	virtual ~Animal() = 0;
	virtual void speak()=0;
};
//Animal�µĴ������� ��Animal��Ҳ�ж�������ʱ ����Ҳ��Ҫ����
Animal::~Animal()
{
	cout << "Animal�Ĵ���������������" << endl;
}
class Cat :public Animal
{
public:
	Cat(string name) {
		cout << "Cat�Ĺ��캯������" << endl;
		m_Name = new string(name);
	}
	virtual void speak() {
		cout <<*m_Name<< "Сè��˵��" << endl;
	}
	string* m_Name;
	~Cat()
	{
		if (m_Name != NULL)
		{
			cout << "Cat��������������" << endl;
			delete m_Name;
			m_Name = NULL;
		}
	}
};
void test01()
{
	Animal* animal = new Cat("Tom");
	animal->speak();
	//����ָ��������ʱ�򣬲����������������������������������ж������ԣ������ڴ�й¶��Ӧ�ø�Ϊ�������ͻ���������������
	delete animal;

}
int main()
{
	test01();
	return 0;
}
*/
/*P143д�ļ�
�ļ����ͷ�Ϊ���֣��ı��ļ��Ͷ������ļ�
	�ı��ļ����ļ����ı���ASCII����ʽ�洢�ڼ������
	�������ļ����ļ����ı��Ķ�������ʽ�洢�ڼ�����У��û�һ�㲻��ֱ�Ӷ�������
�����ļ��������ࣺ
	1 ofstream��д����
	2 ifstream��������
	3 fstream����д����
д�ļ��������£�
1 ����ͷ�ļ���
	#include<fstream>
2 ����������
	ofstream ofs;
3 ���ļ�
	ofs.open("�ļ�·��",�򿪷�ʽ);
4 д����
	ofs<<"д�������";
5 �ر��ļ�
	ofs.close();

�ļ��򿪷�ʽ��
�򿪷�ʽ             ����
ios::in				Ϊ���ļ������ļ�
ios::out			Ϊд�ļ������ļ�
ios::ate			��ʼλ�ã��ļ�β
ios::iapp			׷�ӷ�ʽд�ļ�
ios::trunc			����ļ����� ��ɾ�� �ٴ���
ios::binary			�����Ʒ�ʽ
�ļ��򿪷�ʽ�������ʹ�� ���� | ������
ios::binary | ios::out



void test01()
{
	//1 ����ͷ�ļ� fstream
	//2 ����������
	ofstream ofs;
	//3 ָ���򿪷�ʽ
	ofs.open("test.txt",ios::out);
	//4 д����
	ofs << "����������" << endl;
	ofs << "�Ա���" << endl;
	ofs << "���䣺18" << endl;
	ofs.close();
}
void test02()
{
	//1 ����ͷ�ļ�

	//2 ����������
	ifstream ifs;
	//3 ���ļ� �ж��Ƿ�򿪳ɹ�
	ifs.open("test.txt",ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}
	//4 ������
		//��һ��
			//char buf[1024] = {0};
			//while (ifs >> buf)
			//{
			//	cout << buf << endl;
			//}
		//�ڶ���
			//char buf[1024] = { 0 };
			//while (ifs.getline(buf,sizeof(buf)))
			//{
			//	cout << buf << endl;
			//}
		//������
			//string buf;
			//while (getline(ifs,buf))
			//{
			//	cout << buf << endl;
			//}
		//������ ���Ƽ���
			//char c;
			//while ((c=ifs.get())!=EOF)
			//{
			//	cout << c;
			//}
	//5 �ر��ļ�
			ifs.close();
}
int main()
{
	test01();
	test02();
	return 0;
}
*/
/*P145�����ƶ�д�ļ�
�����Ʒ�ʽд�ļ���Ҫ������������ó�Ա����write
����ԭ��: ostream& write(const char* buffer,int len);
�����Ʒ�ʽ���ļ���Ҫ������������ó�Ա����read
����ԭ��:istream& read(char *buffer,int len);
��������:�ַ�ָ��bufferָ���ڴ���һ�οռ䡣len�Ƕ�д���ֽ���

//�������ļ� д�ļ�
class Person
{
public:
	char m_Name[64];//����
	int m_Age;//����
};
void test01()
{
	ofstream ofs("person.txt", ios::out | ios::binary);
	//ofs.open("person.txt",ios::out | ios::binary);
	Person p = { "����",18 };
	ofs.write((const char*)&p,sizeof(Person));
	ofs.close();
}
//�������ļ� ���ļ�
void test02()
{
	ifstream ifs;
	ifs.open("person.txt",ios::in|ios::binary);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}
	Person p;
	ifs.read((char *)&p,sizeof(Person));
	cout << "������"<< p.m_Name  << "���䣺"<<p.m_Age << endl;
	ifs.close();
}
int main()
{
	//test01();
	test02();
	return 0;
}
*/

/*p168����ģ������䷨
ģ���Ϊ������ģ�����ģ��
����ģ�����ã�����һ��ͨ�ú������亯������ֵ���ͺ��β����Ϳ��Բ�����ָ������һ�����������������

template<typename T>
������������
//����ģ��
template<typename T>//����һ��ģ�壬���߱�����T��ͨ����������
void mySwap(T &a,T&b)
{
	T temp = a;
	a = b;
	b = temp;
}
void test01()
{
	int a = 10;
	int b = 20;
	//�����ַ�ʽʹ�ú���ģ��
	//1.�Զ������Ƶ�
	mySwap(a,b);
	cout << "a=" << a << endl;
	cout << "b=" << b<< endl;
	//2.��ʾָ������
	mySwap<int>(a, b);
}
int main()
{
	test01();
	return 0;
}




//����ģ��ע������
//����ģ��
template<typename T>//����һ��ģ�壬���߱�����T��ͨ����������
void mySwap(T &a,T&b)
{
	T temp = a;
	a = b;
	b = temp;
}
//1.�Զ������Ƶ��������Ƶ���һ�µ���������T�ſ���ʹ��
void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	//�����ַ�ʽʹ�ú���ģ��
	//1.�Զ������Ƶ�
	mySwap(a,b);
	//mySwap(a,c);//���� �Ƶ�����һ�µ���������
	cout << "a=" << a << endl;
	cout << "b=" << b<< endl;
	//2.��ʾָ������
	mySwap<int>(a, b);
}

//2.ģ�����Ҫȷ����T���������ͣ��ſ���ʹ��
template<class T>
void func()
{
	cout << "func����" << endl;
}
void test02()
{
	func<int>();
}
int main()
{
	test01();
	test02();
	return 0;
}
*/

/*P171��ͨ�����뺯��ģ�������

//1.��ͨ�������ÿ��Է�����ʽ����ת��
//2.����ģ�� ���Զ������Ƶ��������Է�����ʽ����ת��
//3.����ģ�壬����ʾָ�����ͣ����Է�����ʽ����ת��
//��ͨ����
int myAdd01(int a, int b)
{
	return a + b;
}
//����ģ��
template<class T>
T myAdd02(T a, T b)
{
	return a + b;
}
void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c';//a��Ӧ97  c��Ӧ99
	cout << myAdd01(a, c) << endl;

	//�Զ������Ƶ�
	myAdd02(a,b);
	cout << myAdd02(a, b) << endl;
	//cout << myAdd02(a, c) << endl;//����


	//��ʾָ������ ������ʽת��
	cout << myAdd02<int>(a, c)<< endl;
}
int main()
{
	test01();
	return 0;
}
*/

/*P172 ��ͨ�����ͺ���ģ����ù���
 1.�������ģ�����ͨ���������Ե��ã����ȵ�����ͨ����
 2.����ͨ����ģ������б� ǿ�Ƶ��� ����ģ��
 3.����ģ����Է�����������
 4.�������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��
 ��Ȼ�ṩ�˺���ģ�壬��þͲ�Ҫ�ṩ��ͨ�������������ײ���������
 void myPrint(int a,int b)
{
	cout << "���õ���ͨ����" << endl;
}
template<class T>
void myPrint(T a, T b)
{
	cout << "���õ�ģ�庯��" << endl;
}
template<class T>
void myPrint(T a, T ,T c)
{
	cout << "���õ�����ģ�庯��" << endl;
}
void test01()
{
	int a = 10;
	int b = 20;
	myPrint(a,b);//���ȵ�����ͨ����

	//ͨ����ģ������б�ǿ�Ƶ��ú���ģ��
	myPrint<>(a,b);
	myPrint<>(a,b,b);//����

	//�������ģ��������õ�ƥ�䣬���ȵ��ú���ģ��
	char c1 = 'a';
	char c2 = 'b';
	myPrint(c1,c2);
}
int main()
{
	test01();
	return 0;
}
*/

/*P173 ģ��ľ�����
ģ���ͨ���Բ������ܵ�      ��Щ�ض��������ͣ���Ҫ�þ��廯��ʽ������ʵ��

class Person
{
public:
	Person(string name,int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};
//�Ա����������Ƿ����
template <class T>
bool myCompare(T&a,T&b)
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}
template <>
bool myCompare(Person& p1, Person& p2)
{
	if (p1.m_Age == p2.m_Age && p1.m_Name == p2.m_Name)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void test01()
{
	int a = 10;
	int b = 20;
	bool ret = myCompare(a, b);
	if (ret)
	{
		cout << "a==b" << endl;
	}
	else
	{
		cout << "a!=b" << endl;
	}
}
void test02()
{
	Person p1("Tom", 10);
	Person p2("Tom", 10);
	bool ret = myCompare(p1, p2);
	if (ret)
	{
		cout << "p1==p2" << endl;
	}
	else
	{
		cout << "p1!=p2" << endl;
	}
}
int main()
{
	test01();
	test02();
	return 0;
}
*/

/*P174��ģ������﷨
��ģ�����ã�����һ��ͨ���࣬���еĳ�Ա���������Ϳ��Բ�����ָ������һ����������������

template<class T>
��

//��ģ��
template<class NameType,class AgeType>
class Person
{
public:
	Person(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	void showPerson()
	{
		cout << "name:" << this->m_Name << "  age:" << this->m_Age << endl;
	}
	NameType m_Name;
	AgeType m_Age;
};

void test01()
{
	Person<string, int> p1("�����", 999);
	p1.showPerson();
}

int main()
{
	test01();
	//test02();
	return 0;
}
*/

/*P175��ģ���뺯��ģ������
1.��ģ��û���Զ������Ƶ���ʹ�÷�ʽ
2.��ģ����ģ������б��п�����Ĭ�ϲ���

//��ģ��
template<class NameType,class AgeType=int>
class Person
{
public:
	Person(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	void showPerson()
	{
		cout << "name:" << this->m_Name << "  age:" << this->m_Age << endl;
	}
	NameType m_Name;
	AgeType m_Age;
};

//1.��ģ��û���Զ������Ƶ�ʹ�÷�ʽ
void test01()
{
	//Person p1("�����", 999); �����÷� ��ģ�岻���Զ��Ƶ���������

}
//2.��ģ����ģ������б��п�����Ĭ�ϲ���
void test02()
{
	Person<string> p("��˽�", 999);//�����ģ�������Ĭ��ֵ ���Բ���ֵint
	p.showPerson();
}
int main()
{
	test01();
	test02();
	return 0;
}
*/

/*P176��ģ���г�Ա��������ʱ��
��ģ���г�Ա��������ͨ���г�Ա��������ʱ�����������
1.��ͨ���еĳ�Ա����һ��ʼ�Ϳ��Դ���
2.��ģ���еĳ�Ա�����ڵ���ʱ�Ŵ���
//��ģ���Ա��������ʱ��
class Person1
{
public:
	void showPerson1()
	{
		cout << "Person1 show" << endl;
	}

};
class Person2
{
public:
	void showPerson2()
	{
		cout << "Person2 show" << endl;
	}

};
template<class T>
class MyClass
{
public:
	T obj;
	//��ģ���г�Ա����
	void func1()
	{
		obj.showPerson1();
	}
	void func2()
	{
		obj.showPerson2();
	}

};

void test01()
{
	MyClass<Person1>m;
	m.func1();
	//m.func2(); ���� û��showPerson2����
	MyClass<Person2>m2;
	m2.func2();
	//m2.func1(); ���� û��showPerson1����

}

int main()
{
	test01();
	//test02();
	return 0;
}
*/

/*p177��ģ���������������
���ַ�ʽ��
 1.ָ����������� ֱ����ʾ�������������
 2.����ģ�廯     �������еĲ�����Ϊģ����д���
 2.������ģ�廯   ������������� ģ�廯���д���

template<class T1, class T2>
class Person
{
public:
	T1 m_Name;
	T2 m_Age;
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	void showPerson()
	{
		cout << "name��" << this->m_Name << " age��" << this->m_Age << endl;
	}
};
//1.ָ����������
void printPerson1(Person<string, int>& p)
{
	p.showPerson();
}
void test01()
{
	Person<string, int>p("sun", 100);
	printPerson1(p);
}
//2.����ģ�廯
template<class T1,class T2>
void printPerson2(Person<T1,T2>& p)
{
	p.showPerson();
	//cout << "T1������Ϊ��" << typeid(T1).name() << endl;
	//cout << "T2������Ϊ��" << typeid(T2).name() << endl;

}
void test02()
{
	Person<string, int>p("zhu", 99);
	printPerson1(p);
}
//3.��������ģ�廯
template<class T>
void printPerson3(T& p)
{
	p.showPerson();
}
void test03()
{
	Person<string, int>p("tang", 30);
	printPerson1(p);
}
int main()
{
	test01();
	test02();
	test03();
	return 0;
}
*/

/*P178��ģ����̳�
����ģ�������̳�ʱ��ע�⣺
������̳еĸ�����һ����ģ��ʱ��������������ʱ��Ҫָ����������T������
�����ָ�����������޷�����������ڴ�
��������ָ����������T�����ͣ�����Ҳ��Ҫ��Ϊ��ģ��
//��ģ����̳�
template<class T>
class Base
{T m;};
class Son :public Base<int>//����̳�ʱ��Ҫָ�������е�T����
{};
//��Ҫ����ָ��������T���ͣ�����Ҳ��Ҫ��Ϊ��ģ��
template<class T1,class T2>
class Son2 :public Base<T2>
{T1 obj;};
void test01()
{Son2<int, char>S2;}
*/

/*P179��ģ���Ա��������ʵ��
template<class T1, class T2>
class Person
{
public:
	T1 m_Name;
	T2 m_Age;
	Person(T1 name, T2 age);
	void showPerson();
};
template<class T1,class T2>
Person<T1,T2>::Person(T1 name, T2 age)
{
	this->m_Name = name;
	this->m_Age = age;
}
template<class T1,class T2>
void Person<T1, T2>::showPerson()
{
	cout << "name��" << this->m_Name << " age��" << this->m_Age << endl;
}
void test01()
{
	Person<string, int>p("Tom",20);
	p.showPerson();
}
int main()
{
	test01();
	return 0;
}
*/

/*P180��ģ����ļ���д
��ģ���г�Ա��������ʱ�����ڵ��ý׶Σ����·��ļ���дʱ���Ӳ���
�������1��ֱ�Ӱ���.cppԴ�ļ�
�����ʽ2����������ʵ��д��ͬһ���ļ��У������ĺ�׺��Ϊ.hpp hpp��Լ�������֣�������ǿ��
//#include "person.cpp"//��һ�ֽ����ʽ.h��������Ա���� ��ģ��ĳ�Ա��������ʱ���� ���Ըĳ�.cpp
//�ڶ��ֽ����ʽ  ��.h��.cpp�е�����д��һ�� ����׺����Ϊ.hpp�ļ�
#include"person.hpp"
*/

/*P181��ģ������Ԫ
ȫ�ֺ�����ʵ��-ֱ��������������Ԫ����
ȫ�ֺ�������ʵ��-��Ҫ��ǰ�ñ�����֪��ȫ�ֺ����Ĵ���
template<class T1, class T2>
class Person;
template<class T1, class T2>
void printPerson2(Person<T1, T2> p)
{
	cout << "name��" << p.m_Name << " age��" << p.m_Age << endl;
}
template<class T1, class T2>
class Person
{
	//ȫ�ֺ�������ʵ��
	friend void printPerson(Person<T1,T2> p)
	{
		cout << "name��" << p.m_Name << " age��" << p.m_Age << endl;
	}
	//ȫ�ֺ�������ʵ��
	//�ӿ�ģ��Ĳ����б�
	//���ȫ�ֺ���������ʵ�� ��Ҫ�ñ�������ǰ֪����������Ĵ���
	friend void printPerson2<>(Person<T1, T2> p);

private:
	T1 m_Name;
	T2 m_Age;
public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
};
//1.ȫ�ֺ���������ʵ��
void test01()
{
	Person<string, int>p("Tom",20);
	printPerson(p);
}
//2.ȫ�ֺ���������ʵ��
void test02()
{
	Person<string, int>p("Jerry", 20);
	printPerson2(p);
}
int main()
{
	test01();
	test02();
	return 0;
}
*/

/*P184��ģ�尸��
void test01()
{
	MyArray <int>arr1(5);
	for (int i=0;i<5;i++)
	{
		arr1.Push_Back(i);
	}
	MyArray<int>arr2(arr1);
	MyArray<int>arr3(100);
	arr3 = arr1;
}
int main()
{
	test01();
	return 0;
}
*/

/*P185  STL(��׼ģ���)
�����Ϸ�Ϊ ���� �㷨 ������
�������㷨֮��ͨ�������������޷�����
STL�������еĴ��붼������ģ�������ģ�庯��
STL�����Ϊ������������� �㷨 ������ �º��� ������(�����) �ռ�������


STL�������ǽ�������㷺��һЩ���ݽṹʵ�ֳ��� ���� ���� ջ ���� ���ȵ�
������Ϊ����ʽ�����͹���ʽ������
����ʽ������ǿ��ֵ����������ʽ�����е�ÿ��Ԫ�ؾ��й̶���λ��
����ʽ�������������ṹ����Ԫ��֮��û���ϸ�������ϵ�˳���ϵ

�㷨��Ϊ�ʱ��㷨�ͷ��ʱ��㷨��
�ʱ��㷨����ָ��������л���������ڵ�Ԫ�ص����ݣ����翽�� �滻 ɾ���ȵ�
���ʱ��㷨����ָ��������в�����������ڵ�Ԫ������ ������� ���� ���� Ѱ�Ҽ�ֵ�ȵȡ�

���������������㷨֮���ճ�ϼ�
ÿ�����������Լ�ר���ĵ�����
���������ࣺ
����������������ݵ�ֻ������
����������������ݵ�ֻд����
ǰ�����������д���� ������ǰ�ƽ�������
˫�����������д������������ǰ��������
������ʵ���������д���� ��������Ծ�ķ�ʽ������������ ������ǿ�ĵ�����
��������������õĶࡣ
*/

/*P186 vector���������������
������vector
�㷨��for_each
��������vector<int> ::iterator
void myPrint(int val)
{
	cout << val << endl;
}
//vector�������������������
void test01()
{
	vector<int> v;//����һ��vector����
	v.push_back(10);//�������в�������10 β�巨
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	//ͨ�����������������е�����
	vector<int>::iterator itBegin = v.begin();//��ʼ������ ָ�������е�һ��Ԫ��
	vector<int>::iterator itEnd = v.end();//���������� ָ�����������һ��Ԫ�ص���һ��λ��
	//��һ�ֱ�����ʽ
	while (itBegin!=itEnd)
	{
		cout << *itBegin << endl;
		itBegin++;
	}
	//�ڶ��ֱ�����ʽ
	for (vector<int>::iterator it = v.begin();it != v.end();it++)
	{
		cout << *it << endl;
	}
	//�����ֱ�����ʽ ����STL���ṩ�ı����㷨
	for_each(v.begin(), v.end(), myPrint);
}
*/

/*P187vector����Զ�����������
//vector�����д���Զ�����������
class Person
{
public:
	string  m_Name;
	int m_Age;
	Person(string name,int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

};
void test01()
{
	vector<Person> v;
	Person p1("aaa",10);
	Person p2("bbb",20);
	Person p3("ccc",30);
	Person p4("ddd",40);
	Person p5("eee",50);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);
	//���������е�����
	for (vector<Person>::iterator it = v.begin();it != v.end();it++)
	{
		cout << "������" << it->m_Name << " ���䣺" << it->m_Age << endl;
	}
}
//����Զ������͵�ָ��
void test02()
{
	vector<Person*> v;
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	Person p5("eee", 50);
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);
	for (vector<Person*>::iterator it = v.begin();it != v.end();it++)
	{
		cout << "������" << (*it)->m_Name << " ���䣺" << (*it)->m_Age << endl;
	}

}
int main()
{
	test01();
	test02();
	return 0;
}
*/

/*P188 vector��Ƕ������
//����Ƕ������
void test01()
{
	vector<vector<int>> v;
	//����С����
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> v4;
	for (int i=0;i<4;i++)
	{
		v1.push_back(i + 1);
		v2.push_back(i + 2);
		v3.push_back(i + 3);
		v4.push_back(i + 4);
	}
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);
	for (vector<vector<int>>::iterator it = v.begin();it != v.end();it++)
	{
		for (vector<int>::iterator it2 = (*it).begin();it2 != (*it).end();it2++)
		{
			cout << *it2 ;
		}
		cout << endl;
	}
}
int main()
{
	test01();
	return 0;
}
*/

/*P189 string����-���캯��
string��char*����
char*��һ��ָ��
string��һ���࣬���ڲ���װ��char*����������ַ�������һ��char*�͵�����

���캯��ԭ�ͣ�
string();//����һ���յ��ַ��� ����string str;
string(const char*s);//ʹ���ַ���S��ʼ��
string(const string& str)//ʹ��һ��string�����ʼ����һ��string����
string(int n,char c);//ʹ��n���ַ�c��ʼ��
//string�Ĺ��캯��
void test01()
{
	string s1;//Ĭ�Ϲ���

	const char* str = "hello world";
	string s2(str);
	cout << "s2=" << s2<<endl;

	string s3(s2);
	cout << "s3=" << s3 << endl;

	string s4(10,'a');
	cout << "s4=" << s4 << endl;
}
int main()
{
	test01();
	return 0;
}
*/

/*P190 string����-��ֵ����
string& operator=(const char*s);//char*�����ַ��� ��ֵ����ǰ�ַ���
string& operator=(const string&s);//���ַ���s��ֵ����ǰ���ַ���
string& operator=(char c);//�ַ���ֵ����ǰ���ַ���
string& assign(const char*s);//���ַ���s��ֵ����ǰ���ַ���
string& assign(const char *s,int n);//���ַ�����ǰn���ַ�������ǰ���ַ���
string& assign(const string &s);//���ַ���s������ǰ�ַ���
string& assign(int n,char c);//��n���ַ�c������ǰ�ַ���

//string�ĸ�ֵ����
void test01()
{
	string str1;
	str1 = "hello world";
	cout << "str1=" << str1 << endl;

	string str2;
	str2 = str1;
	cout << "str2=" << str2 << endl;

	string str3;
	str3 = 'a';
	cout << "str3=" << str3 << endl;

	string str4;
	str4.assign("hello c++");
	cout << "str4=" << str4 << endl;

	string str5;
	str5.assign("hello c++", 5);
	cout << "str5 = " << str5 << endl;

	string str6;
	str6.assign(str5);
	cout << "str6=" << str6 << endl;

	string str7;
	str7.assign(10, 'w');	cout << "str7 = " << str7 << endl;
}
int main()
{
	test01();
	return 0;
}
*/

/*  P191 string����-�ַ���ƴ��
string& operator+=(const char*str);//����+=������
string& operator+=(const char c);//����=+������
string& operator+=(const string& str);//����=+������
string& append(const char*s);//���ַ���s���ӵ���ǰ�ַ�����β
string& append(const char*s,int n);//���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
string& append(const string &s);//ͬoperator+=(const string&str)
string& append(const string &s,int pos,int n);//�ַ���s�д�pos��ʼ��n���ַ����ӵ��ַ�����β
//string��ƴ�Ӳ���
void test01()
{
	string str1="��";
	str1 += "������Ϸ";
	cout << "str1=" << str1 << endl;
	str1 += ':';
	cout << "str1=" << str1 << endl;
	string str2="LOL DNF";
	str1 += str2;
	cout << "str1=" << str1 << endl;

	string str3="I";
	str3.append("  love  ");
	cout << "str3=" << str3 << endl;
	str3.append("game abcde", 4);
	cout << "str3=" << str3 << endl;
	str3.append(str2,0,3);
	cout << "str3=" << str3 << endl;
	str3.append(str2, 4, 3);
	cout << "str3=" << str3 << endl;
}
int main()
{
	test01();
	return 0;
}
*/

/*p192 string���Һ��滻
int find(const string&str,int pos=0)const;//����str��һ�γ���λ�ã���pos��ʼ����
int find(const char *s,int pos=0)const;//����s��һ�γ���λ�ã���pos��ʼ����
int find(const char *s,int pos,int n)const;//��posλ�ò���s��ǰn���ַ���һ��λ��
int find(const char c,int pos=0)const;//�����ַ�c��һ�γ��ֵ�λ��
int rfind(const string&str,int pos=npos)const;//����str���һ��λ�ã���pos��ʼ����
int rfind(const char* s,int pos=npos)const;//����s���һ��λ�ã���pos��ʼ����
int rfind(const char* s,int pos,int n)const;//��pos����s��ǰn���ַ����һ��λ��
int rfind(const char c,int pos=0)const;//�����ַ�c���һ�γ���λ��
string& replace(int pos,int n,const string& str);//�滻��pos��ʼn���ַ�Ϊ�ַ���str
string& replace(int pos,int n,const char*s);//�滻��pos��ʼ��n���ַ�Ϊ�ַ���s

//�ַ����Ĳ��Һ��滻
//1.����
void test01()
{
	string str1 = "abcdefgde";
	int pos=str1.find("de");
	cout << "pos=" << pos << endl;

	if (pos = -1)
	{
		cout << "δ�ҵ��ַ���" << endl;
	}
	else
	{
		cout << "�ҵ��ַ��� pos=" <<pos<< endl;
	}

	//rfind
	int pos2=str1.rfind("de");
	cout << "pos=" << pos2 << endl;
	//rfind��find����
	//rfind���������� find����������
}
//2.�滻
void test02()
{
	string str1 = "abcdefg";
	str1.replace(1,3,"1111");//��1��λ���� 3���ַ��滻��1111
	cout << "str1=" << str1 << endl;
}
int main()
{
	test01();
	test02();
	return 0;
}
*/

/*P193 string�ַ����Ƚ�
�ȽϷ�ʽ���ַ����Ƚ��ǰ��ַ���ASCII����бȽ�
= ����0
> ����1
< ����-1
����ԭ�ͣ�
int compare(const string &s)const;//���ַ���s�Ƚ�
int compare(const char *s)const;//���ַ���s�Ƚ�

//�ַ����Ƚ�
void test01()
{
	string str1 = "hello";
	string str2 = "hello";
	if (str1.compare(str2)==0)
	{
		cout << "str1����str2" << endl;
	}
	else if(str1.compare(str2)>0)
	{
		cout << "str1����str2" << endl;
	}
	else
	{
		cout << "str1С��str2" << endl;
	}
}
int main()
{
	test01();
	return 0;
}
*/

/*P194 string�ַ���ȡ
strng�е����ַ���ȡ��ʽ������
char& operator[](int n)//ͨ��[]��ʽȡ�ַ�
char& at(int n);//ͨ��at������ȡ�ַ�
//string�ַ���ȡ
void test01()
{
	string str = "hello";
	cout << "str = " <<str<< endl;
	//1.ͨ��[]���ʵ����ַ�
	for (int i = 0;i < str.size();i++)
	{
		cout << str[i] << "  ";
	}
	cout << endl;
	//2.ͨ��at��ʽ���ʵ����ַ�
	for (int i = 0;i < str.size();i++)
	{
		cout << str.at(i) << "  ";
	}
	cout << endl;

	str[0] = 'x';
	cout << "str = " << str << endl;
	str.at(1) = 'x';
	cout << "str = " << str << endl;
}
int main()
{
	test01();
	return 0;
}
*/

/*P195 string�����ɾ��
����ԭ�ͣ�
string& insert(int pos,const char*s);//�����ַ���
string& insert(int pos,const string& str);//�����ַ���
string& insert(int pos,int n,char c);//��ָ��λ�ò���n���ַ�c
string& erase(int pos,int n=pos);//ɾ����Pos��ʼ��n���ַ�
//string�ַ���ȡ
void test01()
{
	string str = "hello";
	str.insert(1,"111");//����
	cout << "str = " << str << endl;
	str.erase(1,3);	//ɾ��
	cout << "str = " << str << endl;
}
int main()
{
	test01();
	return 0;
}
*/

/*P196 string����-�ִ���ȡ
����ԭ�ͣ�
string substr(int pos=0;int n=npos)const;//������pos��ʼ��n���ַ���ɵ��ַ���
//string���ִ�
void test01()
{
	string str = "abcdef";
	string subStr = str.substr(1, 3);
	cout << "subStr = " << subStr << endl;
}
//ʵ�ò���
void test02()
{
	string email = "zhangsan@sina.com";
	//���ʼ���ַ�� ��ȡ�û�����Ϣ
	int pos = email.find("@");
	cout << pos << endl;
	string usrName = email.substr(0, pos);
	cout << usrName << endl;
}
int main()
{
	test01();
	test02();
	return 0;
}
*/

/*P197 vector����-���캯��
vector���ݽṹ������ǳ����ƣ�Ҳ��Ϊ��������
vector����ͨ��������
��֮ͬ���Ӱ��������Ǿ�̬�ռ䣬��vector���Զ�̬��չ
��̬��չ����������ԭ�ռ�֮�������¿ռ䣬�����ҵ�������ڴ�ռ䣬Ȼ��ԭ���ݿ������¿ռ䣬�ͷ�ԭ�ռ�

vector���캯��
vector<T> v; //����ģ��ʵ���� ʵ�֣�Ĭ�Ϲ��캯��
vector(v.begin(),v,end())//��v[begin(),end()]�����е�Ԫ�ؿ���������
vector(n,elem);//���캯����n��elem����������
vector(const vector &vec);//�������캯��

void printVector(vector<int> &v)
{
	for (vector<int>::iterator it=v.begin();it!=v.end();it++)
	{
		cout << (*it) << endl;
	}
}
//vector��������
void test01()
{
	vector<int> v1;//Ĭ�Ϲ��� �޲ι���
	for (int i = 0;i < 10;i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	vector<int>v2(v1.begin(), v1.end());//ͨ�����䷽ʽ���й���
	printVector(v2);

	vector<int> v3(10, 100);//n��elem��ʽ����
	printVector(v3);

	vector<int>v4(v3);//��������
	printVector(v4);
}
int main()
{
	test01();
	return 0;
}
*/

/*P198  vector����-��ֵ����
����ԭ�ͣ�
vector& operator=(const vector &vec);//���صȺŲ�����
assign(beg,end);//��[beg,end]�����е����ݿ�����ֵ������
assign(n,elelm);//��n��elem������ֵ������
void printVector(vector<int> &v)
{
	for (vector<int>::iterator it=v.begin();it!=v.end();it++)
	{
		cout << (*it) << endl;
	}
}
//vector��ֵ
void test01()
{
	vector<int> v1;//Ĭ�Ϲ��� �޲ι���
	for (int i = 0;i < 10;i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	vector<int> v2(10, 100);//��ֵ operator=
	v2 = v1;
	printVector(v2);

	vector<int>v3;//assign
	v3.assign(v1.begin(), v1.end());
	printVector(v3);

	vector<int> v4;//n��elem��ʽ��ֵ
	v4.assign(10, 100);
	printVector(v4);
}
int main()
{
	test01();
	return 0;
}
*/

/*P199  vector�����ʹ�С
����ԭ�ͣ�
empty();//�ж������Ƿ�Ϊ��
capacity();//����������
size();//����������Ԫ�صĸ���
resize(int num);//����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ��
				//���������� ��ĩβ�����������ȵ�Ԫ�ر�ɾ��
resize(int num,elem);//����ָ�������ĳ���Ϊnum,�������䳤������elemֵ�����λ��
					  //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
void printVector(vector<int> &v)
{
	for (vector<int>::iterator it=v.begin();it!=v.end();it++)
	{
		cout << (*it) << "  ";
	}
}
//vector�����������ʹ�С����
void test01()
{
	vector<int> v1;
	for (int i = 0;i < 10;i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	if (v1.empty())//Ϊ�棬��������Ϊ��
	{
		cout << "v1Ϊ��" << endl;
	}
	else
	{
		cout << "v1Ϊ��" << endl;
		cout << "v1������Ϊ��" << v1.capacity() << endl;
		cout << "v1�Ĵ�СΪ��" << v1.size() << endl;
	}
	v1.resize(15,100);//����ָ����СΪ15  �䳤������100���
	printVector(v1);//�������ָ���ı�ԭ�����ˣ�Ĭ����0����µ�λ��


	v1.resize(5);
	printVector(v1);//�������ָ���ı�ԭ������ �������ֻ�ɾ��
}
int main()
{
	test01();
	return 0;
}
*/

/*P200 vector �����ɾ��
����ԭ�ͣ�
push_back(ele);//β������Ԫ��ele
pop_back();//ɾ�����һ��Ԫ��
insert(const_iterator pos,ele);//������ָ��λ��pos����Ԫ��ele
insert(const_iterator pos,int count,ele);//������ָ��λ��pos����count��Ԫ��ele
erase(const_iterator pos);//ɾ��������ָ���Ԫ��
erase(const_iterator start,const_iterator end)//ɾ����������start��end֮���Ԫ��
clear();//ɾ������������Ԫ��

void printVector(vector<int> &v)
{
	for (vector<int>::iterator it=v.begin();it!=v.end();it++)
	{
		cout << (*it) << "  ";
	}
	cout << endl;
}
//vector�����ɾ��
void test01()
{
	vector<int> v1;
	v1.push_back(10);//β��
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	printVector(v1);//����

	v1.pop_back();//βɾ
	printVector(v1);

	v1.insert(v1.begin(), 100);//����
	printVector(v1);

	v1.insert(v1.begin(), 2, 1000);
	printVector(v1);


	//ɾ��
	v1.erase(v1.begin());
	printVector(v1);

	//v1.erase(v1.begin(), v1.end());
	v1.clear();
	printVector(v1);
}
int main()
{
	test01();
	return 0;
}
*/

/*P201 vector���ݴ�ȡ
����ԭ�ͣ�
at(int idx);//��������idx��ָ������
operator[];//��������ids��ָ������
front();//���������е�һ������Ԫ��
back();//�������������һ������Ԫ��
//vector���� ���ݴ�ȡ
void test01()
{
	vector<int> v1;
	for (int i = 0;i < 10;i++)
	{
		v1.push_back(i);
	}
	//����[]���������е�Ԫ��
	for (int i = 0;i < v1.size();i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;
	for (int i = 0;i < v1.size();i++)
	{
		cout << v1.at(i)<<" ";
	}
	cout << endl;

	//��ȡ��һ��Ԫ��
	cout << "��һ��Ԫ��Ϊ��" << v1.front() << endl;
	//��ȡ���һ��Ԫ��
	cout << "���һ��Ԫ��Ϊ��" << v1.back() << endl;

}
int main()
{
	test01();
	return 0;
}
*/

/*P202 vector��������
����ԭ�ͣ�
swap(vec);//��vec�뱾���Ԫ�ػ���


void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin();it != v.end();it++)
	{
		cout << (*it) << "  ";
	}
	cout << endl;
}
//vector��������
//1.����ʹ��
void test01()
{
	vector<int> v1;
	for (int i = 0;i < 10;i++)
	{
		v1.push_back(i);
	}
	cout << "����ǰ" << endl;
	printVector(v1);

	vector<int> v2;
	for (int i = 10;i > 0;i--)
	{
		v2.push_back(i);
	}
	printVector(v2);
	cout << "������" << endl;
	v1.swap(v2);
	printVector(v1);
	printVector(v2);

}
//2.ʵ����;
//����swap���������ڴ�ռ�
void test02()
{
	vector<int> v;
	for (int i = 0;i < 10000;i++)
	{
		v.push_back(i);
	}
	cout << "v������Ϊ��" << v.capacity()<<endl;
	cout << "v�Ĵ�СΪ��" << v.size()<<endl;
	v.resize(3);//����ָ����С
	cout << "v������Ϊ��" << v.capacity() << endl;
	cout << "v�Ĵ�СΪ��" << v.size() << endl;
	vector<int>(v).swap(v);//�ڴ����� ����v��С��ʼ��һ���������� vector<int>(v)  Ȼ���v������ ֮���Ǹ�������������ϵͳ�Զ�����
	cout << "v������Ϊ��" << v.capacity() << endl;
	cout << "v�Ĵ�СΪ��" << v.size() << endl;

}
int main()
{
	test01();
	test02();
	return 0;
}
*/

/*P203 vector����-Ԥ���ռ�
����ԭ�ͣ�
reserve(int len);//����Ԥ��len��Ԫ�س��ȣ�Ԥ��λ�ò���ʼ����Ԫ�ز��ɷ���
void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin();it != v.end();it++)
	{
		cout << (*it) << "  ";
	}
	cout << endl;
}
//vector���� Ԥ���ռ�
void test01()
{
	vector<int> v;

	v.reserve(100000);//����reserveԤ���ռ�

	int num = 0;//ͳ�ƿ��ٴ���
	int* p = NULL;
	for (int i = 0;i < 100000;i++)
	{
		v.push_back(i);
		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}
	}
	cout << "num=" << num << endl;

}
int main()
{
	test01();
	return 0;
}
*/

/*P204 deque(˫�˶���)����-���캯��
���ܣ�˫������ ���Զ�ͷ�˽��в����ɾ������

deque��vector����
vector����ͷ���Ĳ���ɾ��Ч�ʵͣ�������Խ��Ч��Խ��
deque��Զ��� ��ͷ���Ĳ���ɾ���ٶȱ�vector��
vector����Ԫ��ʱ���ٶȻ��deque�죬��������ڲ�ʵ���й�

���캯��ԭ�ͣ�
deque<T> deqT;//Ĭ�Ϲ�����ʽ
deque(beg,end);//���캯����[beg,end)�����е�Ԫ�ؿ���������
deque(n,elem);//���캯����n��elem����������
deque(const deque &deq);//�������캯��


void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it =d.begin();it != d.end();it++)
	{
		cout << (*it) << "  ";
	}
	cout << endl;
}
//vector deque
void test01()
{
	deque<int> d1;
	for (int i = 0;i < 10;i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);

	deque<int>d2(d1.begin(),d1.end());
	printDeque(d2);

	deque<int>d3(10, 100);
	printDeque(d3);

	deque<int>d4(d3);
	printDeque(d4);

}
int main()
{
	test01();
	return 0;
}
*/

/*P205 deque����-��ֵ����
����ԭ�ͣ�
deque& operator=(const deque &deq);//���صȺŲ�����
assign(beg,end);//��[beg,end)�����е����ݿ�����ֵ������
assign(n,elem);//��n��elem������ֵ������


void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it =d.begin();it != d.end();it++)
	{
		cout << (*it) << "  ";
	}
	cout << endl;
}
//deque������ֵ����
void test01()
{
	deque<int> d1;
	for (int i = 0;i < 10;i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);

	deque<int>d2;
	d2 = d1;//operator=��ֵ����
	printDeque(d2);

	deque<int>d3;
	d3.assign(d1.begin(),d1.end());//assign��ֵ����
	printDeque(d3);

	deque<int>d4;
	d4.assign(10, 100);
	printDeque(d4);

}
int main()
{
	test01();
	return 0;
}
*/

/*P206 deque������С����
����ԭ�ͣ�
deque.empty();//�ж������Ƿ�Ϊ��
deque.size();//����������Ԫ�ظ���
deque.resize(num);//����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ�á�
				  //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
deque.resize(num,elem);//����ָ�������ĳ���Ϊnum���������߳�������elemֵ�����λ��
					   //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��

void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it =d.begin();it != d.end();it++)
	{
		cout << (*it) << "  ";
	}
	cout << endl;
}
//deque������С����
void test01()
{
	deque<int> d1;
	for (int i = 0;i < 10;i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);

	if (d1.empty())
	{
		cout << "d1Ϊ��" << endl;
	}
	else
	{
		cout << "d1��Ϊ��" << endl;
		cout << "d1�Ĵ�СΪ��" << d1.size() << endl;//dequeû��capacity
	}

	//����ָ����С
	d1.resize(15);
	printDeque(d1);

	d1.resize(20, 800);
	printDeque(d1);

	d1.resize(5);
	printDeque(d1);
}
int main()
{
	test01();
	return 0;
}
*/

/*P207 deque����-�����ɾ��
����ԭ�ͣ�
���˲��������
push_back(elem);//������β�����һ������
push_front(elem);//������ͷ������һ������
pop_back();//ɾ���������һ������
pop_front();//ɾ��������һ������
ָ��λ�ò�����
insert(pos,elem);//��posλ�ò���һ��elemԪ�صĿ��������������ݵ�λ��
insert(pos,n,elem);//��posλ�ò���n��elem���ݣ��޷���ֵ
insert(pos,beg,end);//��posλ�ò���[beg,end)��������ݣ��޷���ֵ
clear();//���������������
erase(beg,end);//ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ��
erase(pos);//ɾ��posλ�õ����ݣ�������һ�����ݵ�λ��


void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it =d.begin();it != d.end();it++)
	{
		cout << (*it) << "  ";
	}
	cout << endl;
}
//deque���������ɾ��
//���˲���
void test01()
{
	deque<int> d1;

	//β��
	d1.push_back(10);
	d1.push_back(20);
	//ͷ��
	d1.push_front(100);
	d1.push_front(200);
	printDeque(d1);

	//βɾ
	d1.pop_back();
	printDeque(d1);

	//ͷɾ
	d1.pop_front();
	printDeque(d1);
}
void test02()
{
	deque<int>d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);
	printDeque(d1);

	//insert����
	d1.insert(d1.begin(),1000);
	printDeque(d1);

	d1.insert(d1.begin(),2, 99999);
	printDeque(d1);

	//����������в���
	deque<int>d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);

	d1.insert(d1.begin(), d2.begin(), d2.end());//��d1ǰ����d2��Ԫ��
	printDeque(d1);
}
void test03()
{
	deque<int>d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);
	//ɾ��
	deque<int>::iterator it = d1.begin();
	it++;
	d1.erase(it);
	printDeque(d1);

	//�����䷽ʽɾ��
	d1.erase(d1.begin(), d1.end());
	//���
	d1.clear();
	printDeque(d1);
}
int main()
{
	//test01();
	//test02();
	test03();
	return 0;
}
*/

/*P208 deque����-���ݴ�ȡ
����ԭ��:
at(int idx);//��������������ָ������
operator[];//��������idx���µ�����
front();//���������е�һ������Ԫ��
back();//�������������һ������Ԫ��


//deque�������ݴ�ȡ
void test01()
{
	deque<int> d;

	//β��
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);

	//ͨ��[]��ʽ����Ԫ��
	for (int i = 0;i < d.size();i++)
	{
		cout << d[i]<< "  ";
	}
	cout << endl;
	for (int i = 0;i < d.size();i++)
	{
		cout << d.at(i)<< "  ";
	}
	cout << endl;
	cout << "��һ��Ԫ��Ϊ��" << d.front() << endl;
	cout << "���һ��Ԫ��Ϊ��" << d.back() << endl;

}
int main()
{
	test01();
	return 0;
}
*/

/*P209 deque����-�������
�㷨��
sort(iterator beg,iterator end);//��beg��end����Ԫ�ؽ�������

void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it =d.begin();it != d.end();it++)
	{
		cout << (*it) << "  ";
	}
	cout << endl;
}
//deque��������
void test01()
{
	deque<int> d;

	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);
	printDeque(d);

	//���� Ĭ�Ϲ����Ǵ�С���� ����
	//����֧��������ʵĵ�����������������������sort�㷨ֱ�Ӷ����������
	//vector����Ҳ�������� sort��������
	sort(d.begin(), d.end());
	printDeque(d);

}
int main()
{
	test01();
	return 0;
}
*/

/*P210 STL����1-��ί���
5��ѡ�֣�ѡ��ABCDE 10����ί��֣�ȥ����߷֣�ȥ����ί����ͷ֣� ȡƽ����
ʵ�ֲ��裺
1.��������ѡ�� �ŵ�vector��
2.����vector������ȡ����ÿһ��ѡ�֣�ִ��forѭ�������԰�10�����ִ�ִ浽deque������
3.sort�㷨��deque�����з�������ȥ����ߺ���ͷ�
3.��ȡƽ����


class Person
{
public:
	Person(string name, int score)
	{
		this->m_Name = name;
		this->m_Score = score;
	}
	string m_Name;//����
	int m_Score;//ƽ����
};
void createPerson(vector<Person>& v)
{
	string nameSeed = "ABCDE";
	for (int i=0;i<5;i++)
	{
		string name = "ѡ��";
		name += nameSeed[i];
		int score = 0;
		Person p(name,score);
		v.push_back(p);
	}
}
void setScore(vector<Person>&v)
{
	for (vector<Person>::iterator it = v.begin();it != v.end();it++)
	{
		deque<int>d;
		for (int i = 0;i < 10;i++)
		{
			int score = rand() % 41+ 60;//60~100
			d.push_back(score);
		}

		cout << "ѡ�֣�" << it->m_Name << "��֣�" << endl;
		for (deque<int>::const_iterator it = d.begin();it != d.end();it++)
		{
			cout << *it << "  ";
		}
		cout << endl;
		//����
		sort(d.begin(), d.end());
		//ȥ����ߺ���ͷ�
		d.pop_back();
		d.pop_front();
		//ȡƽ����
		int sum = 0;
		for (deque<int>::const_iterator it = d.begin();it != d.end();it++)
		{
			sum += (*it);
		}
		int avg = sum / d.size();
		//��ƽ���� ��ֵ��ѡ����
		it->m_Score = avg;
	}
}
void showScore(vector<Person>&v)
{
	for (vector<Person>::iterator it = v.begin();it != v.end();it++)
	{
		cout << "������" << it->m_Name << "ƽ���֣�" << it->m_Score << endl;
	}
}
int main()
{
	//���������
	srand((unsigned int)time(NULL));
	//1.����5��ѡ��
	vector<Person>v;//���ѡ�ֵ�����
	createPerson(v);
	//����
	for (vector<Person>::iterator it=v.begin();it !=v.end();it++)
	{
		cout << "������" << (*it).m_Name << "������" << (*it).m_Score << endl;
	}
	setScore(v);
	showScore(v);
	return 0;
}
*/

/*p212 stack����-���ýӿ�
���캯����
stack<T> stk;//stack����ģ����ʵ�֣�stack�����Ĭ�Ϲ�����ʽ
stack(const stack &stk);//�������캯��
��ֵ������
stack& operator=(const stack &stk);//���صȺŲ�����
���ݴ�ȡ��
push(elem);//��ջ�����Ԫ��
pop();//��ջ���Ƴ���һ��Ԫ��
top();//����ջ��Ԫ��
��С������
empty();//�ж�ջ���Ƿ�Ϊ��
size();//����ջ�Ĵ�С

//ջstack����
void test01()
{
	stack<int> s;
	//��ջ
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	//ջ��Ϊ�� ����ջ�� ����ִ�г�ջ����
	while (!s.empty())
	{
		//�鿴ջ��Ԫ��
		cout << "ջ��Ԫ��Ϊ��" << s.top() << endl;
		//��ջ
		s.pop();
	}
	cout << "ջ�Ĵ�С��" << s.size() << endl;
}
int main()
{
	test01();
	return 0;
}
*/

/*P213 queue����-���ýӿ�
���캯����
queue<T> que; //queue����ģ����ʵ�֣�queue�����Ĭ�Ϲ�����ʽ
queue(const queue &que);//�������캯��
��ֵ������
queue& operator=(const queue &que);//���صȺŲ�����
���ݴ�ȡ��
push(elem);//����β���Ԫ��
pop();//�Ӷ�ͷ�Ƴ���һ��Ԫ��
back();//�������һ��Ԫ��
front();//���ص�һ��Ԫ��
��С������
empty();//�ж϶�ջ�Ƿ�Ϊ��
size();//����ջ�Ĵ�С
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;//����
	int m_Age;//ƽ����
};
//ջqueue����
void test01()
{
	//
	queue <Person> q;
	Person p1("tang", 30);
	Person p2("sun", 1000);
	Person p3("zhu", 900);
	Person p4("sha", 800);
	//���
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);
	cout << "���д�С��" << q.size() << endl;
	//�ж����в�Ϊ�� �鿴��ͷ �鿴��β ����
	while (!q.empty())
	{
		//�鿴��ͷ
		cout << "��ͷԪ��---������" << q.front().m_Name << "���䣺" << q.front().m_Age << endl;
		//�鿴��β
		cout << "��βԪ��---������" << q.back().m_Name << "���䣺" << q.back().m_Age << endl;
		//����
		q.pop();
	}
	cout << "���д�С��" << q.size() << endl;
}
int main()
{

	test01();
	return 0;
}
*/

/*P216 list����-���캯��
STL��List��vecotr���������ʹ�õ�������������ȱ��
����ԭ�ͣ�
list<T> lst;//list����ģ����ʵ�֣������Ĭ�Ϲ�����ʽ
list(beg,end);//���캯����[beg,end)�����е�Ԫ�ؿ���������
list(n,elem);//���캯����n��elem����������
list(const list &lst);//�������캯��

void printList(const list<int> &l)
{
	for (list<int>::const_iterator it = l.begin();it != l.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
//list�������캯��
void test01()
{
	//����list����
	list<int> L1;
	//�������
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	printList(L1);

	//���䷽ʽ����
	list<int>L2(L1.begin(), L1.end());
	printList(L2);

	//��������
	list<int> L3(L2);
	printList(L3);

	list<int>L4(10, 1000);
	printList(L4);
}
int main()
{
	test01();
	return 0;
}
*/

/*P217 list����-��ֵ�ͽ���
����ԭ�ͣ�
assign(beg,end);//��[beg,end)�����е����ݿ�����ֵ������
assign(n,elem);//��n��elem������ֵ������
list& operator=(const list&lst);//���صȺŲ�����
swap(lst);//��lst�뱾���Ԫ�ػ���

void printList(const list<int> &l)
{
	for (list<int>::const_iterator it = l.begin();it != l.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
//list�������캯��
void test01()
{
	//����list����
	list<int> L1;
	//�������
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	printList(L1);

	list<int>L2 = L1;//operator��ֵ
	printList(L2);

	list<int>L3;
	L3.assign(L2.begin(), L2.end());
	printList(L3);

	list<int>L4;
	L4.assign(10, 100);
	printList(L4);
}
void test02()
{
	//����list����
	list<int> L1;
	//�������
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	list<int> L2;
	L2.assign(10, 100);

	cout << "����ǰ��" << endl;
	printList(L1);
	printList(L2);
	L2.swap(L1);
	cout << "������" << endl;
	printList(L1);
	printList(L2);
}
int main()
{
	test01();
	test02();
	return 0;
}
*/

/*P218 list������-��С����
����ԭ�ͣ�
empty();//�ж������Ƿ�Ϊ��
size();//����������Ԫ�ظ���
resize(num);//����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ�á�
				  //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
resize(num,elem);//����ָ�������ĳ���Ϊnum���������߳�������elemֵ�����λ��
					   //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
*/

/*P219 list����-�����ɾ��
����ԭ�ͣ�
push_back(elem);//������β�����һ������
pop_back();//ɾ���������һ������
push_front(elem);//������ͷ������һ������
pop_front();//ɾ��������һ������
ָ��λ�ò�����
insert(pos,elem);//��posλ�ò���һ��elemԪ�صĿ��������������ݵ�λ��
insert(pos,n,elem);//��posλ�ò���n��elem���ݣ��޷���ֵ
insert(pos,beg,end);//��posλ�ò���[beg,end)��������ݣ��޷���ֵ
clear();//���������������
erase(beg,end);//ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ��
erase(pos);//ɾ��posλ�õ����ݣ�������һ�����ݵ�λ��
remove(elem);//ɾ��������������elemֵƥ���Ԫ��
*/

/*P220 list���ݴ�ȡ ��֧��������[]
����ԭ��:
front();//���ص�һ��Ԫ��
back();//�������һ��Ԫ��
*/

/*P221 list��ת������
����ԭ��:
reverse();//��ת����
sort();//��������
//���в�֧��������ʵ��������������������ñ�׼�㷨
//��֧��������ʵ��������������ڲ����ṩ��ӦһЩ�㷨
//sort(L.begin(),L.end())  ����
L.sort(); ��ȷ  Ĭ������
L.sort(myCompare);//����
bool myComPare(int v1,int v2)
{
	return v1>v2;
}
*/

/*P222 list����-����
//�߼�����  ������������ ���������ͬ�Ͱ����������
дһ��person��
bool comparePerson(Person &p1,Person &p2)
{
	//�������� ����
	if(p1.m_Age==p2.m_Age)
	{
		//������ͬ �������߽���
		return p1.m_Height > p2.m_Height
	}
	else
	{
		return p1.m_Age < p2.m_Age;
	}
}
*/

/*P223 set/multiset����
����Ԫ�ض����ڲ���ʱ�Զ�������
set/multiset���ڹ���ʽ�������ײ�ṹʹ�ö�����ʵ��
set��multiset����
set���������������ظ���Ԫ��
multiset�������������ظ���Ԫ��

set����͸�ֵ
����:
set<T> st;//Ĭ�Ϲ��캯����
set(const set &st);//�������캯��

��ֵ:
set& oprator=(cosnt set &st);//���صȺŲ�����

set������insert ����push_back
*/

/*P224 set��С�ͽ���
����ԭ�ͣ�
size();//����������Ԫ�ص���Ŀ
empty();//�ж������Ƿ�Ϊ��
swap(st);//����������������
*/

/*P225 set�����ɾ��
����ԭ�ͣ�
insert();//�������в���Ԫ��
clear();//�������Ԫ��
erase(pos);//ɾ��pos��ָԪ�� ������һ��Ԫ�صĵ�����
erase(beg,end);//ɾ������[beg,end)������Ԫ�أ�������һ��Ԫ�صĵ�����
erase(elem);//ɾ��������ֵΪelem��Ԫ��
*/

/*P226 set���Һ�ͳ��
����ԭ�ͣ�
find(key);//����key�Ƿ���ڣ� ������ ���ظü���Ԫ�صĵ��������������� ����set.end();
count(key);//ͳ��key��Ԫ�ظ���
*/

/*P227 set������multiset����
set�����Բ����ظ�����multiset����
set�������ݵ�ͬʱ�᷵�ز����� ��ʾ�����Ƿ�ɹ�
multiset���������ݣ���˿��Բ����ظ�����
//set ������multiser����������
void test01()
{
	set<int> s;
	pair<set<int>::iterator, bool> ret = s.insert(10);
	if (ret.second) {
		cout << "��һ�β���ɹ�" << endl;
	}
	else {
		cout << "��һ�β���ʧ��" << endl;
	}
	ret = s.insert(10);
	if (ret.second) {
		cout << "�ڶ��β���ɹ�" << endl;
	}
	else {
		cout << "�ڶ��β���ʧ��" << endl;
	}

	multiset<int> ms;
	//��������ظ�ֵ
	ms.insert(10);
	ms.insert(10);
	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++) {
		cout << *it << ' ';
	}
	cout << endl;
}
int main()
{
	test01();
	return 0;
}
*/

/*P228 pair���鴴��
�ɶԳ��ֵ����ݣ� ���ö�����Է�����������
������ʽ��
pair<type,type> p (value1, value2);
pair<type,type> p = make_pair(value1, value2);

//set ������multiser����������
void test01()
{
	//��һ�ַ�ʽ
	pair<string, int> p("Tom", 20);
	cout << "����:" << p.first << "����:" << p.second << endl;
	//�ڶ��ַ�ʽ
	pair<string, int>p2 = make_pair("jerry", 30);
	cout << "����:" << p2.first << "����:" << p2.second << endl;
}
int main()
{
	test01();
	return 0;
}
*/

/*P229 set��������
set����Ĭ���������Ϊ��С����
���÷º��� ���Ըı��������

class MyCompare {
public:
	bool operator()(int v1, int v2) const {
		return v1 > v2;
	}
};
//set ��������
void test01() {
	set<int> s1;
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	s1.insert(50);
	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	//ָ���������Ӵ��С
	set<int, MyCompare> s2;
	s2.insert(10);
	s2.insert(20);
	s2.insert(30);
	s2.insert(40);
	s2.insert(50);
	for (set<int, MyCompare>::iterator it = s2.begin(); it != s2.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

}
int main() {
	test01();
	return 0;
}
*/

/* P230 set����-�Զ�����������ָ���������

class Person {
public:
	Person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};
class comparePerson {
public:
	bool operator()(const Person& p1, const Person& p2) const {
	//�������� ����
		return p1.m_Age > p2.m_Age;
	}

};
//set ��������
void test01() {
	set<Person, comparePerson> s;
	Person p1("liu", 24);
	Person p2("guan", 28);
	Person p3("zhang", 25);
	Person p4("zhao", 21);
	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);
	for (set<Person, comparePerson>::iterator it = s.begin(); it != s.end(); it++) {
		cout << "������" << it->m_Name << " ���䣺" << it->m_Age << endl;
	}
}
int main() {
	test01();
	return 0;
}
*/

/* P231 map����-����͸�ֵ
map�е�����Ԫ�ض���pair
pair�е�һ��Ԫ��Ϊkey(��ֵ) ���������� �ڶ���Ԫ��Ϊvalue(ʵֵ)
����Ԫ�ض������Ԫ�صļ�ֵ�Զ�����
���ʣ�
map/maltimap���ڹ���ʽ�������ײ�ṹ���ö�����ʵ��
�ŵ㣺���Ը���keyֵ�����ҵ�valueֵ
map��multimap������
map���������������ظ���keyֵԪ��
multimap�������������ظ�keyֵԪ��
���죺
map<T1, T2> mp;// mapĬ�Ϲ��캯��
map(const map &map);//�������캯��
��ֵ��
map& operator=(const map &map);//���صȺŲ�����
*/

/*P232 map ��С�ͽ���
size();//����������Ԫ�ص���Ŀ
empty();//�ж������Ƿ�Ϊ��
swap(st);//����������������
*/

/*P233 map�����ɾ��
insert(elem);//�������в���Ԫ��
clear();//�������Ԫ��
erase(pos);//ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�����
erase(beg,end);//ɾ������[beg,end)������Ԫ�� ������һ��Ԫ�صĵ�����
erase(key);//ɾ��������ֵΪkey��Ԫ��


m.insert(pair<int,int>(1,10));
m.insert(make_pair(1,10));
m.insert(map<int, int>::value_type(3,30));
m[4] = 40;//��������� ������key���ʵ�value
*/

/*P234 map���Һ�ͳ��
find(key);///����key�Ƿ���ڣ������ڣ� ���ظü���Ԫ�صĵ��������������� ����set.end();
count(key);//ͳ��key��Ԫ�ظ��� ��������
*/

/*P235 map��������
map����Ĭ���������Ϊ����keyֵ ��С��������
���÷º��� �ı��������
�����Զ������� map����ָ����������� ͬset����
*/

/*P236 STL����Ա������
 */

/*P237 STL-��������
���غ������ò��������࣬����󳣳�Ϊ��������
��������ʹ�����ص�()ʱ ��Ϊ���ƺ������ã�Ҳ�зº���
���ʣ�
��������(�º���)��һ���࣬����һ������

��������ʹ��
�ص㣺
����������ʹ��ʱ����������ͨ�����������ã� �����в��� �����з���ֵ
�������󳬳���ͨ�����ĸ��� ��������������Լ���״̬
�������������Ϊ��������


class MyAdd {
public:
	int operator() (int v1, int v2) {
		return v1 + v2;
	}

};
//��������
void test01() {
	MyAdd myAdd;
	cout << myAdd(10, 10) << endl;
}

class MyPrint {
public:
	MyPrint() {
		this->count = 0;
	}
	void operator() (string test) {
		cout << test << endl;
		count++;
	}
	int count;//�ڲ��Լ�״̬
};
void test02() {
	MyPrint myPrint;
	myPrint("hello world");
	myPrint("hello world");
	myPrint("hello world");
	myPrint("hello world");
	cout << myPrint.count << endl;
}
void doPrint(MyPrint& mp, string test) {
	mp(test);
}
//�������������Ϊ��������
void test03() {
	MyPrint myPrint;
	doPrint(myPrint, "Hello c++");
}
int main() {
	test01();
	test02();
	return 0;
}
*/

/*P238 ν��-һԪν��
����bool���͵ķº�����Ϊν��
���operator()����һ�������� ����һԪν��
���operator()���ն��������� ������Ԫν��
*/

/*P240 �ڽ���������
STL�ڽ���һЩ��������
���ࣺ
�����º���
��ϵ�º���
�߼��º���
�÷���
��Щ�º����������Ķ����÷���һ�㺯����ȫ��ͬ
ʹ���ڽ�����������Ҫ����ͷ�ļ� #include<functional>

�����º�����
����negate��һԪ���� �������Ƕ�Ԫ����
������ԭ�ͣ�
template<class T> T plus<T> //�ӷ��º���
template<class T> T minus<T> //�����º���
template<class T> T multiplies<T> //�˷��º���
template<class T> T divides<T> //�����º���
template<class T> T modulus<T> //ȡģ�º���
template<class T> T negate<T> //ȡ���º���


//�ڽ��������� �����º���
//nagateһԪ�º��� ȡ���º���

//plus ��Ԫ�º��� �ӷ�
void test01() {
	negate<int> n;
	cout << n(50) << endl;
}
void test02() {
	plus<int> p;
	cout << p(10, 20) << endl;
}
int main() {
	test01();
	test02();
	return 0;
}
*/

/*P241 ��ϵ�º���

ʵ�ֹ�ϵ�Ա�
�º���ԭ�ͣ�
template<class T> bool equal_to<T> //����
template<class T> bool not_equal_to<T> //������
template<class T> bool greater<T> //����
template<class T> bool greater_equal<T> //���ڵ���
template<class T> bool less<T> //С��
template<class T> bool less_equal<T> //С�ڵ���



//�ڽ��������� _��ϵ�º���
//���� greater
void test01() {
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	sort(v.begin(), v.end(), greater<int>());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << ' ';
	}
	cout << endl;
}

int main() {
	test01();
	return 0;
}
*/

/*P242 �ڽ���������-�߼��º���  //�����ò���
ʵ���߼�����
����ԭ�ͣ�
template<class T> bool logical_and<T> //�߼���
template<class T> bool logical_or<T> //�߼���
template<class T> bool logical_not<T> //�߼���


//�ڽ��������� _�߼��º���
//�߼� logical_not
void test01() {
	vector<bool> v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);
	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << ' ';
	}
	cout << endl;
	//�����߼��� ������v���˵� ����v2�У���ִ��ȡ������
	vector<bool> v2;
	v2.resize(v.size());
	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++) {
		cout << *it << ' ';
	}
	cout << endl;
}
int main() {
	test01();
	return 0;
}
*/

/*P243 ���ñ����㷨- for_each
ͷ�ļ���Ҫ��ͷ�ļ�<algorithm> <functional> <numeric>���
<algorithm>ʱ����STLͷ�ļ�������һ�� ��Χ�漰�� �Ƚϣ����������ң��������������ƣ��޸ĵȵ�
<numeric>�����С ֻ��������������������м���ѧ�����ģ�庯��
<functional>������һЩģ���� ����������������

���ñ����㷨
for_each  //��������   ��ʵ�ʿ����� ��õı����㷨 ������������
transform //������������һ��������

����ԭ�ͣ�
transform(iterator beg1, iterator end1, iterator beg2, _func);
beg1 Դ������ʼ������
end1Դ��������������
beg2Ŀ��������ʼ������
_func�������ߺ�������


void print01(int val) {
	cout << val << " ";
}
class print02 {
public:
	void operator() (int val) {
		cout << val << " ";
	}
};
void test01() {
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}
	for_each(v.begin(), v.end(), print01);//��ͨ���� �Ѻ������Ž���
	cout << endl;
	for_each(v.begin(), v.end(), print02());// �º��� ����������Ž���
}
int main() {
	test01();
	return 0;
}



class TransForm {
public:
	int operator () (int v) {
		return v;
	}
};
class MyPrint {
public:
	void operator () (int val) {
		cout << val << " ";
	}
};
void test01() {
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}
	vector<int> vTarget;//Ŀ������
	vTarget.resize(10);
	transform(v.begin(), v.end(), vTarget.begin(), TransForm());
	for_each(vTarget.begin(), vTarget.end(), MyPrint());
	cout << endl;
}
int main() {
	test01();
	return 0;
}
*/

/* P245 ���ò����㷨
�㷨��飺
find    //����Ԫ��
find_if  // ����������Ԫ��
adjacent_find // ���������ظ�Ԫ��
binary_search // ���ֲ��ҷ�
count //ͳ��Ԫ�ظ���
count_if // ������ͳ��Ԫ�ظ���
*/

/*  find ����ָ��Ԫ�� �ҵ�����ָ��Ԫ�صĵ��������Ҳ������ؽ���������end()
����ԭ�ͣ�
find(iterator beg, iterator end, value);
��ֵ����Ԫ�أ��ҵ�����ָ��λ�õ��������Ҳ������ؽ���������λ��
//beg��ʼ������
//end����������
//value ���ҵ�Ԫ��
*/

/*P246 find_if
����������Ԫ��
����ԭ�ͣ�
find_if(iterator beg, iterator end, _Pred);
//��ֵ����Ԫ�� �ҵ�����ָ��λ�õ��������Ҳ������ؽ���������λ��
//beg ��ʼ������
//end ����������
//_Pred ��������ν�ʣ�����bool���͵ķº�����
*/

/* P247 adjacent_find
���������ظ�Ԫ��
adjacent_find(iterator beg,iterator end);
//���������ظ�Ԫ�أ���������Ԫ�صĵ�һ��λ�õĵ�����
//beg��ʼ������
//end����������
*/

/*P248 binary_search
����ָ��Ԫ���Ƿ����
bool binary_search(iterator beg,iterator end, value);
//����ָ����Ԫ�أ��鵽����true ����false
//ע�⣺�����������в����ã��������н��δ֪
//beg ��ʼ������
//end ����������
//value ���ҵ�Ԫ��
*/

/*P249 ��������
ͳ��Ԫ�ظ���
count(iterator beg, iterator end, value);
//ͳ��Ԫ�س��ִ���
//beg��ʼ������
//end����������
//value ͳ�Ƶ�Ԫ��
�Զ����������� Ҫ����==
*/

/*P250 count_if
������ͳ��Ԫ�ظ���
����ԭ�ͣ�
count_if(iterator beg, iterator end, _Pred);
//������ͳ��Ԫ�س��ִ���
//beg��ʼ������
//end ����������
//_Predν��
*/

/* ���������㷨
sort   //��������Ԫ�ؽ�������
random_shuffle //ϴ�� ָ����Χ�ڵ�Ԫ�������������
merge //����Ԫ�غϲ������洢����һ������
reverse  //��תָ����ΧԪ��
*/

/*P251 sort
sort(iterator beg, iterator end, _Pred);
//beg ��ʼ������
//end ����������
//_Pred ν��
*/

/*P252 random_shuffle
ϴ�� ָ����Χ�ڵ�Ԫ�������������
random_shuffle(iterator beg, iterator end);
//ָ����Χ�ڵ�Ԫ�������������
//beg ��ʼ������
//end ����������

ʹ��ʱ�ǵü��������
*/

/*P253 merge
��������Ԫ�غϲ������洢����һ������
//ע�⣺�������������������
//beg1 ����1��ʼ������
//end1 ����1����������
//beg2 ����2��ʼ������
//end2 ����2����������
//dest Ŀ��������ʼ������
*/

/*P254 reverse
��������Ԫ�ؽ��з�ת
reverse(iterator beg, iterator end);
//��תָ����Χ��Ԫ��
//beg��ʼ������
//end����������
*/

/*���ÿ����㷨���滻�㷨
copy //������ָ����Χ��Ԫ�ؿ�������һ������
replace //��������ָ����Χ�ľ�Ԫ�ظ�Ϊ��Ԫ��
replace_if//������ָ����Χ����������Ԫ���滻Ϊ��Ԫ��
swap //��������������Ԫ��
*/

/*P255 copy   �õĺ���
������ָ����Χ��Ԫ�ؿ�������һ������
copy(iterator beg, iterator end, iterator dest);
//beg ��ʼ������
//end ����������
//dest Ŀ����ʼ������
*/

/*P256 replace
replace(iterator beg, iterator end,oldvalue, newvalue)
//�������ھ�Ԫ���滻����Ԫ��
//beg ��ʼ������
//end ����������
//oldvalue ��Ԫ��
//newvalue ��Ԫ��
*/

/*P257 replace_if
������������������Ԫ�� �滻��ָ��Ԫ��
����ԭ�ͣ�
replace_if(iterator beg, iterator end, _pred,newvalue);
//�������滻Ԫ�� �����������滻��ָ��Ԫ��
//beg ��ʼ������
//end ����������
//_pred ν��
//newvalue �滻����Ԫ��
replace_if ���������� �������÷º��� ���ɸѡ���������
*/

/*P258 swap ��������������Ԫ��
swap(container c1, container c2);
//��������������Ԫ��
//c1 ����1
//c2 ����2
ͬ���������� �ſ��Ի���
*/

/*�������������㷨
���������㷨����С���㷨�� ʹ��ʱ������ͷ�ļ�Ϊ#include<numeric>
accumulate//��������Ԫ���ۼ��ۺ�
fill//�����������Ԫ��
*/

/*P259 accumulate
���������� ����Ԫ���ۼ��ܺ�
����ԭ�ͣ�
accumulate(iterator beg, iterator end, value);
//��������Ԫ���ۼ��ܺ�
//beg��ʼ������
//end����������
//value ��ʼֵ
*/

/*P260 fill
������ ָ������ ���ָ��Ԫ��
fill(iteratro geb, iterator end, value);
//beg��ʼ������
//end����������
//value ����ֵ
*/

/*���õļ����㷨

set_itersection //�����������Ľ���
set_union //�����������Ĳ���
set_difference //�����������Ĳ
*/

/*P261 set_intersection
 �����������Ľ���
 set_intersection(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
//ע�⣺�������ϱ������������� Ŀ���������ٿռ���Ҫ������������ȡСֵ
//beg1 ����1��ʼ������
//end1 ����1����������
//beg2 ����2 ��ʼ������
//end2 ����2����������
//dest Ŀ��������ʼ������
*/

/*P262 set_union
set_union(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest)
//���������ϵĲ���
//�������ϱ�������������   Ŀ���������ٿռ���Ҫ�������������
//beg1 ����1��ʼ������
//end1 ����1����������
//beg2 ����2 ��ʼ������
//end2 ����2����������
//dest Ŀ��������ʼ������
*/

/*P263 set_difference
���������ϵĲ
set_difference(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
//���������ϵĲ
//�������ϱ�������������   Ŀ���������ٿռ���Ҫ���������е����ֵ
//beg1 ����1��ʼ������
//end1 ����1����������
//beg2 ����2 ��ʼ������
//end2 ����2����������
//dest Ŀ��������ʼ������

v1 ��0 1 2 3 4 5 6 7 8 9
v2��5 6 7 8 9 ��10 11 12 13 14
v1��v2� 01234
v2��v1�  10 11 12 13 14

set_differenc ����ֵ�ǲ�����һ��Ԫ�ص�λ��
*/
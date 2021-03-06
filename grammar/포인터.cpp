#include <stdio.h>

int main()
{
  int *pInt = nullptr;
  /*
    nullptr 이라고 칭하는 이유는
    이 포인터가 아무것도 가리키지 않게 초기화 한 것
    int 앞에 *이 붙었기 때문에 int 자료형의 포인터 변수라고 한다.
    주소를 저장하는 용도이기 때문에 포인터 변수의 크기는 다 같고
    플랫폼에 따라 다르다. (한번에 처리 할 수 있는 단위 32bit = 4byte ,64bit = 8byte)
    Ex char, short, int 등등은 각 각 크기 만큼을 가리킨다고 개념을 잡자
  */

  // 포인터 변수의 크기는 플랫폼에 다르다.
  int iSize = sizeof(pInt);

  int i = 100;
  float f = 3.f;

  int *pInt = (int *)&f;

  int *pInt2 = &i;
  /*
     & = Ampersand
     &i 변수의 주소 값을 가르킨다.
  */
  // 주소로 접근
  i = *pInt;
  /*
      주소의 단위는  byte를 사용하며,
      int형 포인터라서 int형 변수만 받을 수있다.  (bit 단위로 사용 못함)
      위의 int* pInt = (int*)&f; 에서  float 형을 int형으로 강제 캐스팅 했기 때문에
      문법적인 문제가 없지만 주소값을 저장하기 때문에 생각한 것 보다 엉뚱한 값을 받을 수 있다.
      포인터의 개념을 파악하고 주의 해야한다.
  */

  //  pInt += 1;
  //  pInt 는 int* 변수 이기 때문에, 가리키는 곳을 int로 해석한다.
  //  따라서 주소값을 1증가하는 의미는 다른 int 위치로 접근하기
  //  위해서 sizeof(int) 단위로 증가하게 된다. (int 면 4씩)

  //  포인터의 배열
  //  배열의 특징 1. 메모리가 연속적인 구조이다.2. 배열의 이름은 배열의 시작 주소이다.

  int iArr[10] = {};

  // int 단위로 접근
  *(iArr + 1) = 10; // iArr[1] = 10; 같은 의미

  //  scanf_s("%d", &a);
  //  내가 입력한 주소를 받아 갔기 때문에 내가 입력받고 싶어하는
  //  주소를 역참조해서 값을 받아오기 때문이다.

  return 0;
}
int main()
{
  // 실수값은 근사값으로 표현한다.
  // 정수표현 방식과 실수 표현 방식은 다르다.
  // 실수 표현방식은 정밀도에 의존한다.
  // 따라서 double 자료형이 float 보다 더 아래의 소수점까지 정확하게 표현이 가능하다.

  // 정수는 정수끼리, 실수는 실수끼리 연산하되, 
  // 두 표현방식의 피 연산자가 연산될 경우 명시적으로 변환하자
  
  // EX)
  float f = 10.2415f + (float)20;
  /*
    (float)20; 처럼 명시적으로 표현하자
    float f = 10.2415f + 20; 을 해도 컴파일러가
    20을 float 형태로 변환을 해주지만 명시하는 습관을 들이자
    또는 뒤에 20.f를 붙여줘도 상관없다.
  */
  return 0;
}
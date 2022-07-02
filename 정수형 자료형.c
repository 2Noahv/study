int main()
{
    signed char c = 0;

    c = 0;
    c = 255;
    c = -1;

    /*
    signed가 생략됨(컴파일러에 의해서, 편리해짐)
    양수, 음수를 다 표현을 한다.
    (-128 ~0 ~127 표현을 한다.)

    위의 경우에는 1byte(2의 8승)
    0000 0000 일 때 양의 정수로 표현한다. (0 ~127)
    1000 0000 일 때 음의 정수로 표현한다. (-1 ~128)

    그래서 앞의 bit가 0일 때 양수, 1일 때 음수를 표현하기 위한
    MSB(Most Significant Bit) 최상위 부호 bit 라고 한다.
    주의하자, 개념을 잘 파악해야 한다.

    따라서, 음수의 개념을 잡자면
    10 + (-10) = 0 일 때 음수 10
    5 + (-5) = 0 일 때 음수 5

    Ex) 예를 들어보자
    0111 1111      (127)
    1000 0001 + (? ? ? )
        ------------
    두 수를 더해주면 1이 올라가면서 나머지는 0이 되고
    최종적으로 1 0000 0000이 나오지만 우리는 1byte를 예로 들고 있으니
    결론은 0이 나온다.
    그러므로 1000 0001 은 - 127인 것을 알 수 있다.

    --------------------------------------------
    2의 보수법 Tip !
    0000 0010 = 2 일 때
    1111 1101 = 대응되는 양수의 부호를 반전하고

    1111 1110 = 1을 더한다.

    여기서 다시 더한다.
    0000 0010
    1111 1110 +
    ------------
    0000 0000

    결과 값
    1111 1110 = -2인 것을 알 수 있다.
    --------------------------------------------
    */

    unsigned char c1 = 0;
    c1 = 255;

    c1 = -1;
    /*
    그럼 c = -1; 은 뭐가 될까 ?
    컴파일 해보면 255가 나온다.
    컴파일 오류라고 생각 할 수도 있다.
    하지만 컴파일 오류가 아니다.

    중요 포인트 !
    동일한 메모리 크기 공간에 동일한 값이 채워졌어도
    어떻게 해석을 하냐에 따라서 전혀 다르게 해석을 할 수 있다.
    */

    return 0;
}
​
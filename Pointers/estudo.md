## Pointers

Pointers são variáveis que guardam o endereço de outra variável.

                Endereço  valor
    int a;  ->  0x000001   NULL
    int *p; ->  0x000100   NULL

    //O &a devolve o endereço da variável a
    p = &a; ->  0x000100   0x000001
    //O pointer p aponta agora para o endereço de memória do pointer a
    //Assim consegue efetuar operações no valor desta variável.

Vamos experimentar fazer print das variaveis:

                            Output
    printf("%p\n", p); ->  0x000001 -> Valor guardado no pointer p

    printf("%p\n", &a); -> 0x000001 -> Endereço de memoria da variavel a

    printf("%p\n", &p); -> 0x000100 -> Endereço de memoria da variavel p

    //Vamos atribuir um valor á variável a
    a = 5;
    printf("%d\n", a); -> 5 -> Valor guardado na variavel a

    //Pointer Dereferencing
    //Para se obter o valor do endereço de memoria que o pointer está a apontar
    //Usa-se o operador de dereferencionamento (ex *p devolve o valor da variavel que p esta a guardar)
    //Como o pointer p está a apontar para a variável a, se efetuarmos o dereferencionamento, vamos obter o valor de a
    printf("%p\n", *p); -> 5 -> Valor que está no endereço que o pointer está a apontar (0x000001 = &a)

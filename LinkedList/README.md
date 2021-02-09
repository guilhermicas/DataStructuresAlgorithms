# Linked List com Array vs Linked List com memória dinâmica

# Complexidade de tempo

# Vantagens e desvantagens entre os dois

Uma linked list com memória dinâmica, tem a vantagem de não ter um espaço fixo, poder alocar memória quando precisar, e livrar-se de memória quando já não necessita.
Um array já não é assim, é necessário definir um tamanho para a alocação poder ser efetuada. O espaço, quer esteja a ser utilizado ou não, está alocado, e isso não permite outras aplicações acederem a essa memória.
Mas com um array, a complexidade de tempo em termos de operações, é muito melhor, como a memória é contígua, pode se aceder instantaneamente (O(1)), numa linked list com memória dinâmica, muitas das operações requerem passar por maior parte da lista, fazendo com que maior parte das operações tenham uma complexidade de tempo de O(n).

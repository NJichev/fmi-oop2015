Упражнение 10
===

Задачи
---
**Задача 1** Singleton
Създайте клас ChessBoard, който да позволява само 1 инстанция.


**Задача 2** Multiton
Създайте клас ActivePlayer, който да позволява максимум 22 инстанции и има метод ```ActivePlayer getPlayer(int)```, който връща една от тези инстации.


**Задача 3** ChessBoardFactory
Изнесете логиката за Singleton имплементацията от класа ```ChessBoard``` в нов клас - ```ChessBoardFactory```.


**Задача 4** SingletoneFactory
Създайте шаблонен клас, за factory класове, които позволяват само 1 инстация от определен клас.


**Задача 10** Намерете начин да се изрази:
  sort(T * arr, int n, bool (comperator*)(T, T) = operator<(T, T))
Примери:

int a[10];
sort(a, 10, operator<(int, int));

Decimal d[10];
sort(d, 10, Decimal::operator<(Decimal))

bool someComperator(Decimal a ,Decimal b) ...

...
sort(d, 10, someComperator);


Reference
---
 * [Design Patterns](https://en.wikipedia.org/wiki/Design_pattern)
 * [Singleton](https://en.wikipedia.org/wiki/Singleton_pattern)
 * [Multiton](https://en.wikipedia.org/wiki/Multiton_pattern)
 * [Factory Method](https://en.wikipedia.org/wiki/Factory_method_pattern)
 * [SOLID Principles](https://en.wikipedia.org/wiki/SOLID_%28object-oriented_design%29)
 * [Friend classes in C++](http://www.cplusplus.com/doc/tutorial/inheritance/)

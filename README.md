# C++ lessons

#### Краткое описане
Это урок и меня заставили это делать, ну да нормально, я в принцепе не против

***This is Char***

<img src="https://vignette.wikia.nocookie.net/ninjago/images/0/07/%D0%96%D0%B5%D0%B7%D0%BB%D0%90%D1%84%D0%B8%D0%B3%D0%B5%D0%B7%D0%BB.jpg/revision/latest?cb=20190610091622&path-prefix=ru" width="200" height="200" />

> - ***Чар спера-змей а ты нет***

***This is C++***

<img src="https://cdn.tproger.ru/wp-content/uploads/2019/06/cpp-hidden-features-mini-880x308.jpg" width="200" height="200" />

> - ***Зысыс с плас плас бат юу ноу***

#### Список зантий
> - lesson 1 - 01.01.01
> - lesson 2 - 02.02.02
> - lesson 3 - 03.03.03
> - lesson 4 - 04.04.04
> - lesson 5 - 05.05.05
> - lesson 6 - 06.06.06
> - lesson 7 - 07.07.07
> - lesson 8 - 08.08.08
> - lesson 9 - 09.09.09
> - lesson 10 - 10.10.10
> - lesson 11 - 11.11.11
> - lesson 12 - 12.12.12
> - lesson 13 - 13.13.13
> - lesson 14 - 14.14.14
> - lesson 15 - 15.15.15

### Вставка кода

- Запуск C++ код: примеры кода с описание
```
#include <iostream>
#include "func.hpp"
using namespace std;
void print(); // прототип
char getSymbol(); // прототип
int main() {
    char a = 'x';
    char arr[] = {'h','e','l','l'};
    int arrInt[] = {1,2,3,4};

    print();
    a = getSymbol();                //v1
    cout << getSymbol() << endl;    //v2

    return 0;
}
```

### Git comand

- Основные команды гита 
  * инициализация репозитория на компьютере в созданной папке
    ```
    git init
    ```
  * добавляем любой созданный файл
    ```
    git add test.filetype
    ```
    
  * создаем изменение в репозитории, добавляя файл и обязательно пишем название изменения
    ```
    git commit -m "first commit"
    ```
    
  * подключаем удаленный репозиторий с сайта называя удаленный репозиторий = origin (это пример ссылки на мой репозиторий)
    ```
    git remote add origin https://github.com/name/123.git
    ```
    
  * заливаем на сайт (удаленный репозиторий) наш коммит с нашего локального репозитория называемого master
    ```
    git push -u origin master
    ```
    
> - если вы дома хотите закачать файл в удаленный репозиторий (на сайт), вам нужно сделать следующее:
> - инициализировать гит-репозиторий на компьютере и прописать настройки имени и почты
> - скачать файлы с удаленного репозитория (если они там есть)
> - создать или скопировать файл проекта в папку внутри репозитория
> - добавить изменение в коммит
> - сделать коммит с комментарием изменений
> - закачать файлы с локального репозитория на удаленный (последняя команда в предыдущем сообщении)

   * Не забываем после инициализации репозитория на компьютере дома прописывать настройки
   ```
   ngit config --global user.name "MyMarvel"
   ```
   
   ```
   git config --global user.email "xxx@xxx.com"
   ```
   а то у вас ничего не получиться

### Список основных ресурсов
***Git comand***
*Прочтите, у кого есть проблемы с чем-то*
> - http://nikita-petrov.com/drupal/kak-rabotat-s-github-repozitoriyami
> - https://www.markdownguide.org/basic-syntax/

ДЗ
======

Функции для файлов
---
данные функции записывают в структуры пользователей, книги, студентов и взятые книги соответственно.  

```C
struct SUser* GetUsers(int *Num);
struct SBook* GetBooks(int *Num);
struct SStudents* GetStudents(int *Num);
struct STakenBook* GetTakenBook(int *Num);
```
данные функции записывают в файл из структуры книги, студенты и взятые книги соответственно. Num - кол-во записанных строк
    
```C
void PutBooks(struct SBook *Books, int Num);
void PutStudents(struct SStudents *Srudents, int Num);
void PutTakenBook(struct STakenBook *StudentBooks, int Num);
```

Функции для кинг
-----
`void B_add(struct SBook **Books, int *Num)` - добавляет книгу. **Books - адрес структуры с книгами, *Num - адрес кол-во книг

`void B_delete(struct SBook **Books, int *Num)` - удаляет книгу. **Books - адрес структуры с книгами, *Num - адрес кол-во книг

`void B_give(struct SBook **Books, int Num)` - выдает книгу. **Books - адрес структуры с книгами, Num -  кол-во книг

`void B_back(struct SBook **Books, int Num)` - забирает книгу у студента. **Books - адрес структуры с книгами, Num -  кол-во книг

`void B_onhandshow(struct SBook *Books, int Num)` - показывает для определенной книги студентов, которые ее взяли. *Books - структура с книгами, Num -  кол-во книг

Функции для Студента
-----
`void S_add(struct SStudents **Students, int *Num)` - добавляет студента. **Students - адрес структуры со студентами, *Num - адрес кол-во книг

`void S_delete(struct SStudents **Students, int *Num)` - удаляет студента. **Students - адрес структуры со студентами, *Num - адрес кол-во книг

`void S_edit(struct SStudents **Students, int Num)` - меняет информацию студента. **Students - адрес структуры со студентами, Num -  кол-во студентов

`void S_lookup(struct SStudents *Students, int Num)` - забирает книгу у студента. *Students - структура со студентами, Num -  кол-во студентов

`void S_onhandshow(struct SStudents *Students, int Num)` - показывает для определенного студента книги, которые он взял. *Students - структура со студентами, Num -  кол-во студентов

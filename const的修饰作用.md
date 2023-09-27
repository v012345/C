 //1. 
  //指针pString1指向的字符串不可修改。
  //指针pString1的内容可以修改。
  const char *pString1 = pTmp;
  pString1[1] = 'd';    //报错
  pString1 = pAnother;    //合法

//2.
//指针pString3指向的字符串可修改。
//指针pString3的内容不可修改。指针pString3必须初始化。
char * const pString3 = pTmp;
pString3[1] = 'd';    //合法
pString3 = pAnother;    //报错

3、const修饰函数返回值
如果我们的函数的返回值是以 指针形式 返回的，如果在函数前面加上const修饰，则表示指针指向的内容是不能被改变的，并且接收返回值的指针变量必须是const修饰的。函数的返回值为某个对象时，如果将其声明为const时，多用于操作符的重载。不要轻易的将函数的返回值类型定为const，除了重载操作符外一般不要将返回值类型定为对某个对象的const引用;
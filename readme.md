
## help 

+ 计算机中所有的数据都必须放在内存中，不同类型的数据占用的字节数不一样，例如 int 占用4个字节，char 占用1个字节。为了正确地访问这些数据，必须为每个字节都编上号码，就像门牌号、身份证号一样，每个字节的编号是唯一的，根据编号可以准确地找到某个字节。
+ 我们将 *内存中字节的编号称为地址（Address）或指针（Pointer）* 。地址从 0 开始依次增加，对于 32 位环境，程序能够使用的内存为 4GB，最小的地址为 0，最大的地址为 0XFFFFFFFF。
+ C语言用变量来存储数据，用函数来定义一段可以重复使用的代码，它们最终都要放到内存中才能供 CPU 使用。
+ *数据和代码都以二进制的形式存储在内存中* ，计算机无法从格式上区分某块内存到底存储的是数据还是代码。当程序被加载到内存后，操作系统会给不同的内存块指定不同的权限，拥有读取和执行权限的内存块就是代码，而拥有读取和写入权限（也可能只有读取权限）的内存块就是数据。
+ CPU 只能通过地址来取得内存中的代码和数据，程序在执行过程中会告知 CPU 要执行的代码以及要读写的数据的地址。如果程序不小心出错，或者开发者有意为之，在 CPU 要写入数据时给它一个代码区域的地址，就会发生内存访问错误。这种内存访问错误会被硬件和操作系统拦截，强制程序崩溃，程序员没有挽救的机会。
+ CPU 访问内存时需要的是地址，而不是变量名和函数名！变量名和函数名只是地址的一种助记符，当源文件被编译和链接成可执行程序后，它们都会被替换成地址。编译和链接过程的一项重要任务就是找到这些名称所对应的地址。
+ 假设变量 a、b、c 在内存中的地址分别是 0X1000、0X2000、0X3000，那么加法运算c = a + b;将会被转换成类似下面的形式：0X3000 = (0X1000) + (0X2000);( )表示取值操作，整个表达式的意思是，取出地址 0X1000 和 0X2000 上的值，将它们相加，把相加的结果赋值给地址为 0X3000 的内存
+ 需要注意的是, =*= 虽然变量名、函数名、字符串名和数组名在本质上是一样的，它们都是地址的助记符，但在编写代码的过程中，我们认为变量名表示的是数据本身，而函数名、字符串名和数组名表示的是代码块或数据块的首地址。.

## pointer 
-----------------------------------------------------------------------------------
+ 数据在内存中的地址也称为 *指针* ，如果一个变量存储了一份数据的指针，我们就称它为 *指针变量* 。
+ 指针变量的值就是某份数据的地址，这样的一份数据可以是数组、字符串、函数，也可以是另外的一个普通变量或指针变量
+ 也就是说，使用指针是间接获取数据，使用变量名是直接获取数据，前者比后者的代价要高。
+ =*= 在不同的场景下有不同的作用; =*= 可以用在指针变量的定义中，表明这是一个指针变量，以和普通变量区分开；使用指针变量时在前面加 =*= 表示获取指针指向的数据，或者说表示的是指针指向的数据本身。
+ 也就是说，定义指针变量时必须带 =*= ，给指针变量赋值时不能带 =*= 。
+ 指针变量加减运算的结果跟数据类型的长度有关，而不是简单地加 1 或减 1
+ 指针变量除了可以参与加减运算，还可以参与比较运算。当对指针变量进行比较运算时，比较的是指针变量本身的值，也就是数据的地址。如果地址相等，那么两个指针就指向同一份数据，否则就指向不同的数据。

## notice

+ 万法归宗, come back to c.
+ *一切都是地址*

## tips

+ linux运行一个c文件
```
 gcc filename.c -o filename
 ./filename

```
  
+ 一个小技巧 
```
objdump -h a.out
```

## something 
-----------------------------------------------------------------------------------
### C 语言规定，标识符可以是字母(A～Z，a～z)、数字(0～9)、下划线_组成的字符串，并且第一个字符必须是字母或下划线。在使用标识符时还有注意以下几点：
    1. 标识符的长度最好不要超过8位，因为在某些版本的C中规定标识符前8位有效，当两个标识符前8位相同时，则被认为是同一个标识符。 
    2. 标识符是严格区分大小写的。例如Imooc和imooc 是两个不同的标识符。 
    3. 标识符最好选择有意义的英文单词组成做到"见名知意"，不要使用中文。
    4. 标识符不能是C语言的关键字。想了解更多C语言关键字的知识，请查阅WIKI。
    5. 在我们玩游戏的时候，游戏中的角色是有类型的，有敏捷性、力量型、法术性等等。同样C语言中的数据也是有类型的，C语言中，数据类型可分为：基本数据类型，构造数据类型，指针类型，空类型四大类。如图所示： 

### 算法 
+ 刚看到的定义是：求解一个问题需要遵循的、被清楚地指定的简单指令的集合。对于一个问题，一旦跟定某种算法并且（以某种方式）确定其是正确的，那么重要的一步就是确定该算法讲需要多少 *时间* 或 *空间* 的资源量的问题。之前有点理解错了吗？
  


+ [让程序员抓狂的排序算法教学视频](http://ijiaober.github.io/2014/08/07/sorting-algorithm/)

[](./images/blue-bird.jpg)



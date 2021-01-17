package Demo5理解多态;

/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2021 - 01 - 17
 * Time:17:15
 */
/*学写了向上转型、动态绑定、方法重写后，我们就可以使用多态（Polypeptide）形式来设计程序
 * 我们可以只写一些只关注父类的代码，能够同时兼容各种子类的情况；*/




public class Test {

    public static void main(String[] args) {

    }
    public static void main1(String[] args) {
        Shape shape1 = new Flower();
        Shape shape2 = new Circle();
        Shape shape3 = new Rect();
        drawShape1(shape1);
        drawShape1(shape2);
        drawShape1(shape3);
    }
    //打印单个图形
    //（1）类调用者对类的使用成本进一步降低；
    public static  void drawShape1(Shape shape){
        shape.draw();
    }

    //不基于多态的实现打印形状
    //（2）能够降低代码的“圈复杂度”，避免使用大量的if-else;
    public static void drawShapes2(){
        Rect rect = new Rect();
        Circle circle = new Circle();
        Flower flower = new Flower();
        String[] shapes = {"circle","rect","flower","circle","rect"};
        for (String s:shapes) {
            if(shapes.equals("circle")){
                circle.draw();
            }else if(shapes.equals("rect")){
                rect.draw();
            }else if(shapes.equals("flower")){
                flower.draw();
            }
        }
    }

    //如果使用多态，则不必使用这么多的if-else，简化代码
    public static void drawShape(){
        //创建一个Shape对象数组
        Shape[] shapes = {new Circle(),new Rect(),new Flower(),new Rect(),new Circle()};
        for (Shape sh:shapes) {
            sh.draw();
        }
    }


}

/*
 * 类的调用者在编写drawShape()这个方法的时候，参数类型为Shape（父类）,此时在该方法内部并不知道，
 * 也不关注当前的shape引用指向的是哪个类型（哪个子类）的实例。
 * 此时shape这个引用调用draw方法可能会有多种不同的表现（和shape对应的实例相关），这种行为就称为多态。
 * 多态——顾名思义：一个引用，能表现出多种不同形态；
 * 代码中的多态——一个引用到底是指向父类对象，还是某个子类对象（可能由多个），也是要根据上下文的代码来确定。*/

/*2.使用多态的好处：
* （1）类调用者对类的使用成本进一步降低；
* 封装是让类的调用者不需要知道类的实现细节；
* 多态能让类的调用者连这个类的类型是什么都不必知道，只需要知道这个对象具有哪些方法即可；
* 因此，多态可以理解成是封装的更进一步，让类调用者对类的使用成本进一步降低；
* （2）能够降低代码的“圈复杂度”，避免使用大量的if-else;
* (3)可扩展能力强——如果新增一种新的形状，使用多态的方式代码改动成本也比较低；
* 对于类的调用者来说（drawShapes方法），只要创建一个新类的实例即可，改动成本很低；
* 而对于不使用多态的情况，就要把drawShapes中的if-else进行一定的修改，改动成本很高；
* */

/*3.向下转型
* 向上转型——子类对象转成父类对象；
* 向下转型——父类对象转成子类对象
* instanceof可以判定一个引用是否是某个类的实例，如果是，则返回true,*/

/*4.super关键字
* 前面的代码中由于使用了重写机制，调用到的是子类的方法。
* 如果需要在子类内部调用父类的方法，可以使用super关键字；
* super关键字表示获取到父类实例的引用；
* 常见的两种方法：
* （1）使用super来调用父类的构造器 ；
* （2）使用过super调用父类的普通方法*/

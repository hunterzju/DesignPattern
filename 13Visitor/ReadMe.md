# Visitor模式
访问者模式将**处理过程**和**数据结构**分离。

## 双重分发
* accept由element调用：element.accept(visitor);
* visit由visitor调用：visitor.visit(element);

## 开闭原则
对扩展开放，对修改关闭 - 不修改现有类的前提下扩展功能；

## 易于增加Visitor
直接新增新的Visitor子类，实现对应的处理逻辑。

## 难于增加Element
如果Element中有新的子类，则需要在所有Visitor中增加对应的处理方法。




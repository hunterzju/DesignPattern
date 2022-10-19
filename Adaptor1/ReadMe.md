# Adaptor1
Adaptor设计模式1 - 使用类继承的适配器。
* Painter - 待适配的类或者接口
* Banner - 适配的具体方法
* PainterBanner - 适配器

PainterBanner同时继承了Painter和Banner，用Banner中的方法填充Painter中的接口。

enum Foo {
    FooA = 2,
    FooB = 5,
    Foo1,
};

// translate
// target=x86_64-windows-msvc
// expect=fail
//
// pub const FooA: c_int = 2;
// pub const FooB: c_int = 5;
// pub const Foo1: c_int = 6;
// pub const enum_Foo = c_int;
//
// pub const Foo = enum_Foo;

struct a {
    struct { int x; };
};
struct b {
    struct { int y; };
};

// translate
//
// const struct_unnamed_1 = extern struct {
//     x: c_int = 0,
// };
// pub const struct_a = extern struct {
//     unnamed_0: struct_unnamed_1 = @import("std").mem.zeroes(struct_unnamed_1),
// };
// const struct_unnamed_2 = extern struct {
//     y: c_int = 0,
// };
// pub const struct_b = extern struct {
//     unnamed_0: struct_unnamed_2 = @import("std").mem.zeroes(struct_unnamed_2),
// };

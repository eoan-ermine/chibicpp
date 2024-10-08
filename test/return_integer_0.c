// RUN: %edir/chibicpp %s > %t.s
// RUN: %cc -static -o %t %t.s
// %t | filecheck %s --match-full-lines
// CHECK: 0

0
static int staticfunc1(void) {
    return 2;
}
static int staticfunc2(void) {
    return 2;
}

int other_space(void) {
    staticfunc1();
    staticfunc2();
    return 0;
}

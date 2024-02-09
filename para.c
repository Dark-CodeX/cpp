int func(void)
{
    return 120;
}

int func2()
{
    return 69420;
}

int main()
{
    func(21); // error as not arg was present in func()

    func2(189341, 12312, 13123 ,1123);
    // no errors, just warning
}
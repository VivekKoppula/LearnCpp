# Auto

## Notes
1. The second operator is implicitly converted to a non number. 

2. So when we have the following,

```cpp
std::cout << "n1 + 2  : " << (n1 + 2) << std::endl;
```

The compiler will try to convert int 2 to the number using the ctor of the number.

```cpp
Number(int value );
```

But if you mark this to explicit ctor as follow, then it will not work.

```cpp
explicit Number(int value );
```

Then it will result in a compiler error.

```txt
no known conversion for argument 2 from 'int' to 'const Number&'
```

## References

1. 


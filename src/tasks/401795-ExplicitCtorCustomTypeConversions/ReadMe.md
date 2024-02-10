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

You can add an implicit operetor as follows, then it will work.

```cpp
operator double()const{
    return (static_cast <double> (m_wrapped_int));
}
```

Now try making this operator also explicit. So what we now have is both the ctor and the operator explicit as follows. Then again it WILL NOT work.

```cpp
explicit Number(int value);

explicit operator double()const{
    return (static_cast <double> (m_wrapped_int));
}
```

So to make it work, make one of those two into implicit. Then it will work.



## References

1. 


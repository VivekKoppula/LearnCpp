# Auto

## Notes
1. In this example we had setup a spaceship operator. Its a custome one. So we need to setup an equals equals operator as follows.

```cpp
bool operator==(const ComparableString& right_side) const{
    return ( m_str.size() == right_side.m_str.size());
}
```


## References

1. 


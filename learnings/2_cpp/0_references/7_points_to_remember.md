#### References - Points to Remember

1.  Create an alias

2. Internally implemented using constant pointers
3. So, they must must be assigned when declared

```
// this is wrong
int &y;
int x = 10;
y = x;

// this is right
int x = 10;
int &y = x; // assigned when declared 
```

4. Cannot refer to another location once a location is assigned to it 
(Once it has become alias of x, it cannot become alias of any other variable)

5. Cannot have reference initialized as NULL

6. Safer

7. Easy to use
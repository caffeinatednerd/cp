#### Properties of Friend Function

1. Granted: Friendship is granted not taken

2. Non-Mutual: If class A is a friend of B (A can access private data memebers of B), doesn't mean B will also have access to members of A

3. Not Transitive: if A is a friend of B and B is a friend of C DOESN'T mean A is a friend of C

4. Non-Inherited: Inherited Parent class is a friend, then inherited class DOES NOT automatically become friend unless explicitly specified
```
bool Dfs(V) {
	if( V 为终点)
	return true;
	if( V 为旧点)
	return false;
	将V标记为旧点;
	对和V相邻的每个节点U {
	if( Dfs(U) == true)
	return true;
	}
	return false;
}
```
```
int main()
{
	将所有点都标记为新点;
	起点 = 1
	终点 = 8
	cout << Dfs(起点);
}
```
```
Node path[MAX_LEN]; //MAX_LEN取节点总数即可
int depth;
bool Dfs(V) {
	if( V为终点){
	path[depth] = V;
	return true;
	}
	if( V 为旧点)
	return false;
	将V标记为旧点;
	path[depth]=V;
	++depth;
```
```
对和V相邻的每个节点U
{
	if( Dfs(U) == true)
	return true;
}
	--depth;
	return false;
}
int main()
{
	将所有点都标记为新点;
	depth = 0;
	if( Dfs(起点)) {
		for(int i = 0;i <= depth; ++ i)
		cout << path[i] << endl;
	}
}
```
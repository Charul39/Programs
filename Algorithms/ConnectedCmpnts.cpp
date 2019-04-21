lld dfs(lld s)
{
  vis[s] = true;
  lld cnt = 1;
  for(lld i=0;i<v[s].size();i++)
  {
    if(vis[v[s][i]]==0)
      cnt += dfs(v[s][i]);
  }
  return cc[s] = cnt;
}

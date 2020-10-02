//transform edges into adjacency lists
    vector<list<int>> adj_list;
    adj_list.resize(n);
    for(auto edge: edges)
    {
        int u = edge[0];
        int v = edge[1];
        int u_idx = edge[0] - 1;
        int v_idx = edge[1] - 1;
        adj_list[u_idx].push_back(v);
        adj_list[v_idx].push_back(u);
    }

    //initialize two arrays holding 
    //1. whether path to node from s has been found 
    //2. respective distance from s
    bool found[n];
    vector<int> dist;
    for(int i = 0; i < n; i++)
    {
        found[i] = false;
        dist.push_back(-1);
    }
    int idx_s = s-1;
    found[idx_s] = true;

    dist[idx_s] = 0;

    //initialize queue holding only s in the beginning
    queue<int> q;
    q.push(s);

    //queue q marks boundary between visited and unvisited area.
    //while loop ends when all nodes have been visited
    while(!q.empty())
    {
        int u = q.front();
        int idx_u = u - 1;

        //remove first node from q and add every of its unvisited neighbor to q's end.
        //then mark every neighbor as visited
        //their distance is by 6 bigger than the parent node
        q.pop();
        for(auto v: adj_list[idx_u])
        {
            int idx_v = v - 1;
            if(false == found[idx_v])
            {
                found[idx_v] = true;
                dist[idx_v] = dist[idx_u]+6;
                q.push(v);
            }
        }
    }

    //remove starting node from distance vector to match solution.
    dist.erase(dist.begin() + idx_s);
    return dist;
}

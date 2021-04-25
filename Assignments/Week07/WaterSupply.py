class Graph:
 
    # init function to declare class variables
    def __init__(self, V):
        self.V = V
        self.adj = [[] for i in range(V)]
 
    def DFSUtil(self, temp, v, visited):
 
        # Mark the current vertex as visited
        visited[v] = True
 
        # Store the vertex to list
        temp.append(v)
 
        # Repeat for all vertices adjacent
        # to this vertex v
        for i in self.adj[v]:
            if visited[i] == False:
 
                # Update the list
                temp = self.DFSUtil(temp, i, visited)
        return temp
 
    # method to add an undirected edge
    def addEdge(self, v, w):
        self.adj[v].append(w)
        self.adj[w].append(v)
 
    # Method to retrieve connected components
    # in an undirected graph
    def connectedComponents(self):
        visited = []
        cc = 0
        count = 1
        for i in range(self.V):
            visited.append(False)
        for v in range(self.V):
            if visited[v] == False:
                temp = []
                k = len(self.DFSUtil(temp, v, visited))
                cc += 1
                count *= k % (1000000007)
        count *= (cc * (cc - 1)) // 2
        return cc, count
 
 
# Driver Code
if __name__ == "__main__":
 
    n, m = map(int, input().split())
    g = Graph(n)
    for i in range(m):
        u, v =  map(int, input().split())
        g.addEdge(u - 1, v - 1)
    cc, count = g.connectedComponents()
    print(cc - 1)
    print (count)
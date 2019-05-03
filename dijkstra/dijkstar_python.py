def dijkstra(graph, src, dest, visited=[], distances={}, predecessors={}):
    if src not in graph:
        raise TypeError('최단경로 트리의 루트를 찾을 수 없습니다.')
    if dest not in graph:
        raise TypeError('최단경로의 대상을 찾을 수 없습니다.')

    if src == dest:

        path = []
        pred = dest
        while pred != None:
            path.append(pred)
            pred = predecessors.get(pred, None)
        print('최단경로 : '+str(path)+" cost="+str(distances[dest]))
    else:
        if not visited:
            distances[src] = 0

        for neighbor in graph[src]:
            if neighbor not in visited:
                new_distance = distances[src] + graph[src][neighbor]
                if new_distance < distances.get(neighbor, float('inf')):
                    distances[neighbor] = new_distance
                    predecessors[neighbor] = src
        visited.append(src)
        unvisited = {}
        for k in graph:
            if k not in visited:
                unvisited[k] = distances.get(k, float('inf'))

        x = min(unvisited, key=unvisited.get)
        dijkstra(graph, x, dest, visited, distances, predecessors)


graph = {'S': {'A': 2, 'B': 1}, 'A': {'S': 3, 'B': 4, 'C': 8}, 'B': {'S': 4, 'A': 2, 'D': 2}, 'C': {'A': 2, 'D': 7, 'T': 4}, 'D': {'B': 1, 'C': 11, 'T': 5}, 'T': {'C': 3, 'D': 5}}
dijkstra(graph, 'S', 'T')

     for(auto child : adj_list[parent]){

            if(!visited[child]){
                q.push(child);
                visited[child] = true;
            }

        }